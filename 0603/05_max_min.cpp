/*
	5. 10���� �����͸� �Է¹޾Ƽ� �迭�� �����ϰ�
	MAX�� MIN�� ���Ͻÿ�
*/
#include <stdio.h>
int main()
{
	int array[10];
	int max = 0, min = 0;

	printf("10���� ���� �Է� : ");

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	max = array[0], min = array[0];
	
	for (int j = 0; j < 10; j++)
	{
		max = (max < array[j] ? array[j] : max);
		min = (min > array[j] ? array[j] : min);
	}
	printf("max = %d \n", max); 
	printf("min = %d \n", min);
}