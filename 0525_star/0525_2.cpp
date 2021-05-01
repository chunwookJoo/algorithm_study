#include <stdio.h>
int main()
{
	int n;
	int star = 0;
	int t = 0;

	scanf("%d", &n);

	t = 1;
	while (t <= n)
	{
		star = n;
		while (star >= t)
		{
			printf("*", star);
			star--;
		}
		printf("\n");
		t++;
	}
}