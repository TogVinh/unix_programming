
MAIN_C = main.c
MAIN_O = main.o

TARGET = run
OBJECTS = $(MAIN_O)

$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

$(MAIN_O): $(MAIN_C) 
	gcc -c $(MAIN_C) 

	 
clean:
	rm -r *.o
