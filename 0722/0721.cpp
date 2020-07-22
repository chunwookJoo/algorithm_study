#ifndef __STDIO_H__
#define __STDIO_H__
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#endif

void proc_info() {
	printf("$$$ �� ���α׷��� [����������α׷�] �Դϴ�. $$$\n\n");
}

int Menu_show() {
	int temp;
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "    ATM(�������)���α׷�\n");
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "1. �Ա��ϱ� \n");
	fprintf(stdout, "2. ����ϱ� \n");
	fprintf(stdout, "3. �ܾ���ȸ�ϱ� \n");
	fprintf(stdout, "4. ���� \n");
	fprintf(stdout, "-------------------------------\n");
	fprintf(stdout, "���ϴ� ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &temp);
	system("cls");
	return temp;
}

void deposit(int *p) {
	int m = 0;
	printf("�Ա��Ͻ� �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &m);
	printf("%d�� �Ա��ϼ̽��ϴ�.\n",m);
	*p += m;
}
void withdraw(int *p) {
	int m = 0;
	printf("����Ͻ� �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &m);
	if (m > *p)
		printf("�ܾ��� �����մϴ�. �ܾ��� Ȯ���ϼ���.\n");
	else {
		*p -= m;
		printf("%d�� ����ϼ̽��ϴ�. ���� �ݾ� %d��\n", m, *p);
	}
}

void Lookup(int *i) {
	printf("�ܾ� : %d��\n", *i);
}

void MainLoop() {

	int money = 0;
	int temp;
	while (TRUE) {
		temp = Menu_show();
		switch (temp) {
		case 1: printf("�Ա��ϱ�\n\n"),deposit(&money);
			break;
		case 2: printf("����ϱ�\n\n"), withdraw(&money);
			break;
		case 3: printf("��ȸ�ϱ�\n\n"), Lookup(&money);
			break;
		case 4: printf("�����ϱ�\n\n"), exit(0);
			break;
		default: printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
			break;
		}
	}
}

int main(void) {
	proc_info();
	MainLoop();
}