#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LINENUM 81

int main(void)
{
	int i, len;
	char line[LINENUM];

	printf("�����������Է��ϼ���. -> \n");

	gets(line);
	len = strlen(line);

	puts("");
	printf("�������Է��ѹ��ڿ������빮�ڿͼҹ��ڸ��ݴ�κ�ȯ�ϸ�-> \n");

	for ( i = 0; i < len; i++)
	{
		if ('A' <= line[i] && 'Z' >= line[i]) { //�빮��ã��
			line[i] = tolower(line[i]);
		}
		else if ('a' <= line[i] && 'z' >= line[i]) { //�ҹ���ã��
			line[i] = toupper(line[i]);
		}
		printf("%c", line[i]);
	}
	printf("\n");
}