/*
	9. ������ �� ��պ��� ���� ����� �й� ����Ʈ�� ���
	1) �Է�����
		�й�, ����
	2) �������
		������ ����պ��� ���� ����� �й�����Ʈ
	3) ó�� ����
		ó���� �ڷ��� ������ 30�� �̸�
		�������� ���� �˻��϶�.
			�������� ��  === 999�ԷµǸ� ��
		������� ���� ��, ����պ��� ������ ���� ����� �й��� ���
	4) ���� ����
		�迭�� �ʿ伺
		: �������� ��� ������ �� ��պ��� ������ ���� �����
		�й��̹Ƿ� �켱������ �� ����� ���� ���ؾ� ��
		�� ����� ���ϴ� �������� ��� �����͸� �о �迭�� ����� �ξ�� ��
*/
#include <stdio.h>
#define max 5
int main()
{
	int score[max];
	int stuid[max];
	int	stu = 0, tot = 0, avg = 0;

	// �Է�
	for (int j = 1; j < max; j++) {
		printf("[%d] �й�,���� �Է� : ", j);
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