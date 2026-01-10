# Makefile
all: prog

prog: sensor.o 
	gcc -lm -o prog sensor.O

sensor.o: sensor.c common.h
	gcc -c -o sensor.o sensor.c

clean: 
	rm -rf *.o prog
