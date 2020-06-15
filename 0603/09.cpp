/*
	9. 성적이 반 평균보다 높은 사람의 학번 리스트를 출력
	1) 입력형식
		학번, 성적
	2) 출력형식
		성적이 반평균보다 높은 사람의 학번리스트
	3) 처리 조건
		처리할 자료의 개수는 30명 미만
		데이터의 끝을 검사하라.
			데이터의 끝  === 999입력되면 끝
		반평균을 구한 후, 반평균보다 성적이 높은 사람의 학번을 출력
	4) 주의 사항
		배열의 필요성
		: 개개인의 출력 기준이 반 평균보다 성적이 높은 사람의
		학번이므로 우선적으로 반 평균을 먼저 구해야 함
		반 평균을 구하는 과정에서 모든 데이터를 읽어서 배열에 기억해 두어야 함
*/
#include <stdio.h>
#define max 5
int main()
{
	int score[max];
	int stuid[max];
	int	stu = 0, tot = 0, avg = 0;

	// 입력
	for (int j = 1; j < max; j++) {
		printf("[%d] 학번,성적 입력 : ", j);
		scanf("%d%d", &stuid[j], &score[j]);
		if (stuid[j] == 999 || score[j] == 999) {
			break;
		}
		stu++;
		tot += score[j];
	}
	avg = tot / stu;
	for (int i = 0; i <= stu; i++) {
		if (score[i] > avg){
			printf("%d ", stuid[i]);
		}
	}
}