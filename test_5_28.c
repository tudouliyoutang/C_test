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
//	//strcpy - string copy - �ַ�������
//	//strlen - string length -�ַ��������й�
//
//	return 0;
//}


//memset
//memset - �ڴ� set - ����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}


//�����������
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
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
//	//����a��b��ֵ
//
//	//�����ĵ���
//	//��ֵ����
//	// �βκ�ʵ���в�ͬ���ڴ�ռ�
//	//���βε��޸Ĳ���Ӱ��ʵ��
//	//��ַ����
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


////����������1,���򷵻�0
//is_Pring( int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)// sqrt �⺯�� ��ƽ��
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
//	//��ӡ1-200������
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



////						������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��ˣ�������������±꣬�Ҳ�������-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//дһ������������һ��num��һ
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








