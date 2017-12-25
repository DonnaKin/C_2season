#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LINENUM 81

int main(void)
{
	int i, len;
	char line[LINENUM];

	printf("영문문장을입력하세요. -> \n");

	gets(line);
	len = strlen(line);

	puts("");
	printf("위에서입력한문자열에서대문자와소문자를반대로변환하면-> \n");

	for ( i = 0; i < len; i++)
	{
		if ('A' <= line[i] && 'Z' >= line[i]) { //대문자찾기
			line[i] = tolower(line[i]);
		}
		else if ('a' <= line[i] && 'z' >= line[i]) { //소문자찾기
			line[i] = toupper(line[i]);
		}
		printf("%c", line[i]);
	}
	printf("\n");
}