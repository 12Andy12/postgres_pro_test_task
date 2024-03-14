#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct roots {
	unsigned int size;
	double* x;
};

struct roots solve_equation(int a, int b, int c);


#endif // !HEADER
