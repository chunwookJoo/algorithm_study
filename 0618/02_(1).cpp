#include <stdio.h>
#include "stdlib.h"
#define A 100
int main() {
	int arr[A][A], size, n = 1;

	printf("배열의 크기를 입력하세요 : ");
	scanf_s("%d", &size);

	int i, l = size;
	int x = 0, y = -1;
	int turn = 1;

	while (l != 0) {
		for (i = 0; i < l; i++) {
			y += turn;
			arr[x][y] = n;
			n++;
		}
		l--;
		for (i = 0; i < l; i++) {
			x += turn;
			arr[x][y] = n;
			n++;
		}
		turn *= -1;
	}
	for (x = 0; x < size; x++) {
		for (y = 0; y < size; y++) {
			printf("%5d", arr[x][y]);
		}
		printf("\n");
	}
	system("pause");
}