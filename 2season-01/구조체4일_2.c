#include <stdio.h>

struct person {
		char name[30];
		char ad[50];
		char tell[60];
};

typedef struct person person;

char *name1[] = { "�̸�"};
char *ad1[] = { "�ּ�"};
char *tell1[] = { "��ȭ��ȣ" };

int main(void) {
	person a[] = { { "ȫ�浿","011-1111-1111","���α�" },{ "����ȣ","022-2222-2222","������"},{ "����ȣ","033-3333-3333","�Ⱦ��" } };

	printf("%3s   %12s      %13s \n", name1[0], tell1[0], ad1[0]);
	printf("===============================================\n");

	for (int i = 0; i < 3; i++)
		printf("%s    %9s     %13s\n", a[i].name, a[i].ad, a[i].tell);

	return 0;
}