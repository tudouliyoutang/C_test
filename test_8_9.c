#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//
//	printf("c=%d\n", c);
//
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	if (i > sizeof(i)) //sizeof() �������/������ռ�ڴ�Ĵ�С >= 0 �޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�ݵ�����
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//	//��arr��������
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}