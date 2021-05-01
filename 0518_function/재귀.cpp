#include <stdio.h>

void odd(void);
int sta;
int fin;
int n = 2;

void odd(void)
{
	if (sta > fin)
	{
		return;
	}
	if (sta % 2 == 1)
	{
		printf("%d\n", sta);
		sta += n;
	}
	else
		sta++;
	odd();
}

int main()
{
	scanf("%d %d", &sta, &fin);
	odd();
}

