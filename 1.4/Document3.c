#include <stdio.h>
#include <stdlib.h>

int main()
{
	int character = 0;
	int word = 0;
	int newline = 1;
	int klast = 32;
	int k = getchar();
	while (k != 4) {
	switch (k) {
		case 32:
		    word += 1; break;
		case 10:
		    newline += 1; break;
		default:
		    character += 1; break;
		}
		k = getchar();
	}
	printf("characters:%d words:%d newlines:%d", character, word, newline);
	system("pause");
	return 0;
}