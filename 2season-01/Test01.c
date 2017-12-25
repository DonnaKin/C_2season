#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50];
	char b[50];

	printf("입력 문자열 1 >> ");
	gets(a);
	printf("입력 문자열 2 >> ");
	gets(b);
	printf("연결된 결과 : %s\n",strcat(a,b));

	return 0;
}