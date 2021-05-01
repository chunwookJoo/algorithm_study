// 1. 땅 크기 2차원 배열로 입력, 택배오는 날 입력 1~5일
// 2. 입력받은 땅 크기 2차원 배열
// 3. 택배오는 날 값을 더한 후 0보다 크고 6보다 작은 곳에만 햇빛가리개 설치
#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include <stdio.h>

int main() {
	int insam = 0, delivery = 0, sunblind = 0;
	int i = 0, j = 0;
	int place[MAX][MAX] = { 0 };
	scanf("%d", &insam);
	scanf("%d", &delivery);
	for (i = 0; i < insam; i++) {
		for (j = 0; j < insam; j++) {
			scanf("%d", &place[i][j]);

			if (place[i][j] == -1)
				continue;
			place[i][j] += delivery;

			if (place[i][j] > 5)
				continue;
			sunblind++;
		}
	}
	for (i = 0; i < insam; i++) {
		for (j = 0; j < insam; j++) {
			printf("%3d", place[i][j]);
		}
		printf("\n");
	}
	printf("%d", sunblind);
}
