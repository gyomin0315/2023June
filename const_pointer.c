#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void)
{
	int a = 10, b = 20;
	const int* p1 = &a; // p1은 a의 읽기 전용 포인터

	int* const p2 = &a; // p2는 a 전용 포인터

	const int* const p3 = &a; // p3는 a의 전용 포인터, 읽기 전용 포인터

	printf("*p1 = %d\n", *p1);
	// *p1 = 100; 읽기 전용 포인터니까 값을 바꿀 수 없음.
	p1 = &b; // 읽기 전용 포인터니까 다른 메모리를 참조하는건 됨.

	printf("*p1 = %d\n", *p1);

	// p2 = &b; p2는 a 전용 포인터니까 다른 메모리를 참조 할 수 없음.

	*p2 = 200; // 값을 바꾸는건 됨.

	printf("*p2 = %d\n", *p2);

	// p3 는 a의 읽기 전용 포인터이면서 a 전용 포인터니까 값을 바꾸는것도, 다른 메모리를 참조하는것도 안됨
	
	//*p3 = 100;
	//p3 = &b;

	printf("*p3 = %d\n", *p3);

	return 0;

}
*/
//출력 결과
/*
*p1 = 10
*p1 = 20
*p2 = 200
*p3 = 200

*/

// 안전하게 p3를 읽기 전용 포인터, a 전용 포인터로 만들었는데, p2를 통해 값을 바꿔버리니까 p3의 값도 바뀜. 보안에 유의해야 할듯


int main(void)
{

	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p[i]); // 포인터를 배열처럼 사용 가능. 이 배열의 값은 p가 가리키는 값임 ! 주소 아님

	}

	return 0;



}

// 출력 결과
/*
p[0] = 1
p[1] = 2
p[2] = 3
p[3] = 4
p[4] = 5

*/