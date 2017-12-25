#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct game {
	char name[7];
	int r1, r2, r3;
};

int main()
{
	struct game player;
	double avg;

	printf("선수의 이름은? ==>");
	scanf("%s", player.name);
	printf("1, 2, 3라운드 점수는? ==>");
	scanf("%d %d %d", &player.r1, &player.r2, &player.r3);

	avg = (double)(player.r1 + player.r2 +  player.r3) / 3;

	printf("%s선수의 게임 성적 평균 %.1f점 \n", player.name, avg);

	return 0;
}