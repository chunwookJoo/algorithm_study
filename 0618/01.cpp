#define _CRT_SECURE_NO_WARNINGS
#define max 5
#include <stdio.h>

int main()
{
	int arr[max][max] = { 0 };
	int i = 0, j = 0, y = 1;

	/*for (j = max-1; j >= 0; j--) {
		for (i = j; i < max; i++) {
			arr[j][i] = y;
			y++;
		}
	}

	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			if (arr[i][j])
				printf("%3d", arr[i][j]);
			else
				printf("%3c", ' ');
		}
		printf("\n");
	}*/

	
	for (i = 0; i < max; i++) {
		for (j = max-1-i; j < max; j++) {
		arr[j][i] = y;
		y++;
		}
	}

	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			if (arr[i][j])
				printf("%3d", arr[i][j]);
			else
				printf("%3c", ' ');
		}
		printf("\n");
	}
}