
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p = "abcde";

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");

	p = "hello";

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "hello");

	return 0;
}