CC=gcc
OPTION=-Wall -fPIC -D_REENTRANT
INCLUDE=-I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux/ -lncursesw

libjncurses.so:./JNCurses.c ./JNCurses.h
	$(CC) $(OPTION) -o JNCurses.o -c JNCurses.c $(INCLUDE)
	$(CC) -shared JNCurses.o -o libjncurses.so $(INCLUDE)

clean:
	rm *.o *.so
