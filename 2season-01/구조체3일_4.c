#include <stdio.h>

int main(void) {
	typedef struct movie {
		char *title;
		int attedance;
	}movie;

	movie assassination;
	assassination.title = "¾Ï»ì";
	assassination.attedance = 12700000;

	printf("[%s] °ü°´¼ö: %d\n", assassination.title, assassination.attedance);

	return 0;
}