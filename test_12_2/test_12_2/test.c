#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main(void)
//{
//	double vx, vy;
//
//	puts("��������������");
//	printf("ʵ��vx:"); scanf("%lf", &vx);
//	printf("ʵ��vy:"); scanf("%lf", &vy);
//
//	printf("vx + vy=%f\n", vx + vy);
//	printf("vx - vy=%f\n", vx - vy);
//	printf("vx * vy=%f\n", vx * vy);
//	printf("vx / vy=%f\n", vx / vy);
//
//	return 0;
//}

//int main(void)
//{
//	int n1, n2, n3, n4;
//	double d1, d2, d3, d4;
//
//	n1 = 5 / 2;
//	n2 = 5.0 / 2.0;
//	n3 = 5.0 / 2;
//	n4 = 5 / 2.0;
//
//	d1 = 5 / 2;
//	d2 = 5.0 / 2.0;
//	d3 = 5.0 / 2;
//	d4 = 5 / 2.0;
//
//	printf("n1 = %d\n", n1);
//	printf("n2 = %d\n", n2);
//	printf("n3 = %d\n", n3);
//	printf("n4 = %d\n\n", n4);
//
//	printf("d1 = %f\n", d1);
//	printf("d2 = %f\n", d2);
//	printf("d3 = %f\n", d3);
//	printf("d4 = %f\n", d4);
//
//	return 0;
//}

//int main(void)
//{
//	int na, nb;
//
//	puts("����������������");
//	printf("����A:"); scanf("%d", &na);
//	printf("����B:"); scanf("%d", &nb);
//
//	printf("���ǵ�ƽ��ֵ��%f��\n", (na + nb) / 2.0);
//
//	return 0;
//
//	//��ƽ��ֵ��ʱ���õ�%f,��ӡ���Ϊ����������
//  �м�Ҫ����ҪΪ������������������Ľ����ʾ��Ϊ������
//}

//int main(void)
//{
//	int na, nb;
//
//	puts("����������������");
//	printf("����A:"); scanf("%d", &na);
//	printf("����B:"); scanf("%d", &nb);
//
//	printf("���ǵ�ƽ��ֵ��%f��\n", (double)(na + nb) / 2);
//
//	return 0;
//
//	//��ƽ��ֵ��ʱ���õ�%f,��ӡ���Ϊ����������
//	//��д2.0�Ļ��������doubleת������
//}


//int main(void)
//{
//	int na, nb, nc;
//	int sum;
//	double ave;
//
//	puts("����������������");
//	printf("����A:"); scanf("%d", &na);
//	printf("����B:"); scanf("%d", &nb);
//	printf("����c:"); scanf("%d", &nc);
//
//	sum = na + nb + nc;
//	ave = (double)sum / 3;
//
//	printf("���ǵĺϼ�ֵ��%5d��\n", sum);
//	printf("���ǵ�ƽ��ֵ��%5.1f��\n", ave);
//
//	return 0;
//}
//

//int main(void)
//{
//	printf("[%d]\n",         123);
//	printf("[%.4d]\n",       123);
//	printf("[%4d]\n",        123);
//	printf("[%04d]\n\n",     123);
//	printf("[%-4d]\n\n",     123);
//
//	printf("[%d]\n",         12345);
//	printf("[%.3d]\n",       12345);
//	printf("[%3d]\n",        12345);
//	printf("[%03d]\n",       12345);
//	printf("[%-3d]\n\n",     12345);
//
//	printf("[%f]\n",         123.13);
//	printf("[%.1f]\n",       123.13);
//	printf("[%6.1f]\n\n",    123.13);
//
//	printf("[%f]\n",         123.13);
//	printf("[%.1f]\n",       123.13);
//	printf("[%4.1f]\n\n",    123.13);
//
//	return 0;
//}

int FindNum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;

	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 7;
	int ret = FindNum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}