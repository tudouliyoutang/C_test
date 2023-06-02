#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//创建一个数组-存放整形-10个
//	//int arr[10] = { 1,2,3 }; //不完全初始化，剩下的元素默认初始化为0
//	//char arr2[5] = { 'a',98 };
//	//char arr3[5] = "ab";
//
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占空间的大小
//	//7个元素 char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen求的是字符串的实际长度
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡的趟数
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,4,5,2,6,1,3,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//数组首元素地址
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);


	return 0;
}