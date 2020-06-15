/*
	3. 배열 A의 내용을 다음과 같이 변경

	A : 1 2 3 4 5 6 7 8 9 10
	A : 10 9 8 7 6 5 4 3 2 1
*/

#include <stdio.h>
int main()
{
	int arr_a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp = 0;
	int value = (sizeof(arr_a) / sizeof(int));

	for (int x = 0; x < value / 2; x++)
	{
		temp = arr_a[x];
		arr_a[x] = arr_a[value-x-1];
		arr_a[value-x-1] = temp;
	}
	for (int i = 0; i < value; i++)
	{
		printf("%d ", arr_a[i]);
	}
}