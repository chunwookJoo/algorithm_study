/*
	1. �迭 A�� ������ �迭 B�� ���뿡 �����Ͻÿ�

	A : 1 2 3 4 5 6 7 8 9 10
	B : 10 9 8 7 6 5 4 3 2 1
*/

#include <stdio.h>
int main()
{
	int arr_a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr_b[10];

	for (int i = 0; i<sizeof(arr_a)/sizeof(int); i++)
	{
		arr_b[i] = arr_a[9-i];
		printf("%d ", arr_b[i]);
	}
}
