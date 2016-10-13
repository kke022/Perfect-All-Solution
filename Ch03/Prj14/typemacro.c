/*
솔루션 / 프로젝트 / 소스파일: Ch03 / prj14 / typemacro.c
정수형 자료형 최대 최소 매크로 상수 출력
v 1.0 2016.
*/

#include <stdio.h>
#include <limits.h>	//문자형, 정수형 상수가 정의된 헤더파일 삽입


int main(void)
{
	printf("char 범위: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char 범위: %d ~ %u\n", 0, UCHAR_MAX);

	printf("unsigned short 범위: %d ~ %u\n", 0, USHRT_MAX);
	printf("int 범위: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int 범위: %d ~ %u\n", 0, UINT_MAX);

	printf("long long int 범위: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long int 범위: %d ~ %llu\n", 0, ULLONG_MAX);




	return 0;
}