#define max 5
#include <stdio.h>
void print(int (*arr)[max]) {
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			printf("%3d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int arr[max][max] = { 0 };
	int i = 0, j = 0, t = 0, y = 1;

	for (i = 0; i < max; i++) {
		for (j = 0; j <= i; j++) {
			if(i<max && j<max)
				arr[i-j][j] = y++;
		}
	}
	for (t = 0; t < max-1; t++) {
		for (i = 1; i < max; i++) {
			for (j = 4; j > 0; j--) {
				if (max + t == i + j)
					arr[j][i] = y++;
			}
		}
	}


	printf("%d \n", i);
	printf("%d \n", j);
	print(arr);
}