/*
	7. 7개의 데이터를 입력받아서
	   그 중 최대값과 최소값을 제외한 합을 출력
*/

#include <stdio.h>
int main()
{
	int num_data[7];
	int max = 0, min = 0, mid = 0, val = 0;

	printf("7개 숫자 입력 : ");
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &num_data[i]);
		mid = mid + num_data[i];
	}

	max = num_data[0], min = num_data[0];
	for (int j = 0; j < 7; j++)
	{
		max = (max < num_data[j] ? num_data[j] : max);
		min = (min > num_data[j] ? num_data[j] : min);
	}
	val = mid - (max + min);
	printf("최소값 최대값을 제외한 수의 합 : %d", val);
}