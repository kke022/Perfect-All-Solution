#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int a;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);
	printf("�Է��� �� ��: x = %d and y = %d\n", x, y);

	printf("\n �ӽ� ���� ��� �̿� ���[1]");
	printf("\n ������ �������� ��ȯ ���[2]");
	printf("\n ������ ���������� ��ȯ ���[3]");
	printf("\n XOR ������ ^ �̿� ���[4]\n");

	printf("\n�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &a);

	int dump;

	switch (a)
	{
	case 1:
		dump = x;
		x = y;
		y = dump;
		break;

	case 2:
		x = x + y;
		y = x - y;
		x = x - y;
		break;

	case 3:
		x = x * y;
		y = x / y;
		x = x / y;
		break;

	case 4:
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
		break;

	default:
		printf("1, 2, 3, 4 �߿��� �ٽ� �����ϼ���.\n");
	}

	printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);

	return 0;
}

