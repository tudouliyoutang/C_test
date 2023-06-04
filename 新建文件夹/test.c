#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("**** 1.play   0.exit ******\n");
	printf("***************************\n");
}


void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("your win!\n");
	}
	else if (ret == '#')
	{
		printf("computer win!\n");
	}
	else
	{
		printf("ƽ��");
	}
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
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	

	
}

int main()
{
	test();
	return 0;
}