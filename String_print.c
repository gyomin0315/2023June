#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void)
{
	char m[] = { 'a','b','c','\0' };

	printf("%s\n", m); // %s 문자열 출력은 뒷부분에 반드시 주솟값 쓰기 ! 얘는 NULL이 나올때까지 계속 출력.


	return 0;


}
abc

//출력 결과
/*
abc

*/
/*

int main(void)
{
	char m[] = { 'a','b','c' };

	printf("%s\n", m); // %s 문자열 출력은 뒷부분에 반드시 주솟값 쓰기 ! 얘는 NULL이 나올때까지 계속 출력.


	return 0;


}
*/
//출력 결과
/*
abc儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆??龕

*/

// %s 출력인데 NULL 없으면 뒤에 쓰레기값 까지 출력함.
/*

int main(void)
{
	char m[] = "student", * p;
	p = m;
	printf("%s %s %s", m, p, p + 3);

	return 0;
}
*/
//출력 결과
/*
student student dent

*/

// String은 맨 뒤에 NULL값 알아서 들어감.

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

//출력 결과
/*
nt
ent
dent
udent
tudent
student

*/





