#include <stdio.h>

int sumary(int *ary, int SIZE);

int main(void)
{
	int point[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *address = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);

	printf("���ο��� ���� ���� %d\n", sum);
	address = point;
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(address, aryLength));

	return 0;
}

int sumary(int *ary, int SIZE)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += *ary++;
	}

	return sum;
}