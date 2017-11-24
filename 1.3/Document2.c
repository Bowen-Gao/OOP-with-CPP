#include <stdio.h>
#include <stdlib.h>

void main () {
	double height, base, surface;
	scanf ("%f %f", &height, &base);
	surface = 0.5 * height * base;
	printf ("%f", surface);
	system("pause");
}

