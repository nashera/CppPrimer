++ = g++
DIRS = Chapter1 Chapter2


all:
	for dir in $(DIRS); do \
		SRC = $(wildcard $dir/*cpp); \
		echo $SRC; \
		echo $(wildcard *.cpp); \
		echo $$objects; cd .. ; \
	done
.PHONY : clean
clean:
	rm -rf *~; rm -rf "a.out"
	cd Chapter1; rm -rf *~; rm -rf "a.out"



