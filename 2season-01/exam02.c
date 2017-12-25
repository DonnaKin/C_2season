#include <stdio.h>

int main()
{
	char *first = "GilDong", *last = "Hong";
	char *temp;

	printf("Name: %s %s\n", first, last);

	// ¹æ¹ý2

	char *first = "GilDong", *last = "Hong";
	char *temp;

	temp = first;
	first = last;
	last = temp;


	printf("Name: %s %s\n", first, last);

	return 0;
}