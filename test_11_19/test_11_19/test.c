#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void copy_arr(double t[], double s[], int n);
//void copy_arr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
//
//int main(void)
//{
//	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//	copy_ptrs(target3, source, source + 5);
//	return 0;
//}
//
//void copy_arr(double t[], double s[], int n) {
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//}
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	//ʹ��ָ����Ϊ�����Ĳ�������Ҫ����ָ��ķ��ʷ�Χ������Խ��
//}
//
//void copy_ptrs(double *t, double *s_first, double *s_last) {
//	for (int i = 0; (s_last - s_first) > i;i++)
//}

//int get_max(int number[], int n);
//
//int main(void) {
//	int source[100] = { 1, 2, 3, 4, 5 };
//	printf("The largest number in array is %d ", get_max(source, 100));
//	return 0;
//}
//
//int get_max(int number[], int n) {
//	int max = number[0];
//	for (int i = 0; i < n; i++)
//	if (max < number[i])max = number[i];
//
//	return max;
//}

//int get_max_index(double number[], int n);
////ʹ�ô�ͳ��ʽ���ݲ�����n��ʾ��ֵnumber�ĳ���
//
//int main(void) {
//	double source[100] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	printf("The largest number's index in array is %d ", get_max_index(source, 100));
//	return 0;
//}
//int get_max_index(double number[], int n) {
//	double max = number[0];
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		if (max < number[i]) {
//			max = number[i];
//			index = i;
//		}
//	}
//	//�����ڱ������Ƚ�����Ԫ��ʱ��ͬʱ��Ҫ����Ԫ����ֵ���±꣬Ԫ��ֵ������һ����ս
//	//�±�ֵ��Ҫ���沢���ں���ĩβ����
//
//	return index;
//}

//double get_range(double number[], int n);
////�����鼰�䳤����Ϊ�����Ĳ���
//
//int main(void)
//{
//	double source[12] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	printf("The max diff in array is %g ", get_range(source, 12));
//	return 0;
//}
//
//double get_range(double number[], int n) {
//	double max = number[0];
//	double min = number[0];
//	for (int i = 0; i < n; i++){
//		if (max < number[i])max = number[i];
//		if (min > number[i])min = number[i];
//	}
//	//��ʼ������max��minΪ��ʱ����ֵ����ʱ��Сֵ��ѭ����ɺ󼴿ɵ����ֵ����Сֵ
//
//	return max - min;
//}


//void r_sort(double number[], int n);
////��ͳ��ʽ�����������
//
//int main(void) {
//	double source[12] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	for (int i = 0; i < 12; i++) printf("%g ", source[i]);
//	printf("\n");
//	r_sort(source, 12);
//	for (int i = 0; i < 12; i++)printf("%g ", source[i]);
//	return 0;
//}
//
//void r_sort(double number[], int n){
//	//�����㷨ʹ�ó��õıȽ������㷨�������ж�����Ԫ�صĴ�С��ϵ
//	//������Ҫ���������Ԫ�ؽ���λ�ã��ڲ�ѭ��1���ܱ�֤1��Ԫ��
//	//���������ʵ�λ�ã���n-1�����ѭ���б�֤����Ԫ�ض�������ȷ��λ��
//
//	double temp;
//	for (int i = 0; i < n - 1; i++){
//		for (int j = 0; j < n - 1 - i; j++){
//			//ѭ���ж�����Ϊj < n - 1Ҳ���ԣ�ֻ�ǻ��ִ��һЩ��Ч��ѭ���ж�
//			//����ԭ����ÿ��ѭ�����Ա�֤1��Ԫ�ص�����ȷλ�ã���λ�ú�������
//			//���̿��Ժ��ԣ������Ч��
//			if (number[j] < number[j + 1]) {
//				temp = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = temp;
//			}
//			//����������Ҫ��Ŀ�Ĳ����������㷨�����ڴ˴���ӡ
//			//ÿ��ѭ��������������������⽻������Ļ���˼��
//		}
//	}
//}

//#define ROWS 12
//#define COLS 5
//void copy_arr(double t[], double s[], int n);
//void copy_ptr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
//
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n);
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n);
////��ά����ĸ��ƺ�����������ֻʹ����ָ���������Ϊ�βΣ���βָ����Ϊ����
////����ʽ����
//
//int main(void) {
//	double target[COLS][ROWS], source[COLS][ROWS] = {
//		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.1, 7.3 },
//		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
//	};
//	copy_2d_ptr(target, source, COLS);
//	for (int i = 0; i < COLS; i++) {
//		for (int j = 0; j < ROWS; j++)
//			printf("%5.2f", target[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//
//void copy_arr(double t[], double s[], int n) {
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//}
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//}
//
//void copy_ptrs(double *t, double *s_first, double *s_last) {
//	for (int i = 0; (s_last - s_first) > i; i++)
//		//for(int i = 0; (s_last - s_first) > 0; i++, s_first++)
//		*(t + i) = *(s_first + i);
//}
//void copy_2d_array(double t[][ROWS],double s[][ROWS], int n ){
//	//����n��ʾ����
//	for (int i = 0; i < n; i++)
//	copy_arr(t[i], s[i], ROWS);
//
//}
//
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n) {
//	for (int i = 0; i < n; i++)
//		copy_ptr(*(t + i), *(s + i), ROWS);
//}

//���
//4.30 4.30 4.30 3.00 2.00 1.20 0.20 0.20 0.40 2.40 3.50 6.60
//8.50 8.20 1.20 1.60 2.40 0.00 5.20 0.90 0.30 0.90 1.10 7.30
//9.10 8.50 6.70 4.30 2.10 0.80 0.20 0.20 1.10 2.30 6.10 8.40
//7.20 9.90 8.40 3.30 1.20 0.80 0.40 0.00 0.60 1.70 4.30 6.20
//7.60 5.60 3.80 2.80 3.80 0.20 0.00 0.00 0.00 1.30 2.60 5.20
//˫����

//#include <stdlib.h>
//
//void copy_ptr(double *t, double *s, int n);
////ֻ������ָ����Ϊ�βεĺ���
//
//int main(void)
//{
//	double src[] = { 1, 2, 3, 4, 5, 6, 7};
//	double targ[3];
//	copy_ptr(targ, src + 2, 3);
//	//������ʵ��ΪĿ�����ַ��Դ�����е�3��Ԫ�صĵ�ַ�Լ����Ƶ�Ԫ�ظ���
//	printf("Now Show the src array:\n");
//	for (int i = 0; i < 5; i++)
//		printf("%.0lf ", src[i]);
//
//	printf("\nNow Show the dest array:\n");
//	for (int i = 0; i < 3; ++i)
//		printf("%.0lf ", targ[i]);
//	return 0;
//}
//
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	//ʹ�ú���ָ����Ϊ�����Ĳ�������Ҫ����ָ��ķ��ʷ�Χ������Խ�磬��ʹ��
//}

//void copy_array(int n, int m, double target[n][m], const double source[n][m]);
//void show_array(int n, int m, const double array[n][m]);
////
//////�Ա䳤������Ϊ�����Ĳ�������Ҫ�Զ�ά�����������±���Ϊ�βΣ����β�������
//////Ҳ��Ҫʹ����ͬ���β�����Ϊ�±�����ʶ������ĳ���
//
//int main(void) {
//	int n = 3;
//	int m = 5;
//	double target[n][m], source[][5] = {
//		{ 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4 },
//		{ 9.1, 8.5, 2.3, 6.1, 8.4 },
//	};
//	copy_array(n, m, target, source);
//	show_array(n, m, target);
//	return 0;
//}
//
//void copy_array(int n, int m, double target[n][m], const double source[n][m]){
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			target[i][j] = source[i][j];
//}
//
//void show_array(int n, int m, const double array[n][m]) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//			printf("%g ", array[i][j]);
//		printf("\n");
//	}
//}

//#define INDEX 4
//
//void add_array(int n, int t[n], const int s1[n], const int s2[n]);
////����ӷ�������3���βηֱ��ʾ���鳤�ȣ���ͽ����������������
////����ʹ�ñ䳤������ʽ�ֱ��ʾ3��������βΣ�s1��s2��������Ϊconst������
////��֤�ں����ڲ����޸�����Դ�����ֵ
//
//int main(void) {
//	int sum[INDEX], s1[INDEX] = { 2, 4, 5, 8 }, s2[INDEX] = { 1, 0, 4, 6 };
//	add_array(INDEX, sum, s1, s2);
//	for (int i = 0; i < INDEX; i++)
//		printf("%d ", sum[i]);
//	return 0;
//}
//
//void add_array(int n, int t[n], const int s1[n], const int s2[n]) {
//	for (int i = 0; i < n; i++)
//		t[i] = s1[i] + s2[i];
//}

//11/

//#define COLS 5
//#define ROWS 3
//
//void show_element(int rows, int cols, const int t[rows][cols]);
//void double_element(int rows, int cols, int t[rows][cols]);
//
//int main(void) {
//	int arr[ROWS][COLS] = { { 1, 0, 4, 6, 9 }, { 2, 5, 6, 8, 3 }, { 5, 3, 21, 1, 6 } };
//	show_element(ROWS, COLS, arr);
//	double_element(ROWS, COLS, arr);
//	printf("\n");
//	show_element(ROWS, COLS, arr);
//	return 0;
//}
//
//void show_element(int rows, int cols, const int t[rows][cols]) {
//	for (int i = 0; i < rows;i++)
//	for (int j = 0; j < cols; j++)
//		printf("%4d ", t[i][j]);
//}
//
//
//void double_element(int rows, int cols, int t[rows][cols]) {
//	for (int i = 0; i < rows; i++)
//	for (int j = 0; j < cols; j++)
//		t[i][j] *= 2;
//}

#define MONTHS 12 //һ����·���
#define YEARS 5 //����

void year_average(int years, int months, const float t[years][months]);
void month_average(int years, int months, const float t[years][months]);
int main(void)
{
	const float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.1, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
	};
	year_average(YEARS, MONTHS, rain);
	months_average(YEARS, MONTHS, rain);

	printf("\n");
	return 0;
}
void year_average(int years, int months, const float t[years][months]){
	float subtot, total;
	int month, year;
	printf(" YEAR      RAINFALL    (inchs)\n");
	for (year = 0, total = 0;year  < years; year++) {
		for (month = 0, subtot = 0; month < months; month++)
			subtot += t[year][months];
		//prt+year��ʾ��ά��������ƶ���*(ptr + year)+ month��ʾ
		//��ά���������ڵ��ƶ���*(*ptr + year)+month)��ʾȡȷ��Ԫ�صĸ�����ֵ

		printf("%5d %15.lf\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.lf inches. \n\n", total / YEARS);
	printf("MONTHS AVERAGES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf("Nov  Dec\n");

	for (month = 0; month < MONTHS; month++) {
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(ptr + year) + month);
		printf("%4.lf ", subtot / YEARS);
	}
	printf("\n");
	return 0;
}

