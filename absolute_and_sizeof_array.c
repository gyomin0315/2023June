#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5
#define ROW 3
#define COL 2
/*
unsigned int absolute(int x)
{
	return x = x < 0 ? -x : x;

}

int main(void)
{
	int x[ARR_SIZE] = { -4,0,28,3,-12 };

	unsigned int y[ARR_SIZE] = { 0 };

	int i;
	for (i = 0; i < ARR_SIZE; i++)
	{
		y[i] = absolute(x[i]);

	}

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", y[i]);

	}

	printf("\n");
	return 0;

}
*/
//출력 결과
/*
4 0 28 3 12

*/

int main(void)
{
	int data[ROW][COL];
	int i, j, k;
	for (i = 0, k = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			data[i][j] = ++k; // 전위형 증감식
		}
	}

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}

	printf("sizeof(data)    = %d\n", sizeof(data));
	printf("sizeof(data[0])    = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0])    = %d\n", sizeof(data[0][0]));

	printf("\n%u\n", data);
	printf("%u\n", data[0]);
	printf("%u\n", data[1]);
	printf("%u\n", data[1][1]);



}

//출력 결과
/*
  1   2
  3   4
  5   6
sizeof(data)    = 24
sizeof(data[0])    = 8
sizeof(data[0][0])    = 4

1305474360
1305474360
1305474368
4

*/



