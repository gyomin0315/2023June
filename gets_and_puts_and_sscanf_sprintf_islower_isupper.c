#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char str_in[128];
	char str_out[128];
	int year, month, day;

	printf("날짜 : (yyyymmdd)?");
	gets_s(str_in, sizeof(str_in)); // scanf의 역할을 하는 gets_s

	// 문자열을 int형의 year,month,day로 변환한다. 여기서는 나누는 행위함.
	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);

	//출력할 문자열을 str_out에 생성
	// 여러개의 문자열을 다시 하나의 문자열로 통합
	sprintf(str_out, "Due Date : %04d-%02d-%02d", year, month, day);
	puts(str_out); // printf의 역할을 하는 puts 함수. 

	return 0;


}
*/
//출력 결과
/*
날짜 : (yyyymmdd)?20230621
Due Date : 2023-06-21
*/

// gets 에서 str_in은 한 줄의 문자열 입력을 받는다. scanf()와 다르게 문자열 사이에 공백이 들어갈 수 있음.

// puts는 한줄의 문자열을 출력해준다. printf()와 다르게 간략하게 사용할 수 있다. 

// sscanf 는 하나의 문자열을 여러개의 주소에 나누어 저장해준다. 

// sprintf는 여러개의 주소에 나뉘어져 있는 문자열들을 하나의 주소에 다 합쳐서 저장해준다. 
/*
int main(void)
{
	char str_in[128];
	char str_out[128];
	int year, month, day;
	printf("날짜(yyyymmdd) ?");
	gets(str_in);
	puts(str_in); 


}
*/
//출력 결과
/*
날짜(yyyymmdd) ?20230621
20230621
*/

int main(void)
{
	char str[64] = "this is test string for char pointer";

	char* p = str;

	while (1)
	{
		if (islower(p[0])) // p[0]가 소문자인지 검사한다.
		{
			p[0] = toupper(p[0]); // p[0]가 가리키는 str[0]를 대문자로 변경한다.
		}
		p = strchr(p, ' '); // str중 공백 문자를 찾아 그 주소를 p에 저장한다. 

		if (p == NULL)
		{
			break;
		}

		p++; // p가 공백문자 다음 문자를 가리키게 한다. 


	}
	puts(str);
	return 0;


}

//출력 결과
/*
This Is Test String For Char Pointer
*/

