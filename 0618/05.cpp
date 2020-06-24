#define row 5
#define col 3
#include <stdio.h>

int a[row][col] = { 0 };
int a_row = sizeof(a) / sizeof(a[0]);
int a_col = sizeof(a[0]) / sizeof(a[0][0]);

int b[col][row] = { 0 };
int b_row = sizeof(b) / sizeof(b[0]);
int b_col = sizeof(b[0]) / sizeof(b[0][0]);

int i = 0, j = 0, y = 0;

int main()
{
	for (i = 0; i < row * col; i++) {
		a[0][i] = ++y;
	}
	for (i = 0; i < row * col; i++) {
		b[0][i] = a[0][i];
	}

	for (i = 0; i < a_row; i++) {
		for (j = 0; j < a_col; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < b_row; i++) {
		for (j = 0; j < b_col; j++) {
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
}