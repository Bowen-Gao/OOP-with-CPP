#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", factorial(n));
	system("pause");
	return 0;
}

int factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}