#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n;
	scanf_s("%d %d", &i, &n);
	i = i << n;
	printf("%d", i);
	
	system("pause");
}