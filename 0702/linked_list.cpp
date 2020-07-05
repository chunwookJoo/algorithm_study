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
	// 저장할 영화 수 입력
	printf("몇 편의 영화를 저장하시겠습니까? :");
	scanf("%d", &movie_num);
	getchar();
	// 영화 제목과 평점 입력
	for (int i = 0; i < movie_num; i++) {
		printf("영화 제목을 입력하세요 (종료하려면 엔터) : ");
		gets_s(title);
		if (title[0] == '\0')
			break;
		p = (movie*)malloc(sizeof(MOVIE));
		strcpy(p->title, title);

		printf("평점 입력 : ");
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
// 출력
void print(char title, double rating) {
	p = list;
	while (p != NULL) {
		printf("*****************************\n");
		printf("영화 제목 : %s 평점 : %.1lf \n", p->title, p->rating);
		printf("*****************************\n");
		p = p->link;
	}
}
// 메모리 반납
void freedom() {
	p = list;
	while (p != NULL) {
		next = p->link;
		free(p);
		p = next;
	}
}