# php-ext-skeleton

```sh
phpize
./configure --enable-foo
make 
make install
```

### Replace the extension name

```sh
perl -i -pe 's/foo/bar/g' config.m4 *.h *.c
perl -i -pe 's/Foo/Bar/g' config.m4 *.h *.c
perl -i -pe 's/FOO/BAR/g' config.m4 *.h *.c
```
