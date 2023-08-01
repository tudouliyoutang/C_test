#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 补码
//	//11111111111111111111111111111110 反码
//	//10000000000000000000000000000001 原码
//	// -1
//
//	printf("%d\n", ~a);
//
//	return 0;
//}


//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p 能够访问4个字节
//char* p; *p 能够访问1个字节
//doouble* p; *p 能够访问8个字节
//int main()
//{
//
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pb);
//
//
//
//
//	return 0;
//}



//指针类型决定了：指针走一步走多远(指针的步长)
//int* p :p+1 --> 4
//char* p:p+1 --> 1
//double* p:p+1 --> 8
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);
//
//	printf("%d\n", pc);
//	printf("%d\n", pc+1);
//
//	return 0;
//}



//int main()
//{
//	// int a;局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}


//指针越界访问
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for ( i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}

	return 0;
}


