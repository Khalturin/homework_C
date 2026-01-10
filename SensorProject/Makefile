# Makefile
CC = gcc

# Название исполняемого файла
TARGET = sensor

# Исходные файлы
SRCS = main.c sensor.c temp_api.c

# Диреектории
OBJ_DIR = objects
BIN_DIR = build

#objects = sensor.o temp_api.o main.o
# Объектные файлы теже что и исходные, но в дирректории objects/
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Исполняемый файл в дирректории build/
EXE = $(BIN_DIR)/$(TARGET)

all: $(EXE)

# Сборка исполняемого файла
# $^ - список всех зависимостей .o
$(EXE): $(OBJS) | $(BIN_DIR)
	$(CC) -o $@ $^

# Сборка объектных файлов (.c -> .o) в дирректорию objects
# %.o: %.c - шаблон для компиляции .c в .o.
# $@ Имя файла цели правила
# $< Имя первого пререквизита
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) -c $< -o $@

# Создание дирректорий (если их нет)
$(OBJ_DIR) $(BIN_DIR):
	mkdir $@

# Очистка
clean: 
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(EXE)

