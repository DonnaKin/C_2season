#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char str[] = "Java 2017 Go C#";
	printf("%d\n", strlen("java"));	
	printf("%d\n", strlen(str));
	//���ڿ� ����
	printf("%s\n", _strlwr(str));
	//��� �ҹ���
	printf("%s\n", _strupr(str));
	//��� �빮��

	printf("%s, ", strstr(str, "VA"));
	printf("%s, ", strchr(str, 'A'));
	//���ڿ�, ã�� ���ڿ�
	//strstr : ã�� ���ڿ�
	//strchr : ã�� ����
	printf("%s, ", strpbrk(str, "VA"));
	return 0;


}