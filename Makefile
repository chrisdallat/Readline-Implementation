CC = gcc
CFLAGS += -Wall -Wextra -Werror
DEPS += include/list.h
OBJFILES = src/main.o src/my_readline.o\

TARGET = my_readline
all: $(TARGET)

$(TARGET): $(OBJFILES) $(DEPS)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

.PHONY: clean
clean:
		rm -f src/*.o $(TARGET)