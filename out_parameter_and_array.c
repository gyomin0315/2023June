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

	printf("���ϰ� ���� �� ���� �����ÿ� :");
	scanf("%d %d", &x, &y);

	get_sum_product(x, y, &sum, &product);

	printf("�� ���� ���� : %d\n", sum);
	printf("�� ���� ���� : %d\n", product);

	return 0;


}
*/
//��� ���
/*
���ϰ� ���� �� ���� �����ÿ� :123 234
�� ���� ���� : 357
�� ���� ���� : 28782

*/

// ������ �� ������ ����� ���� �Լ��� �ִ� ������ �� �Ҹ�. ������ �޸𸮸� �� �� �� �ִ� ���·� �ٲ�.

void copy_array(const int* source, int* target, int size) // const �� �Ǿտ����� �б�����, int ������ ���� ���� !

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

//��� ���
/*
x = 10 20 30 40 50 0 0 0 0 0
y= 10 20 30 40 50 0 0 0 0 0

*/


