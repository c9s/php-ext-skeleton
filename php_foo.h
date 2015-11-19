#ifndef _PHP_FOO_H
  #define _PHP_FOO_H
  #ifdef HAVE_CONFIG_H
  #include "config.h"
#endif
#ifdef ZTS
  #include <TSRM.h>
#endif

#include <php.h>

extern zend_module_entry foo_module_entry;

PHP_MINIT_FUNCTION(foo);
PHP_MSHUTDOWN_FUNCTION(foo);
PHP_MINFO_FUNCTION(foo);

PHP_FUNCTION(foo_hello);


#endif
