/*
	10. 성적처리
	1) 정답지 배열
		dap[10]={1,1,2,3, };
	2) 학생답지배열
		stdap[10]={};
	3) 채점 학생 별로 점수 저장
		1개 * 10점
	4) 출력형식
		학번	답안 채점 ox결과  점수
	5) 조건
		2차원 배열
		
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

	printf("학번\t오답\t\t점수\n");
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