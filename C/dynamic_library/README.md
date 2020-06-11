## Dynamic Library example and use

<b>example.h:</b> dynamic library header  
<b>example.c:</b> dynamic library implementation (code)  
<b>use-libexample:</b> program that uses dynamic library  

#### How to compile?
<b>dynamic library:</b> gcc -shared -fPIC example.c -o libexample.so  
<b>program</b>: gcc -o use-libexample use-libexample.c -L. -lexample  


<b>OBS.:</b> The lib needs to be copied to /usr/lib/ or /usr/local/lib/  
Its name needs to be: lib+name+.so  
Example: libexample.so  
