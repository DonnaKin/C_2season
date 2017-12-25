#include <stdio.h>

#define MAX_STUDENT 5

struct  student
{
	char name[50];
	int korean, english, math;
	double average;
};

int main(void) {
	struct student std[MAX_STUDENT];
	int i;
	double total_average = 0;

	printf("%d명의 학생 정보를 입력하세요.: \n", MAX_STUDENT);


}