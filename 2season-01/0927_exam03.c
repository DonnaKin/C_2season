#include <stdio.h>
int find_larger();
int n1, n2, max;

int main() {
	int width, height;
	max = find_larger(n1, n2);
	/* printf("ù��° ����? ");
	scanf_s("%d\n", &n1);
	printf("�ι�° ����? ");
	scanf_s("%d\n", &n2); */
	printf("n1 = %d, n2 = %d ū �� max = %d", n1, n2, max);

	width = n1 * 4;
	height = n2;

	max = find_larger(width, height);
	printf("width = %d, height = %d, max = %d", width, height, max);

	return 0;
}

int find_larger(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}