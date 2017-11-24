#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int c1, c2;
	c1 = a--;
	printf("%d   %d\n", c1, a);
	a = 10;
	c2 = --a;
	printf("%d   %d", c2, a);
	system("pause");
}