CC = g++
DIRS = Chapter1 Chapter2
OBJECTS = Ex1.1 Ex1.2
all: $(OBJECTS)

%: %.cpp
	$(CC) $< -o $@ 
.PHONY : clean
clean:
	rm -rf *~; rm -rf "a.out"
	cd Chapter1; rm -rf *~; rm -rf "a.out"



