#include <stdio.h>
#define max 5
int main()
{
	int arr[max][max] = { 0 };
	int(*s)[max] = { NULL };
	int i = 0, j = 0, y = 1;

	s = arr;

	for (i = 0; i < max; i++){
		for (j = 0; j < max; j++) {
			*(*(s + j) + i) = y;
			y++;			
		}
	}
	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}