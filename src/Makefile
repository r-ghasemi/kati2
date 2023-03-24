all: build
 
 
build:
#	gcc kati2.c -o kati2 -lm
	php ktmath.php > ktmath.h  
	gcc kati2.c -o kati2.o -lm	 
#	-Wconversion
win32:
	x86_64-w64-mingw32-gcc-win32 kati2.c -o kati2.exe -lm
	
install:
	cp ./kati2 /usr/bin/kati2
	
