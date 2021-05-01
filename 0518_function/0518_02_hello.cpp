#include <stdio.h>

void fo(int);

void fo(int i)
{

	if (i == 0)
	{
		printf("world");
	}
	else
		printf("hello");
}

int main()
{
	int num;
	scanf("%d", &num);
	fo(num);
	return 0;
}

