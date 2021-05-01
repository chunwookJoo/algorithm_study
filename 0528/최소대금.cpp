#include <stdio.h>
int main()
{
	int pasta_1 = 0;
	int pasta_2 = 0;
	int pasta_3 = 0;
	int juice_1 = 0;
	int juice_2 = 0;
	float value1 = 0, value2 = 0, temp = 0;

	scanf("%d\n %d\n %d\n %d\n %d", &pasta_1, &pasta_2, &pasta_3, &juice_1, &juice_2);

	// 파스타 값
	if (pasta_1 <= pasta_2 && pasta_1 <= pasta_3)
	{
		value1 = pasta_1;
	}
	else if (pasta_2 <= pasta_3 && pasta_2 <= pasta_1)
	{
		value1 = pasta_2;
	}
	else if (pasta_3 <= pasta_1 && pasta_3 <= pasta_2)
	{
		value1 = pasta_3;
	}
	// 주스값
	if (juice_1 <= juice_2)
	{
		value2 = juice_1;
	}
	else if (juice_2 <= juice_1)
	{
		value2 = juice_2;
	}
	// 대금값
	temp = (value1 + value2) * 0.1;

	printf("%.1f", value1 + value2 + temp);
	return 0;
}
