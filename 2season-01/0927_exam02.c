#include <stdio.h>
#define N 5

int main(void) {
	int i, sum;
	sum = 0;
	for ( i = 0; i < N; i++)
	{
		int height;

		printf("%d번의 키는? ", i + 1);
		scanf_s("%d", &height);
		sum += height;
	}

	printf("평균 키: %.1lfcm \n", (double)sum / N);

	return 0;
}