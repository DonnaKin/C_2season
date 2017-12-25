#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count;

void fibonacci(int prev_number, int number);

void main() {
	auto prev_number = 0, number = 1;

	printf("피보나치를 몇 개 구할까요? (3 이상) >> ");
	scanf("%d", &count);
	if (count <= 2)
		return 0;

	printf("1 ");
	fibonacci(prev_number, number);
	printf("\n");
}

void fibonacci(int prev_number, int number)
{
	static int i = 1;

	while (i++ < count) {
		int next_num = prev_number + number;
		//다음 값을 이전값 + 다음값
		prev_number = number; // 이전값은 현재값으로
		number = next_num; // 현재값은 다음값으로
		printf("%d\t", next_num);
		fibonacci(prev_number, number);
	}

}