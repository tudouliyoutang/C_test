#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char passWord[20] = { 0 };
//
//	printf("����������:>");
//	scanf("%s", passWord);//�������룬������passWord������
//	//��������ʣһ�� '\n'
//	//��ȡһ�� '\n' 
//
//	while ((ch = getchar())!= '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	return 0;
//}


//int main()//��n�Ľ׳�
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	printf("%d", num);
//	return 0;
//}



//int main()//��׳˵ĺ�
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i=1; i<4; i++)
//	{
//		//i�Ľ׳�
//		ret = ret * i;
//
//		sum = sum + ret;
//	}
//	printf("sum = %d", sum);
//
//	return 0;
//}


//int main()//�۰���� ���ֲ���
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d ",mid);
//			break;
//		}
//	}
//
//	if (left>right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "Welcome to ChangSha";
//	char arr2[] = "*******************";
//	int	left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


//int main()
//{
//	int	i = 0;
//	char password[20] = { 0 };
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("����������:\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0) //  == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� -strcmp
//		{
//			printf("��½�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("��½ʧ��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������������!!\n");
//	}
//
//	return 0;
//}