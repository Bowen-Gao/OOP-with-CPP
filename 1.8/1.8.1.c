#include <stdio.h>
#include <stdlib.h>

struct Article
{
	int article_number;
	int quantity;
	char description[20];
};

void Print(struct Article* pointer);

int main()
{
	struct Article art = { 12, 1, "An article" };
	struct Article* p = &art;
	Print(p);
	system("pause");
	return 0;
}

void Print(struct Article* pointer) {
	printf("article number:%d, quantity:%d, description:%s", pointer->article_number, pointer->quantity, pointer->description);
	return;
}