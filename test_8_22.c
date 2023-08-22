#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////输出一个二进制序列的所有奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:");
//	for ( i = 30; i >=0 ; i-=2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//
//	return m;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
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


//void print(int *p, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}


//void print_table(int n)
//{
//	int i = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = arr[tmp];
//		left++;
//		right--;
//	}
//
//}

//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int  DigitSum(unsigned int num)
//{
//	if (num >9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else {
//		return num;
//	}
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//double Pow(int n, int k)
//{
//	//n^k = n * n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret); 
//
//	return 0;
//}


int fib1(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

//求第n个斐波那契数  1 1 2 3 5 8 13 21 34 55 .......
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//tdd测试驱动开发
	ret = fib2(n);
	printf("ret = %d\n", ret);
	return 0;
}
