#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ά���鴫��
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])  //��ά�������ʡ���У�������ʡ����
//{}
//void test2(int arr[3][5])  
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	return 0;
//}

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//
//	int (*pa)(int, int) = Add;
//	return 0;
//}

//void Print(char*str)
//{
//	printf("%s\n", str);  //str�Ǵ�ӡ��Ҫ��Ӧ����
//}
//
//int main()
//{
//	void(*p)(char*) = Print;  //��Ӧ��������� *p��ָ�������char*�Ǻ���ָ��
//	(*p)("hello bit");   //����*p���ָ�� ���������ӡ
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	//ָ������
	//int* arr[5];
	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ  - ����ָ�������
	int (*pa)(int, int) = Add;  //Ҳ���Դ�Sub/Mul/Div

	int(*parr[4])(int, int) = { Add, Sub, Mul, Div }; //����ָ�������

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3)); //���Ϊ��5 -1 6 0
	}

	return 0;
}









