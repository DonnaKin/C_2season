#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int snum; // ����� �Ϲ� ������ ����
	char *dept; // ����� ������ ����
	char name[12]; // ����� �迭�� ����
};

int main(void) {
	// 2�ܰ� ����ü ���� ���� ==> �ʱ�ȭ
	struct student hong = { 2018001, "�İ�","��ΰ�" };
	struct student na = { 2018002 };
	struct student bae = { 2018003 };

	scanf("%s", na.name);

	strcpy(bae.name, "���");

	na.dept = "��Ƽ��";
	bae.dept = "���̵��";

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;

	if (one.snum == bae.snum) {
		printf("�й��� %d �����մϴ�\n", one.snum);
	}

	printf("[%d, %s, %s]\n", one.snum,one.dept,one.name);
	return 0;
}