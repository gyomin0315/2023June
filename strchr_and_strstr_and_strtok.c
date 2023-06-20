#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.'); // filename���� '.' ���ڸ� ã�� �� �ּҸ� �޾ƿ´�.

	if (p != NULL)
	{
		printf("file extension : %s\n", p+1);
	}

	p = strstr(filename, ".txt"); // filename���� ".txt" ���ڿ��� ã�� �� �ּҸ� �޾ƿ´�.

	if (p != NULL)
	{
		printf("file type : TEXT file\n");
	}

	return 0;

}
*/
//��� ���
/*
file extension : txt
file type : TEXT file

*/

int main(void)
{
	char phone[] = "010-1234-5678";

	char* p = NULL;

	p = strtok(phone, "-"); // ���ڿ��� �������� �и��ϴ� ������ �Ѵ�. �� ������ '\0'�� ���������ν� �������.

	printf("mobile : %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix : %s\n", p);
	p = strtok(NULL, "-");
	printf("line no. : %s\n", p);

	return 0;



}

//��� ���
/*
mobile : 010
prefix : 1234
line no. : 5678

*/

// �� ó���� p��� �����Ϳ� strtok(phone,"-")�� �ϰԵǸ�, -�� �ִ� ù��° ��, 010\01234-5678\0ó�� �迭 ���� �ٲ��, �̋� p�� 010�� ����Ŵ.

// �ٽ��ѹ� p = strtok(NULL,"-")�� �ϰ� �Ǹ�, 010\01234\05678\0�� �ǰ�, 1�� ����Ű�� ��.

// �ѹ� �� p = strtok(NULL,"-")�� �ϰ� �Ǹ�, 5�� ����Ű�� ��. 

