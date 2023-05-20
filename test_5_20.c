#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <Windows.h>

//int main() //三个数求最大值
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a放最大值
//	//b放中间值
//	//c放最小值
//	if (a<b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//
//	}
//	if (a<c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b<c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()  //打印1——100以内所有的三的倍数
//{
//	int i = 0;
//	for ( i = 1; i<=100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}



//int main() //求两数最大公约数
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//
//	scanf("%d%d", &a, &b);
//
//	while (r=a%b)
//	{
//		//r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}


//int main() //打印1000年到3000年的闰年
//{
//	//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
//	//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
//
//	int year = 1000;
//	int count = 0;
//	for ( year ; year<=3000; year++)
//	{
//		/*if (year%4==0 &&year%100 != 0 )
//		{
//			printf("闰年:%d\n", year);
//			count++;
//		}
//		if (year%100==0 && year%400==0)
//		{
//			printf("闰年:%d\n", year);
//			count++;
//		}*/
//
//		if (((year%4==0)&&(year%100!=0)) || (year % 400 == 0))
//		{
//			printf("闰年:%d\n", year);
//			count++;
//		}
//	}
//	printf("闰年总数:%d", count);
//
//	return 0;
//}


//int main() //判断i是否为素数
//{
//	int	i = 0;
//	int count = 0;
//	//偶数不可能是素数
//	for ( i = 101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2 ; j <=sqrt(i); j++)// sqrt 库函数 开平方
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	
//	printf("count：%d", count);
//
//	return 0;
//}


//int main() //打印1——100出现了几次9
//{
//	int i = 0;
//	int	count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i%10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("出现了：%d次9", count);
//
//	return 0;
//}



//int main() //求1/1-1/2+1/3-1/4+......+1/99-1/100的值，打印结果
//{
//	int	i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for ( i = 1; i<100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}


//int main() //求十个整数的最大值
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int	i = 0;
//
//	for ( i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("最大值:%d", max);
//
//	return 0;
//}


//int main() //九九乘法口诀表
//{
//	int i = 0;
//	int n = 0;
//
//	for ( i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= 9; n++)
//		{
//			printf("%d*%d=%2d\n", i,n,i*n);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()- 执行系统命令的
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("请注意，你的电脑将在一分钟后关机，如果输入：我是笨蛋，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是笨蛋") == 0)//比较两个字符串 -strcmp
		{
			system("shutdown -a");
			break;
		}
	}
	
	/*else
	{
		goto again;
	}*/
	return 0;
}