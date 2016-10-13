// file: arithop.c

#define _CRT_SECURE_NO_WARNINGS //	scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	printf("3 + 4 ==> %d\n", 3 + 4);
	printf("3.4 + 4.3 ==> %f\n", 3.4 + 4.3);
	printf("3.4 * 4.3 ==> %f\n", 3.4 + 4.3);
	printf("10/3 ==> %d\n", 10 / 3);
	printf("10.0 / 3.0 ==> %f\n", 10.0 / 3.0);
	printf("10%%3 ==> %d\n", 10 % 3);

	return 0;

}