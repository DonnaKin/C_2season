#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct account { // ����ü ���� ==> ����
	char name[12];
	int actnum;
	double balance;
}; // 3���� ��������� ���� ����ü ���� (1�ܰ�)

int main(void) {
	// ����ü ���� ���� �� �ʱ�ȭ(2�ܰ�)
	struct account mine = { "��ΰ�", 1001, 20 };

	struct account yours;
	// ����ü ���ٹ��
	strcpy(yours.name, "�̿���");
	yours.actnum = 1002;
	yours.balance = 50;

	struct account a = { "������", 1003, 100 };

	// ����ü ���(���ٹ��, ũ��)
	printf("����ü�� ũ�� : %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);
	printf("%s %d %.2f\n", a.name, a.actnum, a.balance);

	return 0;
}