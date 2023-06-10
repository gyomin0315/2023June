#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
// ����� ���� �Լ��� ����Ͽ� �Ű� ���� ��/����, ��ȯ�ϴ� �� ��/�������� ���α׷� 4���� 

// 1. �Ű����� ����, ��ȯ�ϴ� �� ����. 
/*
double area(double r)
{
	double result;
	result = r * r * PI;
	return result;
}

int main(void)
{
	int r;
	for (r = 1; r <= 5; r++)
	{
		printf("r = %d, ���� ���� = %.2lf\n", r, area(r));
	}

	return 0;




}
*/
//��� ���
/*
r = 1, ���� ���� = 3.140000
r = 2, ���� ���� = 12.560000
r = 3, ���� ���� = 28.260000
r = 4, ���� ���� = 50.240000
r = 5, ���� ���� = 78.500000

*/

// 2. �Ű����� ����. ��ȯ �ϴ� �� ����.
/*
void area(double r)
{
	double result;
	result = r * r * PI;
	int s = r;
	printf("r = %d, ���� ���� = %.2lf\n", s, result);
}

int main(void)
{
	int r;
	for (r = 1; r <= 5; r++)
	{
		area(r);
	}

	return 0;

}
*/
//��� ���
/*
r = 1, ���� ���� = 3.14
r = 2, ���� ���� = 12.56
r = 3, ���� ���� = 28.26
r = 4, ���� ���� = 50.24
r = 5, ���� ���� = 78.50

*/

// 3. �Ű����� ����, ��ȯ �ϴ� �� ����. �� ���� ! 
/*
double area(void)
{
	static radius =1; // r�� static �������� �޸𸮿� �ø���. static ��� : ���� �޸𸮿� �ø���. ���� ������.
	double area;
	area = PI * radius *radius;

		radius++;


		return area;


}

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("r = %d, ���� ���� = %.2lf\n", i,area());
	
	}

	return 0;
}
*/
//��� ���
/*
r = 1, ���� ���� = 3.14
r = 2, ���� ���� = 12.56
r = 3, ���� ���� = 28.26
r = 4, ���� ���� = 50.24
r = 5, ���� ���� = 78.50


*/

// 4. �Ű����� ���� / ��ȯ�ϴ� �� ����.

void area(void)
{
	int i;
	double result;
	for (i = 1; i <= 5; i++)
	{
		result = i * i * PI;
		printf("r = %d, ���� ���� : %.2f\n", i, result);
	}

}

int main(void)
{
	area();

	return 0;
}

//��� ���
/*
r = 1, ���� ���� : 3.14
r = 2, ���� ���� : 12.56
r = 3, ���� ���� : 28.26
r = 4, ���� ���� : 50.24
r = 5, ���� ���� : 78.50

*/
