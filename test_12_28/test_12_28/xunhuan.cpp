#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <iostream>
using namespace std;

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	int i = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j  << " * " << i << " = " << j*i << "  ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	cout << "��ѡ�񸱱��Ѷ�" << endl;
//	cout << "1����ͨ" << endl;
//	cout << "2���е�" << endl;
//	cout << "3������" << endl;
//
//	int select = 0;
//
//	cin >> select; //�ȴ��û�����
//
//	switch (select)
//	{
//	case 1:
//		cout << "��ѡ�������ͨ�Ѷ�" << endl;
//		break;
//	case 2:
//		cout << "��ѡ������е��Ѷ�" << endl;
//		break;
//	case 3:
//		cout << "��ѡ�������ͨ�Ѷ�" << endl;
//		break;
//	default:
//		break;
//	}
//}

//����������������ż�������
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue; //����ɸѡ������ִ�е���Ͳ�������ִ�У�ִ����һ�ε�ѭ��
//		}
//		cout << i << endl;
//	}
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	cout << "��������ռ���ڴ�ռ�Ϊ: " << sizeof(arr) << endl;
//	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ: " << sizeof(arr[0]) << endl;
//	cout << "�����Ԫ�ظ�����: " << sizeof(arr) / sizeof(arr[0]) << endl;
//}