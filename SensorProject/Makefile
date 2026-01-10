# Makefile
all: prog

prog: sensor.o 
	gcc -o prog sensor.O

sensor.o: sensor.c common.h
	gcc -c -o sensor.o sensor.c

clean: 
# Для linux
	rm -rf *.o prog
# Для windows
clean-windows: 
	-del /Q *.o 2>nul
	-del /Q prog 2>nul
