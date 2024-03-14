all: main

main: obj/main.o obj/quadratic_equation.o 
	gcc  obj/main.o obj/quadratic_equation.o  -o bin/main

obj/main.o: src/main.c
	gcc -c -Wall -Wextra -Werror  src/main.c -o obj/main.o

obj/quadratic_equation.o: src/quadratic_equation.c
	gcc -c -Wall -Wextra -Werror src/quadratic_equation.c -o obj/quadratic_equation.o

clean:
	rm -rf obj/*.o

run:
	./bin/main