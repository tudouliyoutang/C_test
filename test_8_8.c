#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//
//int main()
//{
//	//strlen - ���ַ�������
//
//	char arr[] = "QQ";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", arr);//��ַ��Ԫ�ص�ַ
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1.  &arr-������ -������������Ԫ�صĵ�ַ-��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2.  sizeof(arr) -sizeof(������) - ��������ʾ����������- sizeof(������)���������������Ĵ�С
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr; //ָ����������Ԫ��
//	int i = 0;
//
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{  
//		printf(" %d \n", arr[i]);
//
//		printf(" %d \n", *(p+i));
//	}
//
//
//	return 0;
//}

//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//	int*** pppa = &ppa;
//
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//
//	return 0;
//}


//
//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i])); 
	}


	return 0;
}






