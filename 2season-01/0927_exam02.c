#include <stdio.h>
#define N 5

int main(void) {
	int i, sum;
	sum = 0;
	for ( i = 0; i < N; i++)
	{
		int height;

		printf("%d���� Ű��? ", i + 1);
		scanf_s("%d", &height);
		sum += height;
	}

	printf("��� Ű: %.1lfcm \n", (double)sum / N);

	return 0;
}