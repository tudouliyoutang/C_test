#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//
//	printf("%d\n", b);
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,1,2,3,4,5 };
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
