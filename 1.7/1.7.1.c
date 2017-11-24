#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);

int main() {
	int i = 123;
	int j = 456;
	swap(&i, &j);
	printf("%d %d\n", i, j);
	system("pause");
	return 0;
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}