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
		printf("�ܾ� ? ");
		scanf("%s", word);
		strcat(sentence, word); // sentence��� �迭�� word�� ���ڿ��� �����ؼ� ����ִ´�.
		strcat(sentence, " ");



	} while (strcmp(word, ".") != 0);

	printf("%s\n", sentence);

	return 0;

}
*/
//��� ���
/*
�ܾ� ? My
�ܾ� ? name
�ܾ� ? is
�ܾ� ? gyo
�ܾ� ? min
�ܾ� ? .
My name is gyo min .

*/

// strcat(�ּ�1, �ּ�2)�� �ּ�1�� ����Ű�� �ִ� ���� ���ڿ��� ���κп� �ּ�2�� ����Ű�� �ִ� ���� ���ڿ��� ���δ�.

// �̶�, �ּ�1�� size�� �˳��ؾ���. 

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

//��� ���
/*
abc
*/