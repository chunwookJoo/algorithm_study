/*
	7. 7���� �����͸� �Է¹޾Ƽ�
	   �� �� �ִ밪�� �ּҰ��� ������ ���� ���
*/

#include <stdio.h>
int main()
{
	int num_data[7];
	int max = 0, min = 0, mid = 0, val = 0;

	printf("7�� ���� �Է� : ");
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
	printf("�ּҰ� �ִ밪�� ������ ���� �� : %d", val);
}