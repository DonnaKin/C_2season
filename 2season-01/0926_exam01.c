#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

void delchar(char str[], char ch);

void main() {
	char str[88];
	char ch;

	printf("문자열 입력 >> ");
	gets(str);

	printf("삭제할 문자 입력 >> ");
	scanf_s("%ch", &ch);

	delchar(str, ch);
	printf("결과 : %s\n",str);
}

void delchar(char str[], char ch) {
	char temp[80];
	int j = 0;
	int i;
	int size;

	for ( i = 0, size = strlen(str); i < size; i++)
	{
		if (str[i] != ch) {
			char ch1 = str[i];
			temp[j] = ch1;
			j++;
		}
		temp[j] = '\0';

		strcpy(str, temp);
	}
}