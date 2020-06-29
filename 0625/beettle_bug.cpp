/**********************
 �������� �̵� ���� �ڵ�
***********************/

#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define room 7		// 2���� �迭 ũ�� ����
#define walk 8		// ���� �̵� Ƚ��

int tile[room][room] = { 0 };
int a = 0, b = 0, random = 0;

int main()
{
	a = room / 2;
	b = room / 2;		// �߾Ӻ��� ����
	tile[a][b] = 1;

	srand(time(NULL));

	for (int i = 0; i < walk; i++) {
		random = rand() % 8;		// 0~7���� ���� ���
		system("cls");				// ������ ������ �迭 ����� �ٽ� ���

		for (int a = 0; a < room; a++) {
			for (int b = 0; b < room; b++) {
				printf("%3d ", tile[a][b]);
			}
			printf("\n");
		}
		_sleep(700);				// ������ �ӵ�

		if (random == 0 && a != 0)	// �̵� ����
			tile[--a][b] = 1;
		else if (random == 1 && a != 0 && b != room - 1)
			tile[--a][++b] = 1;
		else if (random == 2 && b != room - 1)
			tile[a][++b] = 1;
		else if (random == 3 && a != room - 1 && b != room - 1)
			tile[++a][++b] = 1;
		else if (random == 4 && a != room - 1)
			tile[++a][b] = 1;
		else if (random == 5 && a != room - 1 && b != 0)
			tile[++a][--b] = 1;
		else if (random == 6 && b != 0)
			tile[a][--b] = 1;
		else if (random == 7 && a != 0 && b != 0)
			tile[--a][--b] = 1;
	}
}