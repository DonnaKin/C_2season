#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct movie {
	char *title;
	int attendance;
	char director[20];
}movie1;

int main(void) {
	movie1 box[] = { {"��",11111,"���ѹ�"},{"��������",333,"������"},{"���׶�",452,"���¿�"} };
	//strcqy(box[2].director, "���¿�");

	printf("   ����    ����  ������\n");
	printf("=========================================\n");
	for (int i = 0; i < 3; i++)
		printf("[%8s] %6s %d\n", box[i].title, box[i].director, box[i].attendance); 

	return 0;

}