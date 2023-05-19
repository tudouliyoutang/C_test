#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	int ch = 0;
//	//EOF - end of file 文件结束标志
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char passWord[20] = { 0 };
//
//	printf("请输入密码:>");
//	scanf("%s", passWord);//输入密码，并存在passWord数组中
//	//缓冲区还剩一个 '\n'
//	//读取一下 '\n' 
//
//	while ((ch = getchar())!= '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	return 0;
//}


//int main()//求n的阶乘
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	printf("%d", num);
//	return 0;
//}



//int main()//求阶乘的和
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i=1; i<4; i++)
//	{
//		//i的阶乘
//		ret = ret * i;
//
//		sum = sum + ret;
//	}
//	printf("sum = %d", sum);
//
//	return 0;
//}


//int main()//折半查找 二分查找
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d ",mid);
//			break;
//		}
//	}
//
//	if (left>right)
//	{
//		printf("找不到了");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "Welcome to ChangSha";
//	char arr2[] = "*******************";
//	int	left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


//int main()
//{
//	int	i = 0;
//	char password[20] = { 0 };
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码:\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0) //  == 不能用来比较两个字符串是否相等，应该使用一个库函数 -strcmp
//		{
//			printf("登陆成功!\n");
//			break;
//		}
//		else
//		{
//			printf("登陆失败\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误!!\n");
//	}
//
//	return 0;
//}