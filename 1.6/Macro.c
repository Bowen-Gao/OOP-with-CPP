#include "Defs.h"
#include <stdlib.h>

int main() {
	char a = 'a';
	char b = 'b';
	PRINT1(a);
	PRINT2(a, b);
	int x = 1;
	int y = 2;
	int z = 3;
	int max2 = MAX2(x, y);
	int max3 = MAX3(x, y, z);
	printf("%d %d\n", max2, max3);
	system("pause");
	return 0;
}