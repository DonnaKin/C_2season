#include <stdio.h>
#include <string.h>
int main(void) {
	char *s1 = "java";
	char *s2 = "java";
	printf("두 문자 비교 = %s %s = %d\n", s1, s2, strcmp(s1, s2));

	s1 = "java";
	s2 = "jav";
	printf("두 문자 비교 = %s %s = %d\n", s1, s2, strcmp(s1, s2));
	s1 = "jav";
	s2 = "java";
	printf("두 문자 비교 = %s %s = %d\n", s1, s2, strcmp(s1, s2));

	printf("두 문자 비교 = %s %s  = %d\n", s1, s2, strncmp(s1, s2, 2));

	return 0;
}
