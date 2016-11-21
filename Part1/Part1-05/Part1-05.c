#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	printf("\n 정수를 하나 입력하세요. >> ");
	scanf("%d", &input);

	while (input)
	{
		printf("\n이진수: ");

		printf("\n\n8진수:                     %o %o", input, input);
		printf("\n\n16진수:                 %8X %8X", input, input);
		printf("\n\n");

		printf("\n 정수를 하나 입력하세요. >> ");
		scanf("%d", &input);
	}
	printf("종료합니다.\n");

	return 0;
}