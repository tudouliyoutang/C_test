#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <math.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "##########";;
//	//             bit\0#####
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length -字符串长度有关
//
//	return 0;
//}


//memset
//memset - 内存 set - 设置

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}


//不能完成任务
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改不会影响实参
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//int main()
//{
//	int a = 10;;
//	int b = 20;
//
//	//交换a，b的值
//
//	//函数的调用
//	//传值调用
//	// 形参和实参有不同的内存空间
//	//对形参的修改不会影响实参
//	//传址调用
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


////是素数返回1,否则返回0
//is_Pring( int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)// sqrt 库函数 开平方
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	if (j>sqrt(n))
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	//打印1-200的素数
//	int i = 0;
//	for ( i = 101; i<=200; i+=2)
//	{
//		if (is_Pring(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	
//		return 1;
//	else
//		return 0;
//	
//}
//
//int main()
//{
//	int year = 0;;
//	for (year = 2000; year <= 3000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//
//	return 0;
//}



////						本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//
//}
//
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了，返回这个数的下标，找不到返回-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//写一个函数，调用一次num加一
//Add(int* a)
//{
//	(*a)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1	
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//
//	return 0;
//}








