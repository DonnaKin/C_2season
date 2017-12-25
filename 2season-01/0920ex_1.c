#include <stdio.h>

int main(void)
{
	char *pa[] = { "JAVA","C#","C++" };
	char ca[][5] = { "JAVA","C#","C++" };
	char *states[4] = { "California","Oregon","Washington","Texas" };

	printf("%s ", pa[0]);
	printf("%s ", pa[1]);
	printf("%s\n", pa[2]);
	printf("%s ", ca[0]);
	printf("%s ", ca[1]);
	printf("%s\n", ca[2]);

	printf("%c %c %c\n", pa[0][1], pa[1][1], pa[2][1]);
	printf("%c %c %c\n", ca[0][1], ca[1][1], ca[2][1]);

	for (int i = 0; i < 4; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}