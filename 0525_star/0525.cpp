#include <stdio.h>
int main()
{
	int n;
	int star = 0;
	int t = 0;
	scanf("%d", &n);

	star = 1;
	while (star <= n)
	{
		t = 1;
		while (t <= n)
		{
			printf("*", t);
			t++;
		}
		star++;
		printf("\n");
	}

}