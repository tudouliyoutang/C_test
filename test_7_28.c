#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//С�����Ͽ���Ҫ��n��̨�ף���ÿ�ο���ѡ����һ�׻��������ף��������ж������߷���
//����������
//����һ������n��1 <= n <= 30��
//���������
//���һ����������С���ֿ����ߵķ�����


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//
//
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d",&n);
//
//	//����
//	int m = fib(n);
//
//	//���
//	printf("%d\n", m);
//	return 0;
//
//}


//����
//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣

//���ݷ�Χ�����г��Ⱥ������е�ֵ������ 1 <= n <= 50

//����������
//��һ������һ��������0 <= N <= 50����
//�ڶ�������N�������������ÿո�ָ���N������
//������������Ҫɾ������

//���������
//���Ϊһ�У�ɾ��ָ������֮������С�


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	//����50������
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//����ɾ����ֵ
//	scanf("%d", &del);
//	int j = 0;
//	for ( i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[j];
//		}
//	}
//	for ( i = 0; i < j; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//����
//����n���ɼ����������n���ɼ�	����߷�������ͷ����Ĳ�
//����������
//���У���һ��Ϊn����ʾn���ɼ����������10000.
//���������
//һ�У����n���ɼ�����߷�������ͷ����Ĳ�

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//
//	//����
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//
//
//	return 0;
//}


//����
//�����ĸ��Сдת������һ���ַ�,�ж����Ƿ�Ϊ��д��ĸ,����ǣ�����ת��ΪСд��ĸ����֮ת��Ϊ��д��ĸ��
//
//��������
//�������룬ÿһ������һ����ĸ
//
//�������
//���ÿ�����룬�����ռһ�У������ĸ�Ķ�Ӧ��ʽ


#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	//scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݸ���
//	//�ڶ�ȡʧ�ܵ�ʱ�򷵻�EOF
//	/*while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}*/
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//	return 0;
//}

//�ж�������ַ��ǲ�����ĸ

//int main()
//{
//	char ch = 0;
//	//%cǰ�ӿո�
//	//������һ���ַ�֮ǰ�����пհ��ַ�
//	while (scanf(" %c",&ch) != EOF)
//	{	//if(isalpha(ch))
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//		//getchar();
//	}
//
//	return 0;
//}


//�ж������������
//���ݷ�Χ0<= n <= 100

//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//
//	}
//	printf("%d", max);
//	return 0;
//}

//����ˮ�ɻ���
//����ˮ�ɻ��� -Lily Number:����������֣����м��ֳ�������������1461���Բ�ֳɣ�1��461������14��61������146��1�������
//���в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number

#include <math.h>
int main()
{
	int i = 0;

	for ( i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for ( j = 0; j <=4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}


















