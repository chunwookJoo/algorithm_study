#include <stdio.h>

//void total(void);
//int start = 1;
//int finish;
//int sum = 1;
//
//int main()
//{
//	scanf("%d", &finish);
//	total();
//}
//void total(void)
//{
//	if (start >= finish)
//	{
//		printf("%d\n", sum);
//		return;
//	}
//	start++;
//	sum = sum + start;
//
//	total();
//}

int main()
{
	int fin;
	scanf("%d", &fin);

	int sum = 0;
	int sta = 1;

	while (sta <= fin)
	{
		sum = sum + sta;
		sta++;
	}
	printf("%d", sum);
	return 0;
}