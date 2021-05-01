#include <stdio.h>

void hello(void);
int n;

int main()
{
	scanf("%d", &n);
	hello();
}

void hello(void)
{
	if (n == 0)
		return;

	printf("%d\n",n);
	n--;
	hello();
}
