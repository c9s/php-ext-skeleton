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
  "Foo",                       // your extension name
  foo_functions,               // where you define your functions
  NULL, // PHP_MINIT(foo),     // for module initialization
  NULL, // PHP_MSHUTDOWN(foo), // for module shutdown process
  NULL, // PHP_RINIT(foo)      // for request initialization
  NULL, // PHP_RSHUTDOWN(foo)  // for reqeust shutdown process
  PHP_MINFO(foo),              // for providing module information
  "0.1",
  STANDARD_MODULE_PROPERTIES
};

// Remove the comment if you want to initiazlie something (class entry, resource entry, constants ... etc)
/*
PHP_MINIT_FUNCTION(foo) {
  return SUCCESS;
}
PHP_MSHUTDOWN_FUNCTION(foo) {
  return SUCCESS;
}
*/

PHP_MINFO_FUNCTION(foo) {}

// Your functions here...
PHP_FUNCTION(foo_hello) {
  RETURN_TRUE;
}
