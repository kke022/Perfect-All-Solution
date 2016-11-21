#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	//이전단위 a, 변환단위 b
	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
	printf("[1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop) \n");
	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >> ");

	scanf("%d %d", &a, &b);

	double input = 1;
	while (input && a && b)
	{
		printf("\n[변환할 단위]의 길이를 입력하세요. >> ");
		scanf("%lf", &input);
		if (input == 0) break;

		switch (a) {
		case 1:
			printf("\n [결과]  %.2f(미터) -->", input);
			if (b == 1)
				printf("%.2f(미터)\n", input);
			else if (b == 2)
				printf("%.2f(인치)\n", 39.370079 * input);
			else if (b == 3)
				printf("%.2f(피트)\n", 3.28084 * input);
			else if (b == 4)
				printf("%.2f(야드)\n", 1.093613 * input);
			break;

		case 2:
			printf("\n [결과] %.2f(인치) -->", input);
			if (b == 1)
				printf("%.2f(미터)\n", 0.0254 * input);
			else if (b == 2)
				printf("%.2f(인치)\n", input);
			else if (b == 3)
				printf("%.2f(피트)\n", 0.083333 * input);
			else if (b == 4)
				printf("%.2f(야드)\n", 0.027778 * input);
			break;

		case 3:
			printf("\n [결과] %.2f(피트) -->", input);
			if (b == 1)
				printf("%.2f(미터)\n", 0.3848 * input);
			else if (b == 2)
				printf("%.2f(인치)\n", 12 * input);
			else if (b == 3)
				printf("%.2f(피트)\n", input);
			else if (b == 4)
				printf("%.2f(야드)\n", 0.3333 * input);
			break;

		case 4:
			printf("\n [결과] %.2f(야드) -->", input);
			if (b == 1)
				printf("%.2f(미터)\n", 0.9144 * input);
			else if (b == 2)
				printf("%.2f(인치)\n", 36 * input);
			else if (b == 3)
				printf("%.2f(피트)\n", 3 * input);
			else if (b == 4)
				printf("%.2f(야드)\n", input);
			break;
		}
	};

	printf("\n종료합니다.\n");

	return 0;
}
