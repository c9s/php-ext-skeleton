#include "php_foo.h"

#if COMPILE_DL_FOO
ZEND_GET_MODULE(foo)
#endif

static const zend_function_entry foo_functions[] = {
  PHP_FE(foo_hello, NULL)
  PHP_FE_END
};

zend_module_entry foo_module_entry = {
  STANDARD_MODULE_HEADER,
  "Foo", // your extension name
  foo_functions, // where you define your functions
  PHP_MINIT(foo),
  PHP_MSHUTDOWN(foo),
  NULL, // PHP_RINIT(foo)
  NULL, // PHP_RSHUTDOWN(foo)
  PHP_MINFO(foo),
  "0.1",
  STANDARD_MODULE_PROPERTIES
};

PHP_MINIT_FUNCTION(foo) {
  return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(foo) {
  return SUCCESS;
}

PHP_MINFO_FUNCTION(foo) {
}

PHP_FUNCTION(foo_hello) {
  RETURN_TRUE;
}

