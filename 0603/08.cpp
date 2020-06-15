/*
	8. 학생들의 성적 S[20]개을 입력받아서
	최고 성적과 최저 성적에 해당하는 학생이 몇명인지 출력
*/
#include <stdio.h>
int main()
{
	int s[20];
	int max = 0, min = 0, count_max = 0, count_min = 0;

	printf("학생 성적 입력 : ");
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
	printf("최고성적 : %d명 최저성적 : %d명", count_max, count_min);
}