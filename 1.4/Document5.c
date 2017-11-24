#include <stdio.h>
#include <stdlib.h>

int main()
{
	double start = 0.0;
	double end = 19.0;
	double step = 1.0;
	printf("%10s, %10s\n","Celsius", "Fahrenheit");
	for (double i = start; i <= end;i = i + step) {
		printf("%10.1f, %10.1f\n", i, (9.0/5.0)*i + 32);
	}
	system("pause");
	return 0;
}