#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50];
	char b[50];

	printf("�Է� ���ڿ� 1 >> ");
	gets(a);
	printf("�Է� ���ڿ� 2 >> ");
	gets(b);
	printf("����� ��� : %s\n",strcat(a,b));

	return 0;
}