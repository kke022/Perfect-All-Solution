/*
�ַ�� / ������Ʈ / �ҽ�����: Ch03 / prj13 / enum.c
Ű���� const�� ����� ��� ����
v 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	//Ű���� enum���� ������ ���� ��� ��� �����
	enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };

	printf("�Ͽ��� ���: %d\n", SUN);	//0
	printf("������ ���: %d\n", WED);	//3


									//��� ��Ͽ��� Ư���� ���� ���� ����
	enum SHAPE { POINT, LIME, TRI = 3, RECT, OCTA = 8, CIRCLE };
	printf("LIME: %d, RECT: %d, CIRCLE: %d\n", LIME, RECT, CIRCLE);

	enum bool{ FALSE, TRUE };
	enum pl { c = 1972, cpp = 1983, java = 1995, csharp = 2000 };
	printf("false: %d, cpp: %d, csharp: %d\n", FALSE, cpp, csharp);



		return 0;
}