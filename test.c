#define _CRT_SECURE_NO_WARNINGS 1

#include "saolei.h"

void menu()
{
	printf("*****************************\n");
	printf("********  1. ɨ��  **********\n");
	printf("********  0. �˳�  **********\n");
	printf("*****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	InitBoard(mine, ROWS, COLS, '0');      //��ʼ��
	InitBoard(show, ROWS, COLS, '*');
	
	DisplayBoard(show, ROW, COL);          //��ӡ
	
	SetMine(mine, ROW, COL);               //������

	DisplayBoard(mine, ROW, COL);
	
	FindMine(mine, show, ROW, COL);        //ɨ��
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
    return 0;
}