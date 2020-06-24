#define max 5
#include <stdio.h>

void print(int(*arr)[max])
{
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			printf("%3d ", arr[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[max][max] = { 0 };
	int i = 0, j = 0, y = 0;

	for (i = 0, j = max / 2, y = 1; y <= max * max; y++) {
		arr[j][i] = y;
		if (y % max * max == 0) {
			i++;
		}
		else 
			i--, j++;
		if (i < 0) i = max - 1;
		if (j == max) j = 0;
	}
	print(arr);
}