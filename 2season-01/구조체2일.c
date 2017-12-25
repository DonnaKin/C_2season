#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day; // 년, 월, 일을 표시할 멤버들(=속성)
};
//구초제2 정의
struct account{
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void) {
	struct account me = { {2018, 3, 9}, "김민경", 1001, 30 };
	struct account me1 = { {2018,10,19}, "이원근", 1002, 40 };

	printf("구조체크기: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
	printf("\n");

	printf("구조체크기: %d\n", sizeof(me1));
	printf("[%d, %d, %d]\n", me1.open.year, me1.open.month, me1.open.day);
	printf("%s %d %.2f\n", me1.name, me1.actnum, me1.balance);
}