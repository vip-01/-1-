#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define ROWS 3
//#define COLS 5
//void input_array(int rows, double arr[][COLS]);
//double col_average(int cols, const double arr[]);
//double array_average(int rows, const double arr[][COLS]);
//double array_max_number(int rows, const double arr[][COLS]);
//void show_result(int rows, const double arr[][COLS]);
////�����Ĳ�������ʹ�ô�ͳ������ʽʵ�֣���������뺯�������޸������Ԫ��ֵ����˲���
////ʹ��const�ؼ��ʣ���������Ӧ��ʹ��const����ֹʵ�α����޸�
//
//int main(void) {
//	double array[ROWS][COLS];
//	input_array(ROWS, array);
//	show_result(ROWS, array);
//	printf("\n");
//	return 0;
//}
//
//void input_array(int rows, double arr[][COLS]) {
//	printf("Enter teh array number.\n");
//	for (int i = 0; i < rows; i++) {
//		printf("Enter five double number seprate by enter:\n");
//		for (int j = 0; j < COLS; j++)
//			scanf("%lf", &arr[i][j]);
//	}
//}
//double col_average(int cols, const double arr[]) {
//	double sum = 0;
//	for (int i = 0; i < cols; i++)
//		sum += arr[i];
//	return sum / cols;
//}
//
//double array_average(int rows, const double arr[][COLS]) {
//	double sum = 0;
//	for (int i = 0; i < rows; i++)
//		sum += col_average(COLS, arr[i]);
//	return sum / rows;
//}
//
//double_array_max_number(int rows, const double arr[][COLS]){
//	double max = arr[0][0];
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < COLS; j++)
//			if (max < arr[i][j]) max = arr[i][j];
//	return max;
//}
//
//void show_result(int rows, const double arr[][COLS]){
//	printf("Now, Let\'s check teh array!\n");
//	printf("The array you input is:\n");
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < COLS; j++)
//			printf("%5g", arr[i][j]);
//		printf("\n");
//	}
//	printf("The Average fo every colum is:\n");
//	for (int i = 0; i < rows; i++)
//		printf("The %d column's average is %g .\n", i, col_average(COLS, arr[i]));
//	printf("The array's data average is %g \n", array_average(ROWS, arr));
//	printf("The max datum in the array is %g", array_max_number(ROWS, arr));
//}
 
//v/*oid input_array(int rows, int cols, double arr[rows][cols];
//double col_average(int cols, const double arr[cols]);
//double array_average(int rows, int cols, const double arr[rows][cols]);
//double array_max_number(int rows, int cols, const double arr[rows][cols]);
//void show_result(int rows, int cols, const double arr[rows][cols]);
//
//int main(void) {
//	int rows = 3;
//	int cols = 5;
//	double array[rows][cols];
//	input_array(rows, cols, array);
//	show_result(rows, cols, array);
//	return 0;
//}
//
//void input_array(int rows, int cols, double arr[rows][cols]) {
//	printf("Enter the arra number.\n");
//	for (int i = 0; i < rows; i++) {
//		printf("Enter five double number seperate by enter:\n");
//		for (int j = 0; j < cols; j++)
//			scanf("%lf", &arr[i][j]);
//	}
//}
//
//double col_average(int cols, const double arr[cols]){
//	double sum = 0;
//	for (int i = 0; i < cols; i++)
//		sum += arr[i];
//	return sum / cols;
//}
//
//
//double array_average(int rows, int cols, const double arr[rows][cols]){
//	double sum = 0;
//	for (int i = 0; i < rows; i++)
//		sum += col_average(cols, arr[i]);
//	return sum / rows;
//}
//
//double array_max_number(int rwos, int cols, const double arr[rows][cols]){
//	double max = arr[0][0];
//	for (int i = 0; i < rows; i++)
//	for (int j = 0; j < cols; j++)
//	if (max < arr[i][j] )max = arr[i][j];
//	return max;
//}
//
//void show_result(int rows, int cols, const double arr[rows][cols]) {
//	printf("Now, Let\'s check the array!\n");
//	printf("The array you input is:\n");
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < cols; j++)
//			printf("%5g", arr[i][j]);
//		printf("\n");
//	}
//	printf("The Average of every column is:\n");
//	for (int i = 0; i < rows; i++)
//		printf("The %d column's average is %g .\n", i, col_average(cols, arr[i]));
//	printf("The array's data average is %g \n", array_average(rows, cols, arr));
//	printf("The max datum in the array is %g", array_max_number(rows, cols, arr));
//}*/
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

//ָ�������1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//	//2,5
//}

////ָ�������2
////�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	//1048576+1 = 10485767��unsigned long��p����1048576������1���10485767
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004����1048576��1��һ���޷������ͱ��00100004 ��0x100000�滻
//	return 0;
//}

////ָ�������3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//	//�����4,2000000
//	//���ڴ���ptr[-1]��ǰ��1ȡ��Ϊ4��ptr2ǿ������ת��Ϊ���ͣ���1������Ԫ�ؼ�1���2��ʱ���ڴ�
//	//�е���ʾΪ00000002 ��ӡΪ����2000000
//}

//ָ�������4
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//������Ķ��ű��ʽ����ʵ����1��3��5
//	int *p;
//	p = a[0];//����ȡ��Ԫ�ص�ַ 1
//	printf("%d", p[0]);
//	return 0;
//}

//ָ�������5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//	//FFFFFFFC,-4
//}

//ָ�������6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));  //��1Ϊ�ڶ�����Ԫ�ص�ַ6��-1���5�����Ϊ5
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//	//10,5
//}

//ָ�������7
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//	//at
//}

//ָ�������8
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
	//POINT ER ST EW
}
