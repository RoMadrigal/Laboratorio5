
CC = gcc
CFLAGS = -Wall
TARGET = main
OBJ = main.o double_list.o


all: $(TARGET)


$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)


main.o: main.c double_list.h
    $(CC) $(CFLAGS) -c main.c


double_list.o: double_list.c double_list.h
    $(CC) $(CFLAGS) -c double_list.c


clean:
    rm -f $(OBJ) $(TARGET)


