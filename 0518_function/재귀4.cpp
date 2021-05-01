#include <stdio.h>
void fac (void);
int input;
int value = 1;
int sum = 1;

int main()
{
	scanf("%d", &input);
	fac();
}
void fac(void)
{
	if (sum >= input)
	{
		printf("%d", value);
		return;
	}
	sum++;
	value = sum * value;
	
	fac();
}


void fac(void);
int input;
int value = 1;
int sum = 1;

int main()
{
	scanf("%d", &input);
	fac();
}

void fac(void)
{
	if (input <= sum)
	{
		printf("%d", value);
		return;
	}
	sum--;
	value = sum * value;
	fac();
}