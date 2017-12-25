#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int mystrlen(char*);

void main() {
	char str[80];
	printf("Enter any string : ");
	gets(str);

	printf("%s is : %d\n", str, mystrlen(str));
	printf("%s is : %d\n", str, strlen(str));
}

int mystrlen(char *p)
{
	int count = 0;
	while (*p != '\0') {
		count++;
		p++;
	}
	return count;
}