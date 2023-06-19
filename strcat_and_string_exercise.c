#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char sentence[100] = "";
	char word[20];

	do
	{
		printf("단어 ? ");
		scanf("%s", word);
		strcat(sentence, word); // sentence라는 배열에 word의 문자열을 복사해서 집어넣는다.
		strcat(sentence, " ");



	} while (strcmp(word, ".") != 0);

	printf("%s\n", sentence);

	return 0;

}
*/
//출력 결과
/*
단어 ? My
단어 ? name
단어 ? is
단어 ? gyo
단어 ? min
단어 ? .
My name is gyo min .

*/

// strcat(주소1, 주소2)는 주소1이 가리키고 있는 곳의 문자열의 끝부분에 주소2가 가리키고 있는 곳의 문자열을 붙인다.

// 이때, 주소1의 size는 넉넉해야함. 

int main(void)
{
	char str1[10] = "abc";
	char str2[20] = "def";
	char str3[30] = "ghi";

	char temp1[10];
	char temp2[10];
	char temp3[100] = "";
	char temp4[100] = "";
	char temp5[200] = "";


	strcpy(temp1, str1);
	strcpy(temp2, str2);
	strcpy(str2, str3);
	strcpy(str3, temp1);
	strcpy(str1, temp2);

	strcat(temp3, str2);
	strcat(temp3, " ");
	strcat(temp3, str3);

	strcpy(str1, str3);
	strcpy(str3, str2);

	strcat(temp4, str3);
	strcat(temp4, " ");
	strcat(temp4, str1);

	if (strcmp(temp3, temp4) == 0 && strlen(temp3) < 7)
	{
		printf("%s", temp3);
	}
	else
	{
		printf("%s", str1);
	}

	return 0;

}

//출력 결과
/*
abc
*/