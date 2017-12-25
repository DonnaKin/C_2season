#include <stdio.h>

int main(void) {
	char line[101];
	printf("내용입력...\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");
	return 0;
}