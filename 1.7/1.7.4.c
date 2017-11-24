#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* DayName (int n);
char dayname[][15] = { "Sunday", "Monday", "Tuesday", "Thurday", "Wednesday", "Friday", "Saturday" };

int main() {
	int day_num;
	scanf_s("%d", &day_num);
	printf("Day %d is %s.\n", day_num, DayName(day_num));
	system("pause");
	return 0;
}

char* DayName(int n) {
	return dayname[n - 1];
}