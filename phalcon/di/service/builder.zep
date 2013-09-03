
/*
 +------------------------------------------------------------------------+
 | Phalcon Framework                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
 +------------------------------------------------------------------------+
 | This source file is subject to the New BSD License that is bundled     |
 | with this package in the file docs/LICENSE.txt.                        |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@phalconphp.com so we can send you a copy immediately.       |
 +------------------------------------------------------------------------+
 | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
 |          Eduar Carvajal <eduar@phalconphp.com>                         |
 +------------------------------------------------------------------------+
 */

namespace Phalcon\DI\Service;

/**
 * Phalcon\DI\Service\Builder
 *
 * This class builds instances based on complex definitions
 */
class Builder
{

	/**
	 * Resolves a constructor/call parameter
	 *
	 * @param Phalcon\DiInterface dependencyInjector
	 * @param int position
	 * @param array argument
	 * @return mixed
	 */
	protected function _buildParameter(dependencyInjector, position, argument)
	{

		/**
		 * All the arguments must be an array
		 */
		if typeof argument != "array" {
			throw new Phalcon\DI\Exception("Argument at position ".position." must be an array");
		}

		/**
		 * All the arguments must have a type
		 */
		if !fetch type, argument["type"] {
			throw new Phalcon\DI\Exception("Argument at position " . position . " must have a type");
		}

		switch type {

			/**
			 * If the argument type is 'service', we obtain the service from the DI
			 */
			case "service":
				if !fetch name, argument['name'] {
					throw new Phalcon\DI\Exception("Service 'name' is required in parameter on position " . position);
				}
				if typeof dependencyInjector != "object" {
					throw new Phalcon\DI\Exception("The dependency injector container is not valid");
				}
				return dependencyInjector->get(name);

			/**
			 * If the argument type is 'parameter', we assign the value as it is
			 */
			case "parameter":
				if !fetch value, argument["value"] {
					throw new Phalcon\DI\Exception("Service 'value' is required in parameter on position " . position);
				}
				return value;

			/**
			 * If the argument type is 'instance', we assign the value as it is
			 */
			case "instance":

				if !fetch name, argument['className'] {
					throw new Phalcon_DI_Exception("Service 'className' is required in parameter on position ".position);
				}

				if typeof dependencyInjector != "object" {
					throw new Phalcon_DI_Exception("The dependency injector container is not valid");
				}

				if fetch instanceArguments, argument['arguments'] {
					/**
					 * Build the instance with arguments
					 */
					return dependencyInjector->get(name, instanceArguments);
				} else {
					/**
					 * The instance parameter does not have arguments for its constructor
					 */
					return dependencyInjector->get(name);
				}
			default:
				/**
				 * Unknown parameter type
				 */
				throw new Phalcon\DI\Exception("Unknown service type in parameter on position " . position);
		}
	}

	/**
	 * Resolves an array of parameters
	 *
	 * @param Phalcon\DiInterface dependencyInjector
	 * @param array arguments
	 * @return array
	 */
	private function _buildParameters(<Phalcon\DiInterface> dependencyInjector, arguments)
	{

		/**
		 * The arguments group must be an array of arrays
		 */
		if typeof arguments != "array" {
			throw new Phalcon\DI\Exception("Definition arguments must be an array");
		}

		let buildArguments = [];
		for position, argument in arguments {
			let buildArguments[] = this->_buildParameter(dependencyInjector, position, argument);
		}
		return buildArguments;
	}

	/**
	 * Builds a service using a complex service definition
	 *
	 * @param Phalcon\DiInterface dependencyInjector
	 * @param array definition
	 * @param array parameters
	 * @return mixed
	 */
	public function build(<Phalcon\DiInterface> dependencyInjector, definition, parameters=null)
	{

		if typeof definition != "array" {
			throw new Phalcon\DI\Exception("The service definition must be an array");
		}

		/**
		 * The class name is required
		 */
		if !fetch className, definition["className"] {
			throw new Phalcon\DI\Exception("Invalid service definition. Missing 'className' parameter");
		}

		if typeof parameters == "array" {

			/**
			 * Build the instance overriding the definition constructor parameters
			 */
			if count(parameters) {
				create_instance_params(className, parameters);
			} else {
				create_instance(className);
			}

		} else {

			/**
			 * Check if the argument has constructor arguments
			 */
			if fetch arguments, definition["arguments"] {

				/**
				 * Create the instance based on the parameters
				 */
				create_instance_params(className, this->_buildParameters(dependencyInjector, arguments));

			} else {
				create_instance(className);
			}
		}

		/**
		 * The definition has calls?
		 */
		if fetch paramCalls, definition["calls"] {

			if typeof instance != "object" {
				throw new Phalcon\DI\Exception("The definition has setter injection parameters but the constructor didn't return an instance");
			}

			if typeof paramCalls != "array" {
				throw new Phalcon\DI\Exception("Setter injection parameters must be an array");
			}

			/**
			 * The method call has parameters
			 */
			for methodPosition, method in paramCalls {

				/**
				 * The call parameter must be an array of arrays
				 */
				if typeof method != "array" {
					throw new Phalcon\DI\Exception("Method call must be an array on position ".methodPosition);
				}

				/**
				 * A param 'method' is required
				 */
				if !fetch methodName, method["method"] {
					throw new Phalcon\DI\Exception("The method name is required on position " . methodPosition);
				}

				/**
				 * Create the method call
				 */
				let methodCall = [instance, methodName];

				if fetch arguments, method["arguments"] {

					if typeof arguments != "array" {
						throw new Phalcon\DI\Exception("Call arguments must be an array ".methodPosition);
					}

					if count(arguments) {

						/**
						 * Call the method on the instance
						 */
						call_user_func_array(methodCall, this->_buildParameters(dependencyInjector, arguments));

						/**
						 * Go to next method call
						 */
						continue;
					}

				}

				/**
				 * Call the method on the instance without arguments
				 */
				call_user_func(methodCall);
			}

		}

		/**
		 * The definition has properties?
		 */
		if fetch paramCalls, definition['properties'] {

			if typeof instance != "object" {
				throw new Phalcon\DI\Exception("The definition has properties injection parameters but the constructor didn't return an instance");
			}

			if typeof paramCalls != "array" {
				throw new PhalconºDI\Exception("Setter injection parameters must be an array");
			}

			/**
			 * The method call has parameters
			 */
			for propertyPosition, property in paramCalls {

				/**
				 * The call parameter must be an array of arrays
				 */
				if typeof property != "array" {
					throw new Phalcon\DI\Exception("Property must be an array on position " . propertyPosition);
				}

				/**
				 * A param 'name' is required
				 */
				if !fetch propertyName, property["name"] {
					throw new Phalcon\DI\Exception("The property name is required on position " . propertyPosition);
				}

				/**
				 * A param 'value' is required
				 */
				if !fetch propertyValue, property["value"] {
					throw new Phalcon\DI\Exception("The property value is required on position " . propertyPosition);
				}

				/**
				 * Update the public property
				 */
				instance->{propertyName} = this->_buildParameter(dependencyInjector, propertyPosition, propertyValue);
			}

		}

		return instance;
	}

}