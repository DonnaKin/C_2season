#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void mystrcat(char *, const char*);

int main() {
	char s1[50],s2[50];

	//mystrcat(s1, "programming language");
	printf("���ڿ� 1 �Է�>> \n");
	gets(s1);
	printf("���ڿ� 2 �Է�>> \n");
	gets(s2);

	mystrcat(s1, s2);

	printf("����� ���: %s\n", s1);
	
	return (0);
}

void mystrcat(char s1[], const char s2[]) {
	int i = strlen(s1); //ù��° ���ڿ� ����
	int j = 0;
	while (s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
}