#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "http://www.naver.com";
	char dst[50];
	

	printf("���ڹ迭 : src = %s\n", src);
	//src ���
	printf("���ڿ� ũ�� = %d\n", strlen(src));
	//�迭 ���� ���
	memcpy(dst, src, strlen(src) + 1);
	//����
	printf("������ ���ڿ�= %s\n", dst);

	memcpy(src, "��ΰ�", strlen("��ΰ�") + 1);
	printf("���ڹ迭 src=%s\n",src);
	//���Ӱ� ������ ���
	//src=��ΰ�, dst : �ּ�


	char ch = ':';
	char *ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("ã�� ���ڿ�%s\n", ret);

	return 0;
}