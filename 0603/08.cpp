/*
	8. �л����� ���� S[20]���� �Է¹޾Ƽ�
	�ְ� ������ ���� ������ �ش��ϴ� �л��� ������� ���
*/
#include <stdio.h>
int main()
{
	int s[20];
	int max = 0, min = 0, count_max = 0, count_min = 0;

	printf("�л� ���� �Է� : ");
	for (int i = 0; i < 20; i++)
		scanf("%d", &s[i]);

	for (int j = 0; j < 20; j++)
	{
		if (!max)
		{
			max = s[j];
			count_max = 1;
			min = s[j];
			count_min = 1;
		}
		else
		{
			if (s[j] > max)
			{
				max = s[j];
				count_max = 1;
			}
			else if (s[j] == max)
			{
				count_max++;
			}
			if (s[j] < min)
			{
				min = s[j];
				count_min = 1;
			}
			else if (s[j] == min)
			{
				count_min++;
			}
		}
	}
	printf("�ְ��� : %d�� �������� : %d��", count_max, count_min);
}