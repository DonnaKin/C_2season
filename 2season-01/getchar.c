#include <stdio.h>

int main(void)
{
	char c[] = "hi c language";
	printf("%s\n", c);
	c[4] = '\0';
	//null 삽입
	printf("%s\n%s\n", c, (c + 5));
	// 배열에 있는 문자열을 분리해서 출력

	c[4] = ' ';
	char *p = c;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;
}