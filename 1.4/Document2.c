#include <stdio.h>
#include <stdlib.h>

int main()
{
	int character = 0;
	int word = 0;
	int newline = 1;
	int klast = 32;
	int k = getchar();
	do {
		if (k == 32) {
			if (klast != 32)
				word += 1;
			klast = k;
		}
		else if (k == 10){
			newline += 1;
			klast = k;
		}
		else {
			character += 1;
			klast = k;
		}
		k = getchar();
	}
	while (k != 4);
	printf("characters:%d words:%d newlines:%d", character, word, newline);
	system("pause");
	return 0;
}