#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i <= 9; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����

	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "###############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}


//int main()
//{
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;
//	 int* const p = &num;
//	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ���ı�p���ı�*p(num)��ֵ��
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//
//	 //p = &n;
//	 *p = 0;
//
//	printf("%d\n", num);
//
//	return 0;
//}











