#include <stdio.h>
#include <string.h>
int main(void) {
	char *s1 = "java";
	char *s2 = "java";
	printf("�� ���� �� = %s %s = %d\n", s1, s2, strcmp(s1, s2));

	s1 = "java";
	s2 = "jav";
	printf("�� ���� �� = %s %s = %d\n", s1, s2, strcmp(s1, s2));
	s1 = "jav";
	s2 = "java";
	printf("�� ���� �� = %s %s = %d\n", s1, s2, strcmp(s1, s2));

	printf("�� ���� �� = %s %s  = %d\n", s1, s2, strncmp(s1, s2, 2));

	return 0;
}
