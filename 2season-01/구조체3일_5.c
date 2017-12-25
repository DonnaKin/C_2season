#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct movie {
	char *title;
	int attendance;
	char director[20];
}movie1;

int main(void) {
	movie1 box[] = { {"¸í·®",11111,"±èÇÑ¹Î"},{"±¹Á¦½ÃÀå",333,"À±Á¦±Õ"},{"º£Å×¶û",452,"·ù½Â¿Ï"} };
	//strcqy(box[2].director, "·ù½Â¿Ï");

	printf("   Á¦¸ñ    °¨µ¶  °ü°´¼ö\n");
	printf("=========================================\n");
	for (int i = 0; i < 3; i++)
		printf("[%8s] %6s %d\n", box[i].title, box[i].director, box[i].attendance); 

	return 0;

}