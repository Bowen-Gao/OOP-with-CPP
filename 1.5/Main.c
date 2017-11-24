#include <stdio.h>
#include <stdlib.h>

float i;
void Print(float i);

int main()
{
	scanf_s("%f", &i);
	Print(i);
	system("pause");
	return 0;
}