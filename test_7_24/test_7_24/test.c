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
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = {0};//11*11
	
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = {0};

	//��ӡ����
	//InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	DisplayBoard(mine, ROW, COL);

}


	void test()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("��ѡ��:>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				geme();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
			}
		} while (input);

	}

	int main()
	{
		menu();
		test();
	}