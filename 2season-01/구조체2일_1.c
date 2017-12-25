#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int snum; // 멤버가 일반 정수형 변수
	char *dept; // 멤버가 포인터 변수
	char name[12]; // 멤버가 배열인 변수
};

int main(void) {
	// 2단계 구조체 변수 선언 ==> 초기화
	struct student hong = { 2018001, "컴공","김민경" };
	struct student na = { 2018002 };
	struct student bae = { 2018003 };

	scanf("%s", na.name);

	strcpy(bae.name, "배상문");

	na.dept = "멀티과";
	bae.dept = "뉴미디어";

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;

	if (one.snum == bae.snum) {
		printf("학번이 %d 동일합니다\n", one.snum);
	}

	printf("[%d, %s, %s]\n", one.snum,one.dept,one.name);
	return 0;
}