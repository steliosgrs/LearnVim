# compiler
CC = gcc
# flags
CFLAGS = -Wall -g
# general dependencies
DEPS = Point.h
# object files
OBJ = point.o point_dt.o
# main file name
TARGET = point
# out file name
OUT = out
# standard
STD = -std=c99


all : $(TARGET) 

$(TARGET): $(OBJ)
	gcc $(CFLAGS) $(STD) -o $(OUT) $(OBJ) -lm

$(OBJ): $(DEPS)

.PHONY : clean
clean:
	rm -rf $(wildcard *.o)
