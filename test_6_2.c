#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����һ������-�������-10��
//	//int arr[10] = { 1,2,3 }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = { 'a',98 };
//	//char arr3[5] = "ab";
//
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen������ַ�����ʵ�ʳ���
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


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//������Ԫ�ص�ַ
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);//����ĵ�ַ
	printf("%p\n", &arr+1);


	return 0;
}