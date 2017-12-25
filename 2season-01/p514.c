#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char dest[80] = "java";
	char source[80] = "c is a language";

	printf("%s\n", strcpy(dest, source));
	printf("%s\n", strncpy(dest, "C#",2));

	printf("%s\n", strncpy(dest, "C#",3));
	printf("%s\n", memcpy(dest, "C#", 4));

	return 0;
}