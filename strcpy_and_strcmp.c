#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char str1[10] = "";
	char str2[10] = "";
	char temp[10];

	printf("���ڿ� 2���� �Է��Ͻÿ� :");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	return 0;




}
*/
//��� ���
/*
���ڿ� 2���� �Է��Ͻÿ� :gyo min
str1 = gyo, str2 = min
str1 = min, str2 = gyo

*/

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	if (s1 == s2)
	{
		printf("s1�� s2�� �ּҰ� �����ϴ�.\n");
	}
	else
	{
		printf("s1�� s2�� �ּҰ� �ٸ��ϴ�.\n");
	}

	if (strcmp(s1, s2) == 0)
	{
		printf("s1�� s2�� ������ �����ϴ�.\n");

	}
	else
	{
		printf("s1�� s2�� ������ �ٸ��ϴ�.\n");
	}

	return 0;


}

//��� ���
/*
s1�� s2�� �ּҰ� �ٸ��ϴ�.
s1�� s2�� ������ �����ϴ�.

*/

// strcmp(�ּ�1,�ּ�2) �� �ּ�1�� ���ڿ��� �ּ�2�� ���ڿ��� �������� ���Ѵ�.

// ������ ��� 0��, �������� ������ 1 �Ǵ� -1�� ��ȯ�Ѵ�. 

// �ּ�1�� �ּ�2���� ũ�� 1, ������ -1 ��ȯ ���� ASCII�� ���ٰ� �����ϸ� ��. 
