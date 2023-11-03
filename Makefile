.default: run

run: all
	@./assignment

all: assignment.o
	@g++ -o assignment assignment.o

assignment.o: assignment.cpp
	@g++ -c assignment.cpp

.PHONY: clean
clean:
	@rm -f assignment assignment.o