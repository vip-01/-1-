#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>


//int gcd(int n1, int n2)
//{
//	if (n2 == 0)
//		return n1;
//	return gcd(n2, n1%n2);
//}
//int lcm3(int a, int b, int c)
//{
//	int temp = a*b / gcd(a, b);
//	return temp*c / gcd(temp, c);
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", lcm3(a, b, c));
//	return 0;
//}

//int gcd(int n1, int n2)
//{
//	if (n2 == 0)
//		return n1;
//	return gc(n2, n1%n2);
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;;i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//const int N = 1e6 + 10, mod = 1e9 + 7;
//typedef long long ll;
//ll f[N], res;
//int n;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++) f[i] = i;
//	for (int i = n - 1, k = 1; i >= 1; i--, k++){
//		res = (res + (ll)pow(i, 2) * f[k]) % mod;
//	}
//	printf("%lld", res);
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 0; i <= n;i++)
//	for (j = 0; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '.';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c" a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m - m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '+', a[j][i] = '+';
//		for (i = 1 + m * 2 + 1; i <= n - (2*m+1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char[130][130];
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[101], n, i, count = 0,flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){
//				a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{ flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;//�������飬��������С���ѵ�������count����Ϊ��ʦ��Ҫ��������������ʼΪ0��flagΪ�ж��Ƿ�����С������������ȵı�־�� 
//	scanf("%d", &n);//����N��С���ѵĸ����� 
//	a[0] = 0;//��a[0]����Ϊһ�������ڻ������Ķ�����������ʱ�Ĵ�����ݡ� 
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);//Ϊ�����������a[i]ֱ�ӾͿ��ɵ�i��С���� �� 
//	while (!flag)//flag��ʼΪ0��������ÿ����������ȣ���Ҫ�������²����������·��䡣����ʹ����������ͬʱ ���µĲ���Ҳ��Ӱ��Ŀǰ��ÿ���˵���������Ϊ��ÿ�˶���ȵ�����£����۽��ж��ٴη��䶼����ı����ݡ��� 
//	{
//		a[0] = a[1] / 2;//��������ŵ�һ��С���ѵ� 
//		for (i = 1; i<n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;//��ѭ����䣬���ν�ǰn-1��С���ѵ��ǹ���һ���ǰһ���� 
//		a[n] = a[n] / 2 + a[0];//���ڴ������һ��Ȧ�����Ե�n��С���Ѱ��Լ���һ��ȥ��֮��ͬʱ�ֵõ���һ��С����������һ�루������������Ŀ�� 
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){
//				a[i] = a[i] + 1; count++;
//			}
//		}                   //��һ��ѭ��һ�μ���Ƿ�����������ͬʱͳ����ʦ�����ǵ������� 
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{
//				flag = 0; break;
//			}
//		}                   //�ж��Ƿ�ÿ���������Ƿ���ȣ������������ȣ�flag=1����ʱwhile(!flag������ѭ������Ϸ�����������������ȣ�������Ϸ�� 
//	}
//	printf("%d", count);
//	return 0;
//}


int main()
{
	int a[101], n, i, count = 0, flag = 0;
	scanf("%d", &n);
	a[0] = 0;
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	while (!flag)
	{
		a[0] = a[1] / 2;
		for (i = 1; i < n; i++)
			a[i] = a[i] / 2 + a[i + 1] / 2;
		a[n] = a[n] / 2 + a[0];
		for (i = 1; i <= n; i++)
		{
			if (a[i] % 2 != 0){ a[i]=a[i] + 1; count++;
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] == a[1])
				flag = 1;
			else { flag = 0; break;
			}
		}
	}
	printf("%d", count);
	return 0;
}