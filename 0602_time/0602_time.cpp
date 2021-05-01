#include <stdio.h>
int main()
{
	int hour = 0;
	int min = 0;
	int min_value = 0;
	int min_val = 0;

	scanf("%d %d", &hour, &min);

	if (1 <= hour && hour <=23)
	{
		if (0 <= min && min <= 59)
		{
			min_val = min - 30;
			if (min_val < 0)
			{
				min_value = 60 + min_val;
				hour = hour - 1;

				printf("%d %d", hour, min_value);
			}
			else 
			{
				printf("%d %d", hour, min_val);
			}
		}
	}
	else if (hour == 0)
	{
		min_val = min - 30;
		if (min_val >= 0)
		{
			printf("%d %d", hour, min_val);
		}
		else if (min_val < 0)
		{
			min_value = 60 + min_val;
			printf("23 %d", min_value);
		}
	}
}