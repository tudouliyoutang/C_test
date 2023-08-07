
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认放的是一个随机值
//	*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;
//
//	return 0;
//}

//int main()
//{
//
//	int *p = NULL;
//																																																																																	
//	int a = 10;//指针一定要初始化
//	p = &a;
//	if (p != NULL) {
//		*p = 20;
//	}																																																																
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for ( i = 0; i < 5; i++)
//	{
//		printf(" %d ", *p);
//		//p++;
//		p -= 2;
//		
//	}
//
//	return 0;
//}


int main()
{
	int ch[10] = { 1,2,3,4,5,6,7,8,9,11 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };//指针减指针等于两指针直接元素个数 大指针减小指针  小指针减大指针为绝对值
	printf("%Id\n", &arr[0] - &arr[9]);
	printf("%Id\n", &arr[9] - &arr[0]);
	//printf("%d\n", &arr[9] - &ch[0]);//指针减指针必须指向同一块空间,否则没有意义

	return 0;
}