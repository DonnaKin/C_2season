#include <stdio.h>
int main(void){
	char str[80];
	int diff;
	int i = 0;
	printf("���ڿ��� �Է��ϼ���:");
	gets(str);
	diff = 'a' - 'A';
	while (str[i] != '\0'){
		if (str[i] >= 'A'&& str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a'&& str[i] <= 'z')
			str[i] = str[i] - diff;
		i++;
	}
	printf("��ȯ�� ���ڿ�: %s\n", str);
	return 0;
}