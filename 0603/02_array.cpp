/*
	2. 배열 A의 내용을 배열 B의 내용에 저장하시오

	A : 1 2 3 4 5 6 7 8 9 10
	B : 6 7 8 9 10 1 2 3 4 5
*/

#include <stdio.h>
int main()
{
	int arr_a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr_b[10];

	for (int i = 5; i < sizeof(arr_a) / sizeof(int); i++)
	{
		arr_b[i] = arr_a[i];
		printf("%d ", arr_b[i]);
	}
	for (int n = 0; n < 5; n++)
	{
		arr_b[n] = arr_a[n];
		printf("%d ", arr_b[n]);
	}
}
