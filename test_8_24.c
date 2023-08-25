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
//	//字符串拷贝
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
//	//字符串拷贝
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
//	//字符串拷贝
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
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}

int main()
{
	//strcpy
	//字符串拷贝
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
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过改变p来改变*p(num)的值了
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//
//	 //p = &n;
//	 *p = 0;
//
//	printf("%d\n", num);
//
//	return 0;
//}











