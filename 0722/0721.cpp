#ifndef __STDIO_H__
#define __STDIO_H__
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#endif

void proc_info() {
	printf("$$$ 이 프로그램은 [은행관리프로그램] 입니다. $$$\n\n");
}

int Menu_show() {
	int temp;
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "    ATM(은행관리)프로그램\n");
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "1. 입금하기 \n");
	fprintf(stdout, "2. 출금하기 \n");
	fprintf(stdout, "3. 잔액조회하기 \n");
	fprintf(stdout, "4. 종료 \n");
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "원하는 번호를 입력하세요 : ");
	scanf_s("%d", &temp);
	system("cls");
	return temp;
}

void deposit(int *p) {
	int m = 0;
	printf("입금하실 금액을 입력하세요 : ");
	scanf_s("%d", &m);
	printf("%d원 입금하셨습니다.\n",m);
	*p += m;
}
void withdraw(int *p) {
	int m = 0;
	printf("출금하실 금액을 입력하세요 : ");
	scanf_s("%d", &m);
	if (m > *p)
		printf("잔액이 부족합니다. 잔액을 확인하세요.\n");
	else {
		*p -= m;
		printf("%d원 출금하셨습니다. 남은 금액 %d원\n", m, *p);
	}
}

void Lookup(int *i) {
	printf("잔액 : %d원\n", *i);
}

void MainLoop() {

	int money = 0;
	int temp;
	while (TRUE) {
		temp = Menu_show();
		switch (temp) {
		case 1: printf("입금하기\n\n"),deposit(&money);
			break;
		case 2: printf("출금하기\n\n"), withdraw(&money);
			break;
		case 3: printf("조회하기\n\n"), Lookup(&money);
			break;
		case 4: printf("종료하기\n\n"), exit(0);
			break;
		default: printf("잘못 입력하셨습니다.\n\n");
			break;
		}
	}
}

int main(void) {
	proc_info();
	MainLoop();
}