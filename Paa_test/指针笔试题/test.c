#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
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