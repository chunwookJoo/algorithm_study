#include <stdio.h>
int main()
{
	/*
	   1 2 3 4 5
	   2 3 4 5
	   3 4 5
	   4 5
	   5
   */

	int n = 0, j = 0;

	j = 1;
	while (j <= 5)
	{
		n = 1;
		while (n <= 6 -j)
		{
			printf("%d ", n + j-1);
			n++;
		}
		j++;
		printf("\n");
	}

	/*	
	5 4 3 2 1
	5 4 3 2
	5 4 3
	5 4
	5	
	*/

	int n = 0, j = 0;

	j = 1;
	while (j <= 5)
	{
		n = 1;
		while (n <= 6-j)
		{
			printf("%d ", 6-n);
			n++;
		}
		printf("\n");
		j++;
	}

	/*
		5
		5 4
		5 4 3
		5 4 3 2
		5 4 3 2 1
	*/

	int n = 0, j = 0;

	j = 1;
	while (j <= 5)
	{
		n = 5;
		while (n >= 6-j)
		{
			printf("%d ", n);
			n--;
		}
		j++;
		printf("\n");
	}
}