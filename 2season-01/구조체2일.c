#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day; // ��, ��, ���� ǥ���� �����(=�Ӽ�)
};
//������2 ����
struct account{
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void) {
	struct account me = { {2018, 3, 9}, "��ΰ�", 1001, 30 };
	struct account me1 = { {2018,10,19}, "�̿���", 1002, 40 };

	printf("����üũ��: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
	printf("\n");

	printf("����üũ��: %d\n", sizeof(me1));
	printf("[%d, %d, %d]\n", me1.open.year, me1.open.month, me1.open.day);
	printf("%s %d %.2f\n", me1.name, me1.actnum, me1.balance);
}