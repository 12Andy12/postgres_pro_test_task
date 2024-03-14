#include "header.h"

struct roots solve_equation(int a, int b, int c)
{
	struct roots result;

	double discriminant = b * b - 4 * a * c; //��������� ������������

	if (a == 0 || discriminant < 0) // ������ ��� ��� ��������� �� ����������
	{
		result.size = 0;
	}
	else if (discriminant == 0) // ���� ������
	{
		result.size = 1;
		result.x = calloc(1, sizeof(double));

		result.x[0] = -b / (2 * a);
	}
	else if (discriminant > 0) // ��� �����
	{
		result.size = 2;
		result.x = calloc(2, sizeof(double));

		result.x[0] = (-b + sqrt(discriminant)) / (2 * a);
		result.x[1] = (-b - sqrt(discriminant)) / (2 * a);
	}

	return result;
}

