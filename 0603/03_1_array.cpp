/*
	3. �迭 C = �迭 A + �迭 B
	�迭�� ũ��� 10��
	c = a+b;
*/

#include <stdio.h>
int main()
{
	int arr_a[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr_b[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr_a[i]+arr_b[i]);
	}
}