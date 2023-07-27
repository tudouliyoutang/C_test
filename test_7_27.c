#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//条件操作符(三目操作符)
//表达式1 ？ 表达式2 ：表达式3
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//
//	(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : -3);
//	printf("b:%d\n", b);
//	
//	return 0;
//}

//逗号表达式
// 从左至右一次执行,值是最后一个表达式的值
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c:%d\n", c);
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	//
//	//arr是数组首元素地址
//	//arr+7就是跳过7个元素，指向第八个元素
//	//*(arr+7)就是第八个元素
//	//
//
//	arr[7] = 8;
//	7[arr] = 9;
//
//	return 0;
//}


//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 100;
//	//函数调用
//	int c = Add(a, b);
//
//	printf("c:%d\n", c);//()就是函数调用操作符,操作数：ADD,a,b
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 90.0;
//	strcpy(ps->name, "张三");
//	ps->age = 20;
//	ps->score = 90.0;
//}
//
//void print_stu(struct Stu* ps)
//{
//	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(&s);
//
//	return 0;
//}

//整形在内存中存的都是补码  打印的是原码










