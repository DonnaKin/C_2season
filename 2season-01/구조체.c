#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct account { // 구조체 정의 ==> 선언
	char name[12];
	int actnum;
	double balance;
}; // 3개의 멤버변수를 가진 구조체 정의 (1단계)

int main(void) {
	// 구조체 변수 선언 및 초기화(2단계)
	struct account mine = { "김민경", 1001, 20 };

	struct account yours;
	// 구조체 접근방법
	strcpy(yours.name, "이원근");
	yours.actnum = 1002;
	yours.balance = 50;

	struct account a = { "구지원", 1003, 100 };

	// 구조체 출력(접근방법, 크기)
	printf("구조체의 크기 : %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);
	printf("%s %d %.2f\n", a.name, a.actnum, a.balance);

	return 0;
}