#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 ����
//	//11111111111111111111111111111110 ����
//	//10000000000000000000000000000001 ԭ��
//	// -1
//
//	printf("%d\n", ~a);
//
//	return 0;
//}


//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p; *p �ܹ�����4���ֽ�
//char* p; *p �ܹ�����1���ֽ�
//doouble* p; *p �ܹ�����8���ֽ�
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



//ָ�����;����ˣ�ָ����һ���߶�Զ(ָ��Ĳ���)
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
//	// int a;�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}


//ָ��Խ�����
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for ( i = 0; i <= 11; i++)
	{
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		*(p++) = i;
	}

	return 0;
}


