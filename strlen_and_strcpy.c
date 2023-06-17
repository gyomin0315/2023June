#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{

	char str1[10] = "abc";
	char str2[10] = "very long string";
	char str3[] = "abc";
	char str4[10] = "";
	int i;

	str1[0] = 'A';
	printf("str1 = ");
	for (i = 0; str1[i] != '\0'; i++) // for문의 참/거짓 판별을 NULL을 만나기 직전까지로 설정.

	{
		printf("%c ", str1[i]);
	}

	printf("\n");

	printf("str2 = %s\n", str2); // %s 문자열 출력은 뒤에 주솟값 써야함에 유의
	printf(str3);
	printf("\nstr4 = %s\n", str4);

	strcpy(str1, "XYZ");

	printf("changed str1 = %s", str1);

	return 0;

}
*/
//출력 결과
/*
str1 = A b c
str2 = very long 儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆abc
abc
str4 =
changed str1 = XYZ

*/

int main(void)
{
	char str1[10] = "hello";
	int len = 0;

	printf("str1의 길이 : %d\n", strlen(str1));
	printf("\"good bye\"의 길이 : %d\n", strlen("good bye"));
	printf("str = %s\n", str1);

	len = strlen(str1);

	if (len > 0)
	{
		str1[len - 1] = '\0'; // 마지막 한글자를 삭제


	}

	printf("str1 = %s\n", str1);

	return 0;

}

//출력 결과
/*
str1의 길이 : 5
"good bye"의 길이 : 8
str = hello
str1 = hell

*/

// strlen("문자열") or strlen(문자열을 가리키는 주소) 하면 해당 문자열의 길이를 반환한다. NULL은 포함 안됨

// strcpy (문자열1의 주소, 문자열2의 주소) 를 하게 되면, 문자열2의 주소가 가리키고 있는 문자열2를 문자열1의 주소로 복사한다.
