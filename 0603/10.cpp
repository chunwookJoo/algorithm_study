/*
	10. ����ó��
	1) ������ �迭
		dap[10]={1,1,2,3, };
	2) �л������迭
		stdap[10]={};
	3) ä�� �л� ���� ���� ����
		1�� * 10��
	4) �������
		�й�	��� ä�� ox���  ����
	5) ����
		2���� �迭
		
*/
#include <stdio.h>
#define max 10
#define stu 4
int main()
{
	int dap[max] = { 1,2,3,4,3,2,1,4,2,1 };
	int number[stu] = { 1,2,3,4 };
	int stu_asw[stu][max] = { { 1,2,4,4,2,3,1,3,2,4 },
							  { 4,3,2,1,2,3,1,4,3,2 },
							  { 2,3,4,4,3,4,1,2,3,4 },
							  { 1,4,1,4,2,3,2,3,4,1 } };
	int score = 0, res = 0;;
	int val[stu][max];

	printf("�й�\t����\t\t����\n");
	for (int h = 0; h < stu; h++){
		printf("%d   ", h+1, val[h][0]);
		for (int c = 0; c < max; c++){
			if (dap[c] == stu_asw[h][c]) {
				printf("O ");
				score += 10;
			}
			else
				printf("X ");
		}
		printf(" %d", score, val[0][10]);
		score = 0;
		printf("\n");
	}
}