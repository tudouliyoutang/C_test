#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234����� 1 2 3 4
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
////��д��������������ʱ���������ַ�������
//int main()
//{
//	char arr[] = "byte";
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//
//	return 0;
//}


//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
////�ݹ�
//int Fac2(int n)
//{
//	if (n<=1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
////��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}


//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////���n��쳲�������  1 1 2 3 5 8 13 21 34 55 .......
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD������������
//	ret = Fib2(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

