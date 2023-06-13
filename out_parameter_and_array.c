#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
/*
void get_sum_product(int x, int y, int* psum, int* pproduct)
{
	*psum = x + y;
	*pproduct = x * y;


}

int main(void)
{

	int sum, product;
	int x, y;

	printf("더하고 곱할 두 수를 적으시오 :");
	scanf("%d %d", &x, &y);

	get_sum_product(x, y, &sum, &product);

	printf("두 수의 합은 : %d\n", sum);
	printf("두 수의 곱은 : %d\n", product);

	return 0;


}
*/
//출력 결과
/*
더하고 곱할 두 수를 적으시오 :123 234
두 수의 합은 : 357
두 수의 곱은 : 28782

*/

// 연산이 다 끝나면 사용자 정의 함수에 있던 값들은 다 소멸. 누구든 메모리를 써 줄 수 있는 형태로 바뀜.

void copy_array(const int* source, int* target, int size) // const 가 맨앞에오면 읽기전용, int 다음에 오면 전용 !

{
	int i;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];
	}

}

void print_array(const int* arr, int size)
{

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		

	}
	printf("\n");

}

int main(void)
{
	int x[SIZE] = { 10,20,30,40,50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);

	copy_array(x, y, SIZE);
	printf("y= ");

	print_array(y, SIZE);
	return 0;


}

//출력 결과
/*
x = 10 20 30 40 50 0 0 0 0 0
y= 10 20 30 40 50 0 0 0 0 0

*/


