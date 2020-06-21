#define max 5
#include <stdio.h>
int main(){
	int arr[max][max] = { 0 };
	int i = 0, j = 0, y = 0;

	if (i < max) {
		for (i = 0; i < max; i++) {
			y++;
			arr[i][j] = y;
			if (i == max - 1) {
				for (j = 0; j < max; j++) {
					arr[i][j] = y;
					y++;
				}
			}
		}
	}
	if (i == max) {
		for (i = max - 2; i >= 0; i--) {
			j = max - 1;
			arr[i][j] = y;
			y++;
			if (i == 0) {
				for (j = max - 2; j >= 1; j--) {
					i = 0;
					arr[i][j] = y;
					y++;
				}
			}
		}
	}
	if (i == -1) {
		for (i = max - 4; i < 4; i++) {
			j = max - 4;
			arr[i][j] = y;
			y++;
			if (i == 3) {
				for (j = max - 3; j < 4; j++) {
					i = max - 2;
					arr[i][j] = y;
					y++;
				}
			}
		}
	}
	if (i == 4) {
		for (i = max - 3; i > 0; i--) {
			j = max - 2;
			arr[i][j] = y;
			y++;
			if (i == 1) {
				j = max - 3;
				arr[i][j] = y;
				y++;
			}
		}
		i = max - 3;
		arr[i][j] = y;
		y++;
	}
	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			printf("%3d ", arr[j][i]);
		}
		printf("\n");
	}
}
