#include <stdio.h>

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);
	int findmin2(int x, int y);
	int findmax2(int x, int y);

	int sum = add2(a, b);
	int min = findmin2(x, y);
	int max = findmax2(x, y);
	printf("гу: %d\n", sum);

	return 0;
}
int add2(int a, int b)
{
	int sum = a + b;

	return(sum);
}

int findmin(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
int findmax(int x, int y)
{
	int max = x > y ? x : y;

	return (max);
}