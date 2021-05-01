#include <stdio.h>
int main()
{
	int s = 0;
	int f = 0;

	scanf("%d %d", &s, &f);

	while (s <= f)
	{
		if (s % 2 == 1)
		{
			printf("%d\n", s);
		}
		s++;
	}
}