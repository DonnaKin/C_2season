#include <stdio.h>

int main(void)
{
	int a[5],i=0;
	int sum=0;
	double avg =0;

	printf("5명의 점수를 순서대로 입력하세요\n");

	for ( i = 0; i < 5; i++)
	{
		printf("%d번의 퀴즈 점수는?", i + 1);
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	avg = (double)sum / 5;


	printf("=================\n");
	printf("평균 : %.2f\n", avg);
	printf("=================\n");

	return 0;
}