/*
	6. 10개의 데이터를 입력받아서
	그 중에서 90 이상인 데이터의 개수와 합을 구해서 출력
*/
#include <stdio.h>
int main()
{
	int array[10];
	int sum = 0, count = 0, i = 0;

	printf("10개의 숫자 입력 : ");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);

		if (array[i] >= 90)
		{
			count += 1;
			sum += array[i];
		}
	}
	printf("count = %d\n", count);
	printf("sum = %d\n", sum);
}