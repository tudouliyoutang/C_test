#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体
//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//int main()
//{
//	stu s1;//局部变量
//	struct stu s2;
//
//	return 0;
//}



//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//
//int main()
//{
//	Stu s1 = { "张三",20,"15266667777","男" };//局部变量
//	struct Stu s2 = { "旺财",30,"13655557777","保密" };
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//
//	char arr[] = "hello \n";
//	struct T t = { "heihei",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	return 0;
//}



typedef struct stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n",  ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n",  ps->sex);
}

int main()
{
	Stu s = { "李四",20,"13688887777","男" };
	//打印结构体数据
	Print1(s);
	Print2(&s);

	return 0;
}

















