#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TITLE 50

typedef struct movie {
	char title[TITLE];
	double rating;
	struct movie* link;
}MOVIE;

movie* list = NULL;
movie* prev = NULL, * p = NULL, * next = NULL;

void print(char title, double rating);
void freedom();

int main() {

	int movie_num = 0;
	double rating;
	char title[TITLE];
	// ������ ��ȭ �� �Է�
	printf("�� ���� ��ȭ�� �����Ͻðڽ��ϱ�? :");
	scanf("%d", &movie_num);
	getchar();
	// ��ȭ ����� ���� �Է�
	for (int i = 0; i < movie_num; i++) {
		printf("��ȭ ������ �Է��ϼ��� (�����Ϸ��� ����) : ");
		gets_s(title);
		if (title[0] == '\0')
			break;
		p = (movie*)malloc(sizeof(MOVIE));
		strcpy(p->title, title);

		printf("���� �Է� : ");
		gets_s(title);
		rating = atof(title);
		p->rating = rating;

		if (list == NULL)
			list = p;
		else
			prev->link = p;
		p->link = NULL;
		prev = p;
	}
	print((char)title, (double)rating);
	freedom();
}
// ���
void print(char title, double rating) {
	p = list;
	while (p != NULL) {
		printf("*****************************\n");
		printf("��ȭ ���� : %s ���� : %.1lf \n", p->title, p->rating);
		printf("*****************************\n");
		p = p->link;
	}
}
// �޸� �ݳ�
void freedom() {
	p = list;
	while (p != NULL) {
		next = p->link;
		free(p);
		p = next;
	}
}