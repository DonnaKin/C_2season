#include <stdio.h>

int main(void) {
	typedef struct movie {
		char *title;
		int attedance;
	}movie;

	movie assassination;
	assassination.title = "�ϻ�";
	assassination.attedance = 12700000;

	printf("[%s] ������: %d\n", assassination.title, assassination.attedance);

	return 0;
}