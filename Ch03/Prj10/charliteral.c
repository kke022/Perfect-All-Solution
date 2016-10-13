/*
솔루션 / 프로젝트 / 소스파일: Ch03 / prj10 / charliteral.c
오버플로와 언더플로의 발생
v 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	printf("%Casic", 'B');  print("%c", '\n');

	char sq = '\''; //작은따옴표

	printf("BCPL\tB\tC\tJava\n"); //문자열 내부에서 \t(탭) 문자 사용 
	printf("%C\7\N", '\a'); //알람 문자를 2번 출력하고 공백 줄 
	printf("%c자바언어'\n", sq); //문자열 내부에서는 '(작은따옴표) 그대로 사용 가능

							 //문자열 내부에서는 "(큰따옴표) 반드시 \"로 사용
	printf("\C언어\ 정말 재미있다!\n");


	return 0;
}