#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int avg(int n)
//{
//	int sum = 0;
//	int data;
//	int i = n;
//	printf("������%d������: \n", n);
//	while (i > 0)
//	{
//		scanf("%d", &data);
//		sum += data;
//		i--;
//	}
//	int avg = sum / n;
//	return avg;
//}
//
//int main()
//{
//	int n = 3, a = 0;
//	a = avg;
//	printf("��%d�����ݵ�ƽ��ֵΪ: %d\n", n, a);
//	return 0;
//}

//void menu()
//{
//	printf("************************\n");
//	printf("** 1. add       2. sub**\n");
//	printf("** 3. mul       4. div**\n");
//	printf("**       0. ext       **\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5](int ,int)
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <=4)
//		{



		/*switch (input)
		{
		case 1:
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y);
			break;
		case 2:
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y);
			break;
		case 3:
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y);
			break;
		case 4:
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	return 0;
}*/

//void menu()
//{
//	printf("************************\n");
//	printf("** 1. add       2. sub**\n");
//	printf("** 3. mul       4. div**\n");
//	printf("** 5. Xor       0. ext**\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//#define MONTHS 12  //12���·� MONTHS��ʾ�����С
//
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  //12����ÿ���ж�����
//	int index;
//
//	for (index = 0; index < MONTHS; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//
//	return 0;
//}
//	
//const int days[MONTHS]  //��const����Ҳ����

//#define MONTHS 12
//int main(void)
//{
//	const int days[MONTHS]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int ppt;
//
//	for (ppt = 0; ppt < MONTHS; ppt++)
//		printf("Month %2d has %2d days.\n", ppt + 1, days[ppt]);
//	return 0;
//}

//int main(void)
//{
//	int no_data[SIZE];
//	int i;
//
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	return 0;
//}
//�žų˷��ھ���
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}
//�㼸������ƽ��ֵ
//int avg(int n)
//{
//	int sum = 0;
//	int data;
//	int i = n;
//	printf("������%d������: \n", n);
//	while (i > 0)
//	{
//		scanf("%d", &data);
//		sum += data;
//		i--;
//	}
//	int avg = sum / n;
//	return avg;
//}
//
//int main()
//{
//	int n = 3, a=0;
//	a = avg(n);
//	printf("��%d�����ݵ�ƽ��ֵΪ: %d\n", n, a);
//	return 0;
//}
//����
int fun()
{
	int a = 10;
	return a;
}
int main()
{
	int a = 5;
	int b=fun();
	printf("a=%d,b=%d\n", a, b);
	return 0;
}













