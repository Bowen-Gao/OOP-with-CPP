#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	while ((c = getchar()) != 1) {
		putchar(c);
	}
	printf("CTRL + A is a correct ending.");
	system("pause");
	return 0;
}