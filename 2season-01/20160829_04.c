#include <stdio.h>

int main(void)
{
	char ch;
	char *pc = &ch;

	int n;
	int *pi = &n;

	double d;
	double *pd = &d;

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
		printf("pc+%d = %p\n", i, (pc + i));

	for (i = 0; i < 3; i++)
		printf("pi+%d = %p\n", i, (pi + i));
	for (i = 0; i < 5; i++)
		printf("&arr[%d]-&arr[0] = %d\n", i, &arr[i] - &arr[0]);

	return 0;
}