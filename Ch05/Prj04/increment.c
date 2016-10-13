// file: increment.c

#define _CRT_SECURE_NO_WARNINGS //	scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result;

	result = m++ + --n;
	printf("m=%d n=%d result=%d\n", m, n, result);

	result = ++m + n--;
	printf("m=%d n=%d result=%d\n", m, n, result);

	return 0;
}