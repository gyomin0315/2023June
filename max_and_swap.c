#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
double get_max(double x, double y, double z)
{
	double max = x > y ? x : y;
	max = x > z ? x : z;
	return max;



}

int main(void)
{

	double max;
	max = get_max(1.34, 0.4, 0.8);
	printf("max = %.3lf", max);

	return 0;

}
*/
//출력 결과
/*
max = 1.340

*/

void swap(int* x, int* y)
{
	int temp;

	printf("*x = %d   *y = %d\n", *x, *y);
	temp = *x;
	*x = *y;
	*y = temp;
	
	printf("*x = %d   *y = %d\n", *x, *y);

}

int main(void)
{

	int a = 1;
	int b = 2;

	printf("a = %d    b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d    b = %d\n", a, b);

	return 0;

}

//출력 결과
/*
a = 1    b = 2
*x = 1   *y = 2
*x = 2   *y = 1
a = 2    b = 1

*/




