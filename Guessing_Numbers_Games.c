#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//猜数字小游戏
//1.电脑会生成一个随机数
//2.猜数字

//void menu()
//{
//	printf("*************************************\n");
//	printf("*********  1.play   0.exit  *********\n");
//	printf("*************************************\n");
//}
//
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t * timer)
//	//time_t
//	ret = rand() % 100 + 1;//生成1-100的随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了!!!\n");
//			break;
//		}
//
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
