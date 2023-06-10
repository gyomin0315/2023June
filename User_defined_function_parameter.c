#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
// 사용자 정의 함수를 사용하여 매개 변수 있/없음, 반환하는 값 있/없음으로 프로그램 4가지 

// 1. 매개변수 있음, 반환하는 값 있음. 
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
		printf("r = %d, 원의 면적 = %.2lf\n", r, area(r));
	}

	return 0;




}
*/
//출력 결과
/*
r = 1, 원의 면적 = 3.140000
r = 2, 원의 면적 = 12.560000
r = 3, 원의 면적 = 28.260000
r = 4, 원의 면적 = 50.240000
r = 5, 원의 면적 = 78.500000

*/

// 2. 매개변수 있음. 반환 하는 값 없음.
/*
void area(double r)
{
	double result;
	result = r * r * PI;
	int s = r;
	printf("r = %d, 원의 면적 = %.2lf\n", s, result);
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
//출력 결과
/*
r = 1, 원의 면적 = 3.14
r = 2, 원의 면적 = 12.56
r = 3, 원의 면적 = 28.26
r = 4, 원의 면적 = 50.24
r = 5, 원의 면적 = 78.50

*/

// 3. 매개변수 없음, 반환 하는 값 있음. 얘 유의 ! 
/*
double area(void)
{
	static radius =1; // r을 static 형식으로 메모리에 올린다. static 방식 : 전역 메모리에 올린다. 전역 변수임.
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
		printf("r = %d, 원의 면적 = %.2lf\n", i,area());
	
	}

	return 0;
}
*/
//출력 결과
/*
r = 1, 원의 면적 = 3.14
r = 2, 원의 면적 = 12.56
r = 3, 원의 면적 = 28.26
r = 4, 원의 면적 = 50.24
r = 5, 원의 면적 = 78.50


*/

// 4. 매개변수 없음 / 반환하는 값 없음.

void area(void)
{
	int i;
	double result;
	for (i = 1; i <= 5; i++)
	{
		result = i * i * PI;
		printf("r = %d, 원의 면적 : %.2f\n", i, result);
	}

}

int main(void)
{
	area();

	return 0;
}

//출력 결과
/*
r = 1, 원의 면적 : 3.14
r = 2, 원의 면적 : 12.56
r = 3, 원의 면적 : 28.26
r = 4, 원의 면적 : 50.24
r = 5, 원의 면적 : 78.50

*/
