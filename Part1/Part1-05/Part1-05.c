#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	printf("\n ������ �ϳ� �Է��ϼ���. >> ");
	scanf("%d", &input);

	while (input)
	{
		printf("\n������: ");

		printf("\n\n8����:                     %o %o", input, input);
		printf("\n\n16����:                 %8X %8X", input, input);
		printf("\n\n");

		printf("\n ������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &input);
	}
	printf("�����մϴ�.\n");

	return 0;
}