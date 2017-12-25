#include <stdio.h>
double compute_ave(int ary[]);

int main(void) {
	int i;
	int pass = 0, sum = 0;
	int score[5] = { 93, 85, 79, 100, 87 };
	printf("전체 평균 : %.1lf\n", compute_ave(score));
	for  (i = 0; i < 5; i++)
	{
		if (score[i] >= 60) {
			sum += score[i];
			pass++;
		}
	}
	printf("합격자의 평균 : %.1lf\n", (double)sum / pass);
	return 0;
}

double compute_ave(int ary[5]) {
	int i, sum = 0; // 함수 블럭내에의 지역변수
	for (i = 0; i < 5; i++) {
		sum += ary[i];
	}
	return (double)sum / 5;
}