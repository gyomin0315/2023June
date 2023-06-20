#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.'); // filename에서 '.' 문자를 찾아 그 주소를 받아온다.

	if (p != NULL)
	{
		printf("file extension : %s\n", p+1);
	}

	p = strstr(filename, ".txt"); // filename에서 ".txt" 문자열을 찾아 그 주소를 받아온다.

	if (p != NULL)
	{
		printf("file type : TEXT file\n");
	}

	return 0;

}
*/
//출력 결과
/*
file extension : txt
file type : TEXT file

*/

int main(void)
{
	char phone[] = "010-1234-5678";

	char* p = NULL;

	p = strtok(phone, "-"); // 문자열을 기준으로 분리하는 역할을 한다. 그 기준은 '\0'을 삽입함으로써 만들어줌.

	printf("mobile : %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix : %s\n", p);
	p = strtok(NULL, "-");
	printf("line no. : %s\n", p);

	return 0;



}

//출력 결과
/*
mobile : 010
prefix : 1234
line no. : 5678

*/

// 맨 처음에 p라는 포인터에 strtok(phone,"-")를 하게되면, -가 있는 첫번째 즉, 010\01234-5678\0처럼 배열 값이 바뀌고, 이떄 p는 010을 가리킴.

// 다시한번 p = strtok(NULL,"-")을 하게 되면, 010\01234\05678\0이 되고, 1을 가리키게 됨.

// 한번 더 p = strtok(NULL,"-")을 하게 되면, 5를 가리키게 됨. 

