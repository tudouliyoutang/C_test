#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

#include<stdio.h>


void menu()
{
	printf("****************************************\n");
	printf("*************    1.PLAY    *************\n");
	printf("*************    0.EXIT    *************\n");
	printf("****************************************\n");
}

void geme()
{
	//雷的信息存储
	//1.布置好雷的信息
	char mine[ROWS][COLS] = {0};//11*11
	
	//2.排查出雷的信息
	char show[ROWS][COLS] = {0};

	//打印棋盘
	//InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	DisplayBoard(mine, ROW, COL);

}


	void test()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择:>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				geme();
				break;
			case 0:
				printf("退出游戏\n");
				break;
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
			}
		} while (input);

	}

	int main()
	{
		menu();
		test();
	}