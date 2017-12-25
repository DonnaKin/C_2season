#include <stdio.h>

int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	printf("pc의 크기 : %d\n", sizeof(pc));
	printf("pi의 크기 : %d\n", sizeof(pi));
	printf("pd의 크기 : %d\n", sizeof(pd));

	return 0;
}