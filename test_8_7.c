
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
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
//	int a = 10;//ָ��һ��Ҫ��ʼ��
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };//ָ���ָ�������ָ��ֱ��Ԫ�ظ��� ��ָ���Сָ��  Сָ�����ָ��Ϊ����ֵ
	printf("%Id\n", &arr[0] - &arr[9]);
	printf("%Id\n", &arr[9] - &arr[0]);
	//printf("%d\n", &arr[9] - &ch[0]);//ָ���ָ�����ָ��ͬһ��ռ�,����û������

	return 0;
}