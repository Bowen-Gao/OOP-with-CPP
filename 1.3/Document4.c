#include <stdio.h>
#include <stdlib.h>

int main() {
	int married;
	scanf_s("%d", &married);
	printf("%c", (married) ? 'M' : 'N');
	system("pause");
}