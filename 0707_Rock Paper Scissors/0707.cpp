// ���������� ����
//	0�� 1�� �̱��
//	1�� 2�� �̱��
//	2�� 0�� �̱��
//	�������� ���� ���
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int kwang = 0;
int pc = 0;
int i = 0;

int game(int pc, char) {

	for (i = 0; i < 5; i++) {
		printf("user : ");
		scanf("%d", &kwang);
		if (kwang > -1) {
			printf("com : ");
			pc = rand() % 3;
			printf("%d\n", pc);
			if (kwang == pc) {
				printf("tie\n");
			}
			else if (kwang + pc == 1 && kwang < pc)
				printf("win\n");
			else if (kwang + pc == 2 && kwang > pc)
				printf("win\n");
			else if (kwang + pc == 3 && kwang < pc)
				printf("win\n");
			else
				printf("lose\n");
		}
	}
	return 0;
}
int main() {
	printf("���� : 0, ���� : 1, �� : 2\n");
	game(pc, pc);
}