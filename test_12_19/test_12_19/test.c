#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	//�ڶ�����������
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("No\n");
//				return 0;
//			}
//		}
//	}
//	printf("Yes\n");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (i>j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int k = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);
//	char t = 0;
//	int a = 0;
//	int b = 0;
//
//	for (i = 0; i<k; i++)
//	{
//		scanf(" %c %d %d", &t, &a, &b);
//		if (t == 'r')
//		{
//			for (j = 0; j<m; j++)
//			{
//				int tmp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = tmp;
//			}
//		}
//		else if (t == 'c')
//		{
//			for (j = 0; j<n; j++)
//			{
//				int tmp = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[30][30] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//
//if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//
//if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')

//#include <stdio.h>
//
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<3; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	char flag = 'O';
//	for (i = 0; i<3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//		{
//			flag = arr[i][1];
//			break;
//		}
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//		{
//			flag = arr[1][i];
//			break;
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//	{
//		flag = arr[1][1];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
//	{
//		flag = arr[1][1];
//	}
//
//	if (flag == 'K')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (flag == 'B')
//	{
//		printf("BoBo wins!\n");
//	}
//	else
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//��̬�ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno)); //strerror��������errno����ʾ��������
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//��ǰ��̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);  //�����˾Ͱ�p���׶Ͽ���p����֮�����ڵ�ֵû�䣬�������ҵ�
//	p = NULL; //���ⷢ������ֱ�Ӹ�Ϊ��ָ��NULL��
//	return 0;
//}
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//free�����������ͷŶ�̬�ڴ濪�ٵĿռ�
//	free(p);
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	// 3. ����һ���µı���������realloc�����ķ���ֵ
//
//	int* ptr = realloc(p, INT_MAX);
//	
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	return 0;
//}

//void int_set(int vc[], int no)
//{
//	int i;
//
//	for (i = 0; i < no; i++)
//		vc[i] = 0;
//}
//
//int main(void)
//{
//	int i;
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 3, 2, 1 };
//
//	int_set(arr1, 5);
//	int_set(arr2, 3);
//
//	for (i = 0; i < 5; i++)		printf("arr1[%d] = %d\n", i, arr1[i]);
//	for (i = 0; i < 3; i++)		printf("arr2[%d] = %d\n", i, arr2[i]);
//
//	return 0;
//}

//int max_of(const int vc[], int no)
//{
//	int i;
//	int max = vc[0];
//	for (i = 0; i < no; i++)
//		if (vc[i] > max)
//			max = vc[i];
//		return (max);
//}


//#define NUMBER 5
//#define FAILED -1
//
//int search(const int vc[], int key, int no)
//{
//	int i = 0;
//
//	while (1){
//		if (i == no)
//			return (FAILED);
//		if (vc[i] == key)
//			return (i);
//		i++;
//	}
//}
//
//int main(void)
//{
//	int i, ky, idx;
//	int vx[NUMBER];
//
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//	printf("Ҫ���ҵ�ֵ:");
//	scanf("%d", &ky);
//
//	idx = search(vx, ky, NUMBER);
//
//	if (idx == FAILED)
//		puts("\a����ʧ�ܡ�");
//	else
//		printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx + 1);
//
//	return (0);
//}

//int search(int vc[], int key, int no)
//{
//	int i;
//
//	vc[no] = key;
//
//	for (i = 0; vc[i] != key; i++)
//		;
//	return (i == no ? FAILED : i);
//}

//void mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3])
//{
//	int i, j;
//
//	for (i = 0; i < 2;i++)
//		for (j = 0; j < 3; j++)
//			mc[i][j] = ma[i][j] + mb[i][j];
//}
//
//int main(void)
//{
//	int i, j;
//	int ma[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int mb[2][3] = { { 6, 3, 4 }, { 5, 1, 2 } };
//	int mc[2][3] = { 0 };
//
//	mat_add(ma, mb, mc);
//
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 3; j++)
//			printf("%3d", mc[i][j]);
//		putchar('\n');
//	}
//	return 0;
//}

//int x = 700;
//
//void print_x(void)
//{
//	printf("x = %d\n", x);
//}
//
//int main(void)
//{
//	int i;
//	int x = 800;
//
//	print_x();
//
//	printf("x = %d\n", x);
//
//	for (i = 0; i < 5; i++){
//		int x = i * 100;
//		printf("x = %d\n", x);
//	}
//
//	printf("x = %d\n", x);
//
//		return 0;
//}

//#define SUM(x,y) x+y
//
//int main()
//{
//	int a = 3;
//	int b = 3;
//	a += a*SUM(a, b)*b;
//	return 0;
//}

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world"); //�������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//1.���д���������ֱ���������
//2.��������ڴ�й¶������
//str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ��
//�����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//�����޷��ҵ������Ի�����ڴ�й¶