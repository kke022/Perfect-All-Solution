#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() 반환값(출력된 문자수): &d\n", ret_value);

	ret_value = printf("출력값: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("반환값(출력된 문자수): &d\n", ret_value);

	printf("%d %i\n", 16, 16);
	printf("%p %#o\n", 16, 16);
	printf("%x %#x %#X\n", 10, 10, 10);

	return 0;


}