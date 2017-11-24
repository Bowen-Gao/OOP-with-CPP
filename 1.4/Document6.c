#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n0 = 0;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int other = 0;
	char k = getchar();
	while ((int)k != 26) {
		switch (k) {
		case '0':
			n0 += 1; break;
		case '1':
			n1 += 1; break;
		case '2':
			n2 += 1; break;
		case '3':
			n3 += 1; break;
		case '4':
			n4 += 1; break;
		default:
			other += 1; break;
		}
		k = getchar();
	}
	printf("n0:%d, n1:%d, n2:%d, n3:%d, n4:%d, other:%d", n0, n1, n2, n3, n4, other);
	system("pause");
	return 0;
}