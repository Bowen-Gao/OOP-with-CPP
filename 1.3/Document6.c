#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	scanf_s("%d", &i);
	i = i >> 2;
	if (i < 0)
	{
		printf("%d %s", i, "logical");
	}
	else
	{
		printf("%d %s", i, "arithmetic");
	}
	system("pause");
}