#include <stdio.h>
#include <stdlib.h>

float minus(float a1, float a2);

int main()
{
	float n1, n2;
	scanf_s("%f %f", &n1, &n2);
	printf("%f", minus(n1, n2));
	system("pause");
	return 0;
}

float minus(float a1, float a2) {
	return (a1 - a2);
}