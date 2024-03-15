#include "header.h"

struct roots solve_equation(int a, int b, int c)
{
	struct roots result;

	double discriminant = b * b - 4 * a * c; //��������� ������������

	if (a == 0 || discriminant < 0)
		result.size = 0; // ������ ��� ��� ��������� �� ����������
	else if (discriminant == 0) 
		result.size = 1; // ���� ������
	else 
		result.size = 2; // ��� �����

	result.x = calloc(result.size, sizeof(double));
	int sign = 1;

	for (unsigned int i = 0; i < result.size; ++i)
	{
		result.x[i] = (-b +(sign * sqrt(discriminant))) / (2 * a);
		sign *= -1;
	}

	return result;
}

