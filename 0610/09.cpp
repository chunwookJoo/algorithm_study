#include <stdio.h>
#define max 7
int main()
{
	int arr[max][max] = { 0 };
	int(*s)[max] = { NULL };
	int i = 0, j = 0, y = 1;
	int a = 7, b = 5;

	s = arr;

	for (i = 0; i < max; i++) {
		if (a > 3) {
			for (j = 0; j < a; j++) {
				*(*(s + i) + j) = y;
				y++;
			}
			a--;
		}
		else if (b <= max) {
			for (j = 0; j < b; j++) {
				*(*(s + i) + j) = y;
				y++;
			}
			b++;
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