#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	//һά����
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�-16
//	printf("%d\n", sizeof(a + 0));//4/8�����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));//4 - ��2��Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));///4/8 - &aȡ����������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	printf("%d\n", sizeof(&a + 1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//
//
//
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//sizeof������������С 6*1 = 6�ֽ�
//	printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ��С��4/8�ֽ�
//	printf("%d\n", sizeof(*arr));//1 arr����Ԫ�صĵ�ַ�� *arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//&arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//&arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//sizeof(arr)���������Ĵ�С����λ���ֽڣ�7
//	printf("%d\n", sizeof(arr + 0));//4/8 ������ǵ�ַ�Ĵ�С arr+ 0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1 *arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));//4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 �ڶ���Ԫ�صĵ�ַ
//
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr - ����ĵ�ַ- ����ָ�� char(*p)[7]= &arr;
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4/8 - p+1 �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p �����ַ����ĵ�һ���ַ� - 'a'
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4/8 ��ַ
//	printf("%d\n", sizeof(&p + 1));//4/8 ��ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 ��ַ
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	//��ά����
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�����������
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ��
//	//��һ��Ԫ�صĵ�ַ������a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ����ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 *(a[0] + 1)) �ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//
//	printf("%d\n", sizeof(a + 1));//4 a�Ƕ�ά�������������û��sizeof(a)��Ҳû��&(a),����a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1] ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4�� �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16�� ����ڶ��еĴ�С�� ��λ���ֽ�
//	printf("%d\n", sizeof(*a));//16 - a����Ԫ�ص�ַ - ��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}