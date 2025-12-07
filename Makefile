CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = studentdb
SOURCE = student_db.c
OBJ = student_db.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ): $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE) -o $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all run clean
