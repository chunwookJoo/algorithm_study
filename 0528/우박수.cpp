#include <stdio.h>
void starbucks(void);
int index = 0;
int value;

int main()
{
	scanf("%d", &index);
	printf("%d\n", index);
	starbucks();
}

void starbucks(void)
{
	if (index == 1)
	{
		return;
	}

		if (index % 2 == 1)
		{
			value = 3 * index + 1;
			
		}
		else if (index % 2 == 0)
		{
			value = index / 2;
		}
		index = value;
		printf("%d\n", value);
		starbucks();
}
