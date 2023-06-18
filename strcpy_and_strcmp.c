#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char str1[10] = "";
	char str2[10] = "";
	char temp[10];

	printf("문자열 2개를 입력하시오 :");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	return 0;




}
*/
//출력 결과
/*
문자열 2개를 입력하시오 :gyo min
str1 = gyo, str2 = min
str1 = min, str2 = gyo

*/

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	if (s1 == s2)
	{
		printf("s1과 s2의 주소가 같습니다.\n");
	}
	else
	{
		printf("s1과 s2의 주소가 다릅니다.\n");
	}

	if (strcmp(s1, s2) == 0)
	{
		printf("s1과 s2의 내용이 같습니다.\n");

	}
	else
	{
		printf("s1과 s2의 내용이 다릅니다.\n");
	}

	return 0;


}

//출력 결과
/*
s1과 s2의 주소가 다릅니다.
s1과 s2의 내용이 같습니다.

*/

// strcmp(주소1,주소2) 는 주소1의 문자열이 주소2의 문자열과 동일한지 비교한다.

// 동일할 경우 0을, 동일하지 않으면 1 또는 -1을 반환한다. 

// 주소1이 주소2보다 크면 1, 작으면 -1 반환 둘이 ASCII로 뺀다고 생각하면 됨. 
