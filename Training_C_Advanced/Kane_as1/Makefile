CFLAGS = -I. -I./inc

TARGET = run_as1
OBJECTS = main.o matrix.o


$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

main.o: main.c 
	gcc -c main.c -I./inc

matrix.o: matrix.c
	gcc -c matrix.c -I./inc
	 
clean:
	rm -r *.o

