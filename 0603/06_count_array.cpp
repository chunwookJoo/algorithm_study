/*
	6. 10���� �����͸� �Է¹޾Ƽ�
	�� �߿��� 90 �̻��� �������� ������ ���� ���ؼ� ���
*/
#include <stdio.h>
int main()
{
	int array[10];
	int sum = 0, count = 0, i = 0;

	printf("10���� ���� �Է� : ");

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