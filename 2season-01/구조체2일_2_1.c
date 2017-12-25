#include <stdio.h>

struct person {
	char name[7];
	char gender[3];
	int age;
};
int main() {
	struct person u1 = { "나태희","여",20 };
	struct person u2 = { "유현빈","남",29 };
	struct person u3 = { "나원빈","남",25 };

	struct person oldest;

	if (u1.age > u2.age)
	{
		if (u1.age > u3.age)
			oldest = u1;
		else
			oldest = u3;
	}
	else
	{
		if (u2.age > u3.age)
			oldest = u2;
		else
			oldest = u3;
	}
	printf("이름 성별 나이\n");
	printf("=======================\n");
	printf("%s\t %s\t %2d\n", u1.name, u1.gender, u1.age);
	printf("%s\t %s\t %2d\n", u2.name, u2.gender, u2.age);
	printf("%s\t %s\t %2d\n", u3.name, u3.gender, u3.age);
	printf("=======================\n\n");
	printf("<<최고령 사용자>>\n\n");
	printf("%s\t %s\t %d\n\n", oldest.name, oldest.gender,oldest.age);

	return 0;
}