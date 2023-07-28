#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//小乐乐上课需要走n阶台阶，他每次可以选择走一阶或者走两阶，所以他有多少种走法？
//输入描述：
//输入一个整数n（1 <= n <= 30）
//输出描述：
//输出一个整数，即小乐乐可以走的方法数


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d",&n);
//
//	//计算
//	int m = fib(n);
//
//	//输出
//	printf("%d\n", m);
//	return 0;
//
//}


//描述
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。

//数据范围：序列长度和序列中的值都满足 1 <= n <= 50

//输入描述：
//第一行输入一个整数（0 <= N <= 50）。
//第二行输入N个整数，输入用空格分隔的N个整数
//第三行输入想要删除的数

//输出描述：
//输出为一行，删除指定数字之后的序列。


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	//接受50个数字
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//接受删除的值
//	scanf("%d", &del);
//	int j = 0;
//	for ( i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[j];
//		}
//	}
//	for ( i = 0; i < j; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//描述
//输入n个成绩，换行输出n个成绩	中最高分数和最低分数的差
//输入描述：
//两行，第一行为n，表示n个成绩，不会大于10000.
//输出描述：
//一行，输出n个成绩中最高分数和最低分数的差

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//
//	//输入
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//
//
//	return 0;
//}


//描述
//完成字母大小写转换，有一个字符,判断它是否为大写字母,如果是，将它转换为小写字母；反之转换为大写字母。
//
//输入描述
//多组输入，每一行输入一个字母
//
//输出描述
//针对每组输入，输出独占一行，输出字母的对应形式


#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据个数
//	//在读取失败的时候返回EOF
//	/*while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}*/
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//	return 0;
//}

//判断输入的字符是不是字母

//int main()
//{
//	char ch = 0;
//	//%c前加空格
//	//跳过下一个字符之前的所有空白字符
//	while (scanf(" %c",&ch) != EOF)
//	{	//if(isalpha(ch))
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//		//getchar();
//	}
//
//	return 0;
//}


//判断三个数中最大
//数据范围0<= n <= 100

//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//
//	}
//	printf("%d", max);
//	return 0;
//}

//变种水仙花数
//变种水仙花数 -Lily Number:把任意的数字，从中间拆分成两个数，比如1461可以拆分成（1和461），（14和61），（146和1），如果
//所有拆分后的乘积之和等于自身，则是一个Lily Number

#include <math.h>
int main()
{
	int i = 0;

	for ( i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for ( j = 0; j <=4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}


















