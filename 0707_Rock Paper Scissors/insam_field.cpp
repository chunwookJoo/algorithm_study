// 1. �� ũ�� 2���� �迭�� �Է�, �ù���� �� �Է� 1~5��
// 2. �Է¹��� �� ũ�� 2���� �迭
// 3. �ù���� �� ���� ���� �� 0���� ũ�� 6���� ���� ������ �޺������� ��ġ
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
