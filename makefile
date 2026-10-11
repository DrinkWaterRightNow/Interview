CC = gcc
CFLAGS = -std=c11 -O0 -Wall -Wextra \
         -Wno-sizeof-array-argument \
         -Wno-sizeof-pointer-div

TARGET = main
SRC = main.c

.PHONY: all run clean

run: $(TARGET)
	./$(TARGET)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)


clean:
	rm -f $(TARGET)
