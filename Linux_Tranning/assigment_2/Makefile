CFLAGS = -I. -I./inc



LIB_C = scanDir.c
LIB_O = scanDir.o

MAIN_C = main.c
MAIN_O = main.o

TARGET = run
OBJECTS = $(MAIN_O) $(LIB_O)

$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

$(MAIN_O): $(MAIN_C) 
	gcc -c $(MAIN_C) -I./inc

$(LIB_O): $(LIB_C)
	gcc -c $(LIB_C) -I./inc
	 
clean:
	rm -r *.o
