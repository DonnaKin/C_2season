#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_STUDENT 5

struct  student
{
	char name[50];
	char num[40];
	char major[30];
	char dream[20];
	double average;
};

typedef struct student student;

int main(void) {
	struct student std[MAX_STUDENT];
	int i;
	double total_average = 0;

	printf("%d���� �л� ������ �Է��ϼ���.: \n", MAX_STUDENT);
	for (i = 0; i < 5; i++) {
		printf("�̸� �й� ������� �а� ���θ� �Է��ϼ���: ");
		scanf("%s %s %.2f %s %s", &std[i].name,&std[i].num, &std[i].average, &std[i].major,&std[i].dream);
	}

	printf("�̸�       �й�       �������   �а�          ����\n");
	printf("===================================================\n");
	for (i = 0; i < 5; i++) {
		printf("%s %5s %5.2f %5s %6s\n", std[i].name, std[i].num, std[i].average, std[i].major, std[i].dream);
	}

}