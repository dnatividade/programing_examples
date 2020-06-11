## Dynamic Library example and use

example.h: dynamic library header
example.c: dynamic library implementation (code)
use-libexample: program that uses dynamic library

#### How to compile?
*dynamic library:* gcc -shared -fPIC example.c -o libexample.so
*program*: gcc -o use-libexample use-libexample.c -L. -lexample

OBS.: The lib needs to be copied to /usr/lib/ or /usr/local/lib/
Its name needs to be: lib+name+.so
Example: libexample.so
