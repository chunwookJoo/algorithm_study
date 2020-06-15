#include <stdio.h>
#define max 5
int main()
{
	int arr[max][max] = { 0 };
	int(*s)[max] = { NULL };
	int i = 0, j = 0, y = 1;
	int a = 2, b = 3, c = 1, d = 4;

	s = arr;

	for (i = 0; i < max; i++) {
		if (b <= max) {
			for (j = a; j < b; j++) {
				*(*(s + i) + j) = y;
				y++;
			}
			a--, b++;
		}
		else if (c < 3) {
			for (j = c; j < d; j++) {
				*(*(s + i) + j) = y;
				y++;
			}
			c++, d--;
		}
	}

	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			if (arr[i][j])
				printf("%4d", arr[i][j]);
			else
				printf("%4c", ' ');
		}
		printf("\n");
	}
}