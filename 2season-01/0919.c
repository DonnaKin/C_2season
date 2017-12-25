#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "c and c++\t language are best!";
	//문자열
	char *delimiter = " ,\t!";
	//구분기호
	printf("문자열 %s 은 >>\n", str1);
	char *ptoken = strtok(str1, delimiter);

//규칙
//1> 문자열을 자르기 위해서 구분기호를 통해 나눠주고
//2> 구분기호 자리에 null값을 주고 토큰을 되돌려 줌
	while (ptoken != NULL) {
		//문자열의 끝인 null이 아니면 반복
		printf("%s\n", ptoken);
	}
}