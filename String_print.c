#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void)
{
	char m[] = { 'a','b','c','\0' };

	printf("%s\n", m); // %s ���ڿ� ����� �޺κп� �ݵ�� �ּڰ� ���� ! ��� NULL�� ���ö����� ��� ���.


	return 0;


}
abc

//��� ���
/*
abc

*/
/*

int main(void)
{
	char m[] = { 'a','b','c' };

	printf("%s\n", m); // %s ���ڿ� ����� �޺κп� �ݵ�� �ּڰ� ���� ! ��� NULL�� ���ö����� ��� ���.


	return 0;


}
*/
//��� ���
/*
abc��������������������������������??��

*/

// %s ����ε� NULL ������ �ڿ� �����Ⱚ ���� �����.
/*

int main(void)
{
	char m[] = "student", * p;
	p = m;
	printf("%s %s %s", m, p, p + 3);

	return 0;
}
*/
//��� ���
/*
student student dent

*/

// String�� �� �ڿ� NULL�� �˾Ƽ� ��.

int main(void)
{
	char s[] = "student", * p;

	p = s;

	int i;

	for (i = 5; i >= 0; i--)
	{
		printf("%s\n", p + i);
	}

	return 0;

}





