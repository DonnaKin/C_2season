#include <stdio.h>

int main(void)
{
	char c[] = "hi c language";
	printf("%s\n", c);
	c[4] = '\0';
	//null ����
	printf("%s\n%s\n", c, (c + 5));
	// �迭�� �ִ� ���ڿ��� �и��ؼ� ���

	c[4] = ' ';
	char *p = c;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;
}