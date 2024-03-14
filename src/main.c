#include "header.h"

void print_roots(struct roots r)
{
	if (r.size == 0)
		printf("The equation has no real roots");

	for (unsigned int i = 0; i < r.size; ++i)
		printf("x[%d] = %f; ", i + 1, r.x[i]);

	printf("\n");
}

int main()
{
	//Пример с двумя корнями
	struct roots example = solve_equation(2, 3, 1);
	printf("2x^2 + 3x + 1 = 0:\t");
	print_roots(example);

	//Пример с одним корнем
	example = solve_equation(2, 4, 2);
	printf("2x^2 + 4x + 2 = 0:\t");
	print_roots(example);

	//Пример без корней
	example = solve_equation(2, 1, 2);
	printf("2x^2 + 1x + 2 = 0:\t");
	print_roots(example);
}