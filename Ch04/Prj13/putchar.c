// file: putchar.c

#define _CRT_SECURE_NO_WARNINGS //	scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	char a = '\0';
	puts("문자 하나 입력: ");
	a = getchar();
	putchar(a); putchar('\n');

	return 0;
}