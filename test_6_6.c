#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////������������ֵ�������м����
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	//�������
//	//  ^ ����������)λ��� ��ͬΪ0������Ϊ1
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("������: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}


////������������ֵ�������м����
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	//���������
//	//int - 4���ֽ� -32bitλ -���ֵ
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("������: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}


////�ҳ�������ֻ����һ�ε�Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4,5,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//
//	for ( i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;//������
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if (count==1)
//		{
//			printf("����: %d\n", arr[i]);
//			break;
//		}
//	}
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,1,2,3,4,5, };
	//�ҳ�����
	//�������
	int i = 0;
	int ret = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	for (i = 0; i < sz; i++)
	{
     	ret = ret ^ arr[i];
	}
	printf("����: %d \n", ret);

	return 0;
}