#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////交换两变量的值，不用中间变量
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	printf("交换前: a=%d b=%d\n", a, b);
//	//不会溢出
//	//  ^ 按（二进制)位异或 相同为0，相异为1
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("交换后: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}


////交换两变量的值，不用中间变量
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	printf("交换前: a=%d b=%d\n", a, b);
//	//溢出的问题
//	//int - 4个字节 -32bit位 -最大值
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("交换后: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}


////找出数组内只出现一次的元素
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4,5,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//
//	for ( i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;//计数器
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if (count==1)
//		{
//			printf("单身狗: %d\n", arr[i]);
//			break;
//		}
//	}
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,1,2,3,4,5, };
	//找出单身狗
	//暴力求解
	int i = 0;
	int ret = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	for (i = 0; i < sz; i++)
	{
     	ret = ret ^ arr[i];
	}
	printf("单身狗: %d \n", ret);

	return 0;
}