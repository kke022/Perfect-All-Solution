#include <stdio.h>

int main(void)
{
	int b = 2;

	for (int a = 0; a < 10; a++)
	{
		for (int c = 0; c <= 10 - a; c++)
			printf("  ");

		
		for (int c = 0; c <= a; c++)
		{
			while (1) {
				
				int num;
				for (num = 2; num <= b - 1; num++)
				{
					if (b % num == 0)
						break;
				}
				if (b++ == num)
				{
					printf("%d ", b - 1);
					break;
				}
			}
		}
		printf("\n");
	}
}