#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����������(��Ŀ������)
//���ʽ1 �� ���ʽ2 �����ʽ3
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

//���ű��ʽ
// ��������һ��ִ��,ֵ�����һ�����ʽ��ֵ
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
//	//arr��������Ԫ�ص�ַ
//	//arr+7��������7��Ԫ�أ�ָ��ڰ˸�Ԫ��
//	//*(arr+7)���ǵڰ˸�Ԫ��
//	//
//
//	arr[7] = 8;
//	7[arr] = 9;
//
//	return 0;
//}


//��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 100;
//	//��������
//	int c = Add(a, b);
//
//	printf("c:%d\n", c);//()���Ǻ������ò�����,��������ADD,a,b
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
//	strcpy(ps->name, "����");
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

//�������ڴ��д�Ķ��ǲ���  ��ӡ����ԭ��










