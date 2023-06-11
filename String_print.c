#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void)
{
	char m[] = { 'a','b','c','\0' };

	printf("%s\n", m); // %s ¹®ÀÚ¿­ Ãâ·ÂÀº µÞºÎºÐ¿¡ ¹Ýµå½Ã ÁÖ¼Ú°ª ¾²±â ! ¾ê´Â NULLÀÌ ³ª¿Ã¶§±îÁö °è¼Ó Ãâ·Â.


	return 0;


}
abc

//Ãâ·Â °á°ú
/*
abc

*/
/*

int main(void)
{
	char m[] = { 'a','b','c' };

	printf("%s\n", m); // %s ¹®ÀÚ¿­ Ãâ·ÂÀº µÞºÎºÐ¿¡ ¹Ýµå½Ã ÁÖ¼Ú°ª ¾²±â ! ¾ê´Â NULLÀÌ ³ª¿Ã¶§±îÁö °è¼Ó Ãâ·Â.


	return 0;


}
*/
//Ãâ·Â °á°ú
/*
abcÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌ??Êþ

*/

// %s Ãâ·ÂÀÎµ¥ NULL ¾øÀ¸¸é µÚ¿¡ ¾²·¹±â°ª ±îÁö Ãâ·ÂÇÔ.
/*

int main(void)
{
	char m[] = "student", * p;
	p = m;
	printf("%s %s %s", m, p, p + 3);

	return 0;
}
*/
//Ãâ·Â °á°ú
/*
student student dent

*/

// StringÀº ¸Ç µÚ¿¡ NULL°ª ¾Ë¾Æ¼­ µé¾î°¨.

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





