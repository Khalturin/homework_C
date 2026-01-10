# Makefile
CC = gcc

all: prog

objects = sensor.o temp_api.o main.o

prog: $(objects)
	$(CC) -o prog $(objects)

# %.o: %.c - шаблон для компиляции .c в .o.
# $@ Имя файла цели правила
# $< Имя первого пререквизита
%.o : %.c
	$(CC) -c $< -o $@

clean: 
# Для linux
	rm -rf *.o prog
# Для windows
clean-windows: 
	-del /Q *.o 2>nul
	-del /Q prog.exe 2>nul
