
extern zend_class_entry *phalcon_datamapper_pdo_connection_abstractconnection_ce;

ZEPHIR_INIT_CLASS(Phalcon_DataMapper_Pdo_Connection_AbstractConnection);

PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, __call);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, beginTransaction);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, commit);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, connect);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, disconnect);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, errorCode);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, errorInfo);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, exec);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAffected);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAll);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAssoc);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchColumn);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchGroup);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchObject);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchObjects);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchOne);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchPairs);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchValue);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAdapter);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAttribute);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAvailableDrivers);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getDriverName);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getProfiler);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getQuoteNames);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, inTransaction);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, isConnected);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, lastInsertId);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, perform);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, prepare);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, query);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, quote);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, rollBack);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, setAttribute);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, setProfiler);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, performBind);
PHP_METHOD(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchData);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection___call, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_begintransaction, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_begintransaction, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_commit, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_commit, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_connect, 0, 0, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_connect, 0, 0, IS_VOID, NULL, 0)
#endif
ZEND_END_ARG_INFO()
#else
#define arginfo_phalcon_datamapper_pdo_connection_abstractconnection_connect NULL
#endif

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_disconnect, 0, 0, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_disconnect, 0, 0, IS_VOID, NULL, 0)
#endif
ZEND_END_ARG_INFO()
#else
#define arginfo_phalcon_datamapper_pdo_connection_abstractconnection_disconnect NULL
#endif

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorcode, 0, 0, IS_STRING, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorcode, 0, 0, IS_STRING, NULL, 1)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorinfo, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorinfo, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_exec, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_exec, 0, 1, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchaffected, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchaffected, 0, 1, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchall, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchall, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchassoc, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchassoc, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchcolumn, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchcolumn, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, column)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchgroup, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchgroup, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, flags)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobject, 0, 1, NULL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobject, 0, 1, IS_OBJECT, "NULL", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, className)
#endif
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobjects, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobjects, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, className)
#endif
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchone, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchone, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchpairs, 0, 1, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchpairs, 0, 1, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchvalue, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getadapter, 0, 0, PDO, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getadapter, 0, 0, IS_OBJECT, "PDO", 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getattribute, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, attribute)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getavailabledrivers, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getavailabledrivers, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getdrivername, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getdrivername, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getprofiler, 0, 0, Phalcon\\DataMapper\\Pdo\\Profiler\\ProfilerInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getprofiler, 0, 0, IS_OBJECT, "Phalcon\\DataMapper\\Pdo\\Profiler\\ProfilerInterface", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getquotenames, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getquotenames, 0, 0, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, driver, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, driver)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_intransaction, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_intransaction, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_isconnected, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_isconnected, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_lastinsertid, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_lastinsertid, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
#else
	ZEND_ARG_INFO(0, name)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_perform, 0, 1, PDOStatement, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_perform, 0, 1, IS_OBJECT, "PDOStatement", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_prepare, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_query, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_quote, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_quote, 0, 1, IS_STRING, NULL, 0)
#endif
	ZEND_ARG_INFO(0, value)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, type)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_rollback, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_rollback, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_setattribute, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_setattribute, 0, 2, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, attribute)
#endif
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_setprofiler, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, profiler, Phalcon\\DataMapper\\Pdo\\Profiler\\ProfilerInterface, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_performbind, 0, 3, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_performbind, 0, 3, IS_VOID, NULL, 0)
#endif
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_performbind, 0, 0, 3)
#define arginfo_phalcon_datamapper_pdo_connection_abstractconnection_performbind NULL
#endif

	ZEND_ARG_OBJ_INFO(0, statement, PDOStatement, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, arguments)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchdata, 0, 3, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchdata, 0, 3, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, method)
#endif
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, statement)
#endif
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_datamapper_pdo_connection_abstractconnection_method_entry) {
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, __call, arginfo_phalcon_datamapper_pdo_connection_abstractconnection___call, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, beginTransaction, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_begintransaction, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, commit, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_commit, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, connect, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_connect, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, disconnect, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_disconnect, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, errorCode, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorcode, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, errorInfo, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_errorinfo, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, exec, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_exec, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAffected, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchaffected, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAll, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchall, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchAssoc, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchassoc, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchColumn, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchcolumn, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchGroup, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchgroup, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchObject, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobject, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchObjects, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchobjects, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchOne, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchone, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchPairs, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchpairs, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchValue, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAdapter, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getadapter, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAttribute, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getattribute, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getAvailableDrivers, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getavailabledrivers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getDriverName, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getdrivername, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getProfiler, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getprofiler, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, getQuoteNames, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_getquotenames, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, inTransaction, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_intransaction, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, isConnected, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_isconnected, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, lastInsertId, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_lastinsertid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, perform, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_perform, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, prepare, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_prepare, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, query, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_query, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, quote, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_quote, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, rollBack, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_rollback, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, setAttribute, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_setattribute, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, setProfiler, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_setprofiler, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, performBind, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_performbind, ZEND_ACC_PROTECTED)
	PHP_ME(Phalcon_DataMapper_Pdo_Connection_AbstractConnection, fetchData, arginfo_phalcon_datamapper_pdo_connection_abstractconnection_fetchdata, ZEND_ACC_PROTECTED)
	PHP_FE_END
};
