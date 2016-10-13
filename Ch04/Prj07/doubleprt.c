#include <stdio.h>

int main(void)
{
	printf("%f %s\n", 123456.789, "\t%f");
	printf("%14.3f %s\n", 123456.789, "\t%10.3f");
	printf("%e %s\n", 123456.789, "\t%e");
	printf("%10.3E %s\n", 123456.789, "\t%10.3E");
	printf("%g %s\n", 123456.789, "\t%g");
	printf("%14.3G %s\n", 123456.789, "\t%10.3G");

	return 0;

}