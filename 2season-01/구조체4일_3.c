#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int kor, eng, math;
	double avg;
};
typedef struct student student;

int main(void) {
	student std[3];
	int i;
	double total_avg = 0;
	printf("�л� ������ �Է��ϼ���");

	for (i = 0; i < 3; i++) {
		printf("�̸�: ");
		scanf("%s", std[i].name);
		printf("���� ���� ��������: ");
		scanf("%d %d %d", &std[i].kor, &std[i].eng, &std[i].math);

		std[i].avg = (double)(std[i].kor + std[i].eng + std[i].math) / 3;

		total_avg += std[i].avg;
	}

	total_avg = total_avg / 3;

	printf("�̸�   ����  ���� ����  ���\n");
	printf("===================================\n");
	for (i = 0; i < 3; i++) {
		printf("%s %5d %5d %5d %6.2f\n", std[i].name, std[i].kor, std[i].eng, std[i].math, std[i].avg);
	}
	printf("��ü���: %.2f\n",total_avg);
}