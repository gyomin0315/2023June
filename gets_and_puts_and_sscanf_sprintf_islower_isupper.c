#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char str_in[128];
	char str_out[128];
	int year, month, day;

	printf("��¥ : (yyyymmdd)?");
	gets_s(str_in, sizeof(str_in)); // scanf�� ������ �ϴ� gets_s

	// ���ڿ��� int���� year,month,day�� ��ȯ�Ѵ�. ���⼭�� ������ ������.
	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);

	//����� ���ڿ��� str_out�� ����
	// �������� ���ڿ��� �ٽ� �ϳ��� ���ڿ��� ����
	sprintf(str_out, "Due Date : %04d-%02d-%02d", year, month, day);
	puts(str_out); // printf�� ������ �ϴ� puts �Լ�. 

	return 0;


}
*/
//��� ���
/*
��¥ : (yyyymmdd)?20230621
Due Date : 2023-06-21
*/

// gets ���� str_in�� �� ���� ���ڿ� �Է��� �޴´�. scanf()�� �ٸ��� ���ڿ� ���̿� ������ �� �� ����.

// puts�� ������ ���ڿ��� ������ش�. printf()�� �ٸ��� �����ϰ� ����� �� �ִ�. 

// sscanf �� �ϳ��� ���ڿ��� �������� �ּҿ� ������ �������ش�. 

// sprintf�� �������� �ּҿ� �������� �ִ� ���ڿ����� �ϳ��� �ּҿ� �� ���ļ� �������ش�. 
/*
int main(void)
{
	char str_in[128];
	char str_out[128];
	int year, month, day;
	printf("��¥(yyyymmdd) ?");
	gets(str_in);
	puts(str_in); 


}
*/
//��� ���
/*
��¥(yyyymmdd) ?20230621
20230621
*/

int main(void)
{
	char str[64] = "this is test string for char pointer";

	char* p = str;

	while (1)
	{
		if (islower(p[0])) // p[0]�� �ҹ������� �˻��Ѵ�.
		{
			p[0] = toupper(p[0]); // p[0]�� ����Ű�� str[0]�� �빮�ڷ� �����Ѵ�.
		}
		p = strchr(p, ' '); // str�� ���� ���ڸ� ã�� �� �ּҸ� p�� �����Ѵ�. 

		if (p == NULL)
		{
			break;
		}

		p++; // p�� ���鹮�� ���� ���ڸ� ����Ű�� �Ѵ�. 


	}
	puts(str);
	return 0;


}

//��� ���
/*
This Is Test String For Char Pointer
*/

