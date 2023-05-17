#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	
//	return 0;
//}


//输出十进制整数1234对应的八进制和十六进制
//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在
//十六进制数前显示前导0X
//int main()
//{
//	printf("0%o OX%X", 1234,1234);
//	return 0;
//}


//将一个四位数，反向输出
//int main()
//{
//	int n = 0;
//	//输入数据
//	scanf("%d", &n);
//	//获取每一位
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//
//	return 0;
//}