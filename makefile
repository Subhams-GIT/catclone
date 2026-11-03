CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Wpedantic -g

SRC = ./main.c 
OBJ = $(SRC:.c=.o)

TARGET = catclone

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
