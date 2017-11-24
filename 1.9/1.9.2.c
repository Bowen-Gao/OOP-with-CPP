#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int c;
	char direct[80];
	printf("Please specify the file to output\n");
	scanf_s("%s", &direct, sizeof(direct));
	FILE* p = fopen(direct, "w");
	if (p != NULL) {
		while ((c = getchar()) != 1) {
		    fputc(c, p);
		}
	    printf("CTRL + A is a correct ending.");
	    system("pause");
	    return 0;
	}
	return 1;
}