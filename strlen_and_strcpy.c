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
	for (i = 0; str1[i] != '\0'; i++) // for���� ��/���� �Ǻ��� NULL�� ������ ���������� ����.

	{
		printf("%c ", str1[i]);
	}

	printf("\n");

	printf("str2 = %s\n", str2); // %s ���ڿ� ����� �ڿ� �ּڰ� ����Կ� ����
	printf(str3);
	printf("\nstr4 = %s\n", str4);

	strcpy(str1, "XYZ");

	printf("changed str1 = %s", str1);

	return 0;

}
*/
//��� ���
/*
str1 = A b c
str2 = very long ����������������������������������abc
abc
str4 =
changed str1 = XYZ

*/

int main(void)
{
	char str1[10] = "hello";
	int len = 0;

	printf("str1�� ���� : %d\n", strlen(str1));
	printf("\"good bye\"�� ���� : %d\n", strlen("good bye"));
	printf("str = %s\n", str1);

	len = strlen(str1);

	if (len > 0)
	{
		str1[len - 1] = '\0'; // ������ �ѱ��ڸ� ����


	}

	printf("str1 = %s\n", str1);

	return 0;

}

//��� ���
/*
str1�� ���� : 5
"good bye"�� ���� : 8
str = hello
str1 = hell

*/

// strlen("���ڿ�") or strlen(���ڿ��� ����Ű�� �ּ�) �ϸ� �ش� ���ڿ��� ���̸� ��ȯ�Ѵ�. NULL�� ���� �ȵ�

// strcpy (���ڿ�1�� �ּ�, ���ڿ�2�� �ּ�) �� �ϰ� �Ǹ�, ���ڿ�2�� �ּҰ� ����Ű�� �ִ� ���ڿ�2�� ���ڿ�1�� �ּҷ� �����Ѵ�.
