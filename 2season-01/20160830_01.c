#include <stdio.h>

void main(void)
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 }, i, temp;

for (i = 0; i < 10; i=i+2)
	{
		temp = num[i];
		num[i] = num[i + 1];
		num[i + 1] = temp;
	}
for ( i = 0; i < 10; i++)
{
	printf("%d ", num[i]);
}
}