#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//	return 0;
//}

//#define NUMBER 5
//int tensu[NUMBER];
//
//int top(void);
//
//int main(void)
//{
//	extern int tensu[];
//	int i;
//
//	printf("������%d��ѧ���ķ�����\n", NUMBER);//����������ѧ���ķ���
//
//	for (i = 0; i < NUMBER; i++){
//		printf("%d:", i + 1);
//		scanf("%d", &tensu[i]);
//	}
//	printf("��߷�=%d\n", top());
//	return 0;
//}
//
//int top(void)
//{
//	extern int tensu[];
//	int i;
//	int max = tensu[0];
//	for (i = 1; i < NUMBER; i++)
//		if (tensu[i]>max)
//			max = tensu[i];
//	return (max);
//}

//#define NUMBER 5
//
//int max_of(int vc[], int no)
//{
//	int i;
//	int max = vc[0];
//	for (i = 1; i < no;i++)
//	if (vc[i]>max)
//		max = vc[i];
//	return (max);
//}
//
//int main(void)
//{
//	int i;
//	int eng[NUMBER];
//	int mat[NUMBER];
//	int max_e, max_m;
//
//	printf("������%d��ѧ���ķ�����\n", NUMBER);
//	for (i = 0; i < NUMBER; i++){
//		printf("[%d]Ӣ��:", i + 1);		scanf("%d", &eng[i]);
//		printf("	��ѧ:");				scanf("%d", &mat[i]);
//	}
//	max_e = max_of(eng, NUMBER);
//	max_m = max_of(mat, NUMBER);
//
//	printf("Ӣ�����߷�=%d\n", max_e);
//	printf("��ѧ����߷�=%d\n", max_m);
//
//	return 0;
//}