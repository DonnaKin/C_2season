#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "c and c++\t language are best!";
	//���ڿ�
	char *delimiter = " ,\t!";
	//���б�ȣ
	printf("���ڿ� %s �� >>\n", str1);
	char *ptoken = strtok(str1, delimiter);

//��Ģ
//1> ���ڿ��� �ڸ��� ���ؼ� ���б�ȣ�� ���� �����ְ�
//2> ���б�ȣ �ڸ��� null���� �ְ� ��ū�� �ǵ��� ��
	while (ptoken != NULL) {
		//���ڿ��� ���� null�� �ƴϸ� �ݺ�
		printf("%s\n", ptoken);
	}
}