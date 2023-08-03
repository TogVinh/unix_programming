#CFLAGS = -I. -I./inc
CFLAGS = -I./inc

TARGET = run_as2p1
OBJECTS = main.o array.o

$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

main.o: main.c 
	gcc -c main.c $(CFLAGS)

array.o: array.c
	gcc -c array.c $(CFLAGS)
	 
clean:
	rm -r *.o
	rm -r $(TARGET)
