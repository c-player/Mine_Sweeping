#define _CRT_SECURE_NO_WARNINGS 1

#include "saolei.h"

void menu()
{
	printf("*****************************\n");
	printf("********  1. 扫雷  **********\n");
	printf("********  0. 退出  **********\n");
	printf("*****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	InitBoard(mine, ROWS, COLS, '0');      //初始化
	InitBoard(show, ROWS, COLS, '*');
	
	DisplayBoard(show, ROW, COL);          //打印
	
	SetMine(mine, ROW, COL);               //布置雷

	DisplayBoard(mine, ROW, COL);
	
	FindMine(mine, show, ROW, COL);        //扫雷
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏。\n");
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
    return 0;
}