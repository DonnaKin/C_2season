#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char str[] = "Java 2017 Go C#";
	printf("%d\n", strlen("java"));	
	printf("%d\n", strlen(str));
	//문자열 길이
	printf("%s\n", _strlwr(str));
	//모두 소문자
	printf("%s\n", _strupr(str));
	//모두 대문자

	printf("%s, ", strstr(str, "VA"));
	printf("%s, ", strchr(str, 'A'));
	//문자열, 찾을 문자열
	//strstr : 찾을 문자열
	//strchr : 찾을 문자
	printf("%s, ", strpbrk(str, "VA"));
	return 0;


}