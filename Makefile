all: main

main: obj/main.o obj/quadratic_equation.o 
	gcc  obj/main.o obj/quadratic_equation.o  -o bin/main -lm

obj/main.o: src/main.c
	gcc -c -Wall -Wextra -Werror  src/main.c -o obj/main.o

obj/quadratic_equation.o: src/quadratic_equation.c
	gcc -c -Wall -Wextra -Werror src/quadratic_equation.c -o obj/quadratic_equation.o

check: obj/test.o obj/quadratic_equation.o
	gcc obj/test.o obj/quadratic_equation.o -o bin/tests -lcheck -lm -lsubunit
	./bin/tests

obj/test.o: tests/test.c
	gcc -c -Wall tests/test.c -o obj/test.o

clean:
	rm -rf obj/*.o

run:
	./bin/main