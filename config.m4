PHP_ARG_ENABLE(foo, whether to enable foo extension support, 
  [--enable-foo Enable foo extension support])

if test $PHP_FOO != "no"; then
    PHP_NEW_EXTENSION(foo, php_foo.c, $ext_shared)
fi
