#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <Windows.h>

//int main() //�����������ֵ
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a�����ֵ
//	//b���м�ֵ
//	//c����Сֵ
//	if (a<b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//
//	}
//	if (a<c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b<c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()  //��ӡ1����100�������е����ı���
//{
//	int i = 0;
//	for ( i = 1; i<=100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}



//int main() //���������Լ��
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//
//	scanf("%d%d", &a, &b);
//
//	while (r=a%b)
//	{
//		//r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}


//int main() //��ӡ1000�굽3000�������
//{
//	//��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
//	//�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩��
//
//	int year = 1000;
//	int count = 0;
//	for ( year ; year<=3000; year++)
//	{
//		/*if (year%4==0 &&year%100 != 0 )
//		{
//			printf("����:%d\n", year);
//			count++;
//		}
//		if (year%100==0 && year%400==0)
//		{
//			printf("����:%d\n", year);
//			count++;
//		}*/
//
//		if (((year%4==0)&&(year%100!=0)) || (year % 400 == 0))
//		{
//			printf("����:%d\n", year);
//			count++;
//		}
//	}
//	printf("��������:%d", count);
//
//	return 0;
//}


//int main() //�ж�i�Ƿ�Ϊ����
//{
//	int	i = 0;
//	int count = 0;
//	//ż��������������
//	for ( i = 101; i<=200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2 ; j <=sqrt(i); j++)// sqrt �⺯�� ��ƽ��
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	
//	printf("count��%d", count);
//
//	return 0;
//}


//int main() //��ӡ1����100�����˼���9
//{
//	int i = 0;
//	int	count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i%10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("�����ˣ�%d��9", count);
//
//	return 0;
//}



//int main() //��1/1-1/2+1/3-1/4+......+1/99-1/100��ֵ����ӡ���
//{
//	int	i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for ( i = 1; i<100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}


//int main() //��ʮ�����������ֵ
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int	i = 0;
//
//	for ( i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("���ֵ:%d", max);
//
//	return 0;
//}


//int main() //�žų˷��ھ���
//{
//	int i = 0;
//	int n = 0;
//
//	for ( i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= 9; n++)
//		{
//			printf("%d*%d=%2d\n", i,n,i*n);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()- ִ��ϵͳ�����
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺���Ǳ�������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "���Ǳ���") == 0)//�Ƚ������ַ��� -strcmp
		{
			system("shutdown -a");
			break;
		}
	}
	
	/*else
	{
		goto again;
	}*/
	return 0;
}