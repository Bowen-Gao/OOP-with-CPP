#include <stdio.h>
#include <stdlib.h>

void printnumber (int n);

int main()
{
	int i;
	scanf_s("%d", &i);
	printnumber(i);
	system("pause");
	return 0;
}

void printnumber(int n) {
	if (n == 0)
		return;
	putchar(n % 10 + '0');
	printnumber(n / 10);
}