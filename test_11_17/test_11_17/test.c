#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//����Ԫ��֮��
//#define SIZE 10
//int sump(int * start, int * end);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
//	long answer;
//
//	answer = sump(marbles, marbles + SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//
//	return 0;
//}
//
////ʹ��ָ���㷨
//int sump(int * start, int * end)
//{
//	int total = 0;
//
//	while (start < end)
//	{
//		total += *start;
//		start;
//	}
//	return total;
//}

//int data[2] = { 100, 200 };
//int moredata[2] = { 300, 400 };
//int main(void)
//{
//	int * p1, *p2, *p3;
//	p1 = p2 = data;
//	p3 = moredata;
//	printf("  *p1 = %d,  *p2 = %d,    *p3 = %d\n",*p1, *p2, *p3);
//	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf("  *p1 = %d,  *p2 = %d,    *p3 = %d\n", *p1, *p2, *p3);
//
//	return 0;
//
//	//*p1 = 100, *p2 = 100, *p3 = 300
//	//* p1++ = 100, *++p2 = 200, (*p3)++ = 300
//	//* p1 = 200, *p2 = 200, *p3 = 301
//}

//int main(void)
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int * ptr1, *ptr2, *ptr3;
//
//	ptr1 = urn;   //��һ����ַ����ָ��
//	ptr2 = &urn[2];
//
//	printf("pointer value, dereferenced pointer, pointer address:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); //100
//
//	//ָ��ӷ�
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr = %p, *(ptr + 4) = %d\n", ptr1 + 4, *(ptr1 + 4)); //500
//	ptr1++;
//	printf("\nvalues after ptr1++:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); //200
//	ptr2--;
//	printf("\nvalues after --ptr2:\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2); //200
//	--ptr1;  //�ָ�Ϊ��ʼֵ
//	++ptr2;   //�ָ�Ϊ��ʼֵ
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	//һ��ָ���ȥ��һ��ָ��
//	printf("\nsubtracting one pointer from another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
//	//һ��ָ���ȥһ������
//	printf("\nsubtracting an int from a pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
//
//	return 0;
//}

//ʹ��const
//int sum(const int ar[], int n);
//
//int sum(const int ar[], int n)
//{
//	int i;
//	int total = 0;
//
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	return total;
//}

//��������ĺ���
//#define SIZE 5
//void show_array(const double ar[], int n);
//void mult_array(double ar[], int n, double mult);
//int main(void)
//{
//	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
//	printf("The original dip array:\n");
//	show_array(dip, SIZE);
//	mult_array(dip, SIZE, 2.5);
//	printf("The dip array after calling mult_array():\n");
//	show_rray(dip, SIZE);
//
//	return 0;
//}
//
////��ʾ���������
//void show_array(const double ar[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//		printf("%8.3f ", ar[i]);
//	putchar('\n');
//}
//
////�������ÿ��Ԫ�ض�������ͬ��ֵ
//void mult_array(double ar[], int n, double mult)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//		ar[i] *= mult;  //��2.5
//}

//int main(void)
//{
//	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
//
//	printf("   zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
//	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
//	printf("  *zippo = %p,  *zippo + 1 = %p\n", *zippo, *zippo + 1);
//	printf("zippo[0][0] = %d\n", zippo[0][0]);
//	printf("  *zippo[0] = %d\n", *zippo[0]);
//	printf("   **zippo = %d\n", **zippo);
//	printf("     zippo[2][1] = %d\n", zippo[2][1]);
//	printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	test1();
//}

//int cmp_float(const void*e1, const void*e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));  //(int)ǿ������ת��
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//	test2();
//}

//#include <stdlib.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wuliu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С- ��λʱ�ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ() �������ʹ�����Լ�ʵ��
//	//           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//
//}
//
//int main()
//{
//	test3();
//}

#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) >0)
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width);
			}
		}
	}
}


void test4()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wuliu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
}

int main()
{
	test4();
}







