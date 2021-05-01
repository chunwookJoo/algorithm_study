#include <stdio.h>
int main()
{
	int dan_start = 0;
	int dan_finish = 0;
	int num_start = 1;
	int num_finish = 1;

	scanf("%d %d", &dan_finish, &dan_start);

	while (num_start <= 9)
	{
		while (num_finish <= 9)
		{
			printf("%d*%d=%d \n", dan_finish, num_finish, dan_finish * num_finish);
			num_finish++;
		}
		if (dan_start == dan_finish)
		{
			return 0;
		}
		printf("%d*%d=%d \n", dan_start, num_start, dan_start * num_start);
		num_start++;
	}
}