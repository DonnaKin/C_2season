#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "http://www.naver.com";
	char dst[50];
	

	printf("문자배열 : src = %s\n", src);
	//src 출력
	printf("문자열 크기 = %d\n", strlen(src));
	//배열 길이 출력
	memcpy(dst, src, strlen(src) + 1);
	//복사
	printf("복사한 문자열= %s\n", dst);

	memcpy(src, "김민경", strlen("김민경") + 1);
	printf("문자배열 src=%s\n",src);
	//새롭게 복사한 출력
	//src=김민경, dst : 주소


	char ch = ':';
	char *ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("찾을 문자열%s\n", ret);

	return 0;
}