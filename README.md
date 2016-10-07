# JNCurses
A simple Java library(only one class now) which uses jni to call the functions  in "ncurses.h".It can help you create a terminal program easily by Java.

---

# Test Program

1.be sure your Java environment is well

use`$java --version`to ensure you have right environment, so the Makefile can work normally.

If you don't have `$(JAVA_HOME)`, the `make` will fail also, please change the Maekfile in directory lib/

2.generate the library file

```
$cd lib/
$make
```

Then the libjncurses.so will be appeared in the directory lib/.

3.move libjncurses.so to "java.library.path"

you can copy the file to /usr/lib/

`$sudo cp ./libjncurses.so /usr/lib/`

you can also make the directory lib/ one part of "java.library.path"

`$export LD_LIBRARY_PATH=$(JNCurses'dir)/lib`

the first method will useful allways, and the second method will only useful in the terminal you use.


4.complie and run the test program

return the directory JNCurses/ and use `$make` or `$make test` to complie and run the test program. 

---

# USE

1.please complete step 1/2/3 above.

2.return the directory JNCurses/ and copy the JNCurses.java to your java Program and you can use those interface to complete your program with JNCurses.

NOTE:Test.java will be helpful if you don't understand how the JNCurses works.

