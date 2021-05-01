#include <stdio.h>
//void grade(void);
int score = 0;

void grade(void)
{
	if (score >= 90)
	{
		printf("A");
	}
	else if (score >= 80)
	{
		printf("B");
	}
	else if (score >= 70)
	{
		printf("C");
	}
	else if (score >= 60)
	{
		printf("D");
	}
	else
		printf("F");
}

int main()
{
	scanf("%d", &score);
	grade();
}