#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//double power(double n, int p) //����һ��double���͵�ֵ
//{
//	double pow = 1;
//	int i;
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}

//��������������
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);  //1.2 2 8.9161
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}


//int main(void)
//{
//	int i = 0;
//	while (++i<4)
//		printf("Hi! ");  //3��
//	do
//	    printf("Bye! ");   //5��
//	while(i++ < 8);
//	return 0;
//}

//int main(void)
//{
//	int i;
//	char ch;
//	for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * 1)
//		printf("%c", ch);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//	}
//	return 0;
//}

//int main()
//{
//	int n, m;
//	n = 30;
//	while (++n <= 33)
//		printf("%d|", n);
//	n = 30;
//	do
//	printf("%d|", n);
//	while (++n <= 33);
//	printf("\n***\n");
//	for (n = 1; n*n < 200; n += 4)
//		printf("%d\n", n);
//	printf("\n***\n");
//
//	for (n = 2, m = 6; n < m; n *= 2, m += 2)
//		printf("%d %d\n", n, m);
//	printf("\n***\n");
//	for (n = 5; n > 0; n--)
//	{
//		for (m = 0; m <= n; m++)
//			printf("=");
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	//�������iΪ������±꣬c���ַ�a��ʼ����
//	//���26����ĸ
//	for (i = 0; i < 26; c++)
//		alphabet[i] = c;
//	//forѭ����ѭ�����²��֣��������±����ĸ��
//	for (i = 0; i < 26; i++)
//		printf("%c ", alphabet[i]);
//	return 0;
//}


//int main()
//{
//	printf("$\n");
//	printf("$$\n");
//	printf("$$$\n");
//	printf("$$$$\n");
//	printf("$$$$$\n");
//
//	return 0;
//}


//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 0; j < i; j++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	int i, j;
//	char c;
//	//ѭ�����Ʊ����Ķ���
//	for (i = 1; i <= 6; i++) {
//		for (j = 0, c = 'F'; j < i; j++, c--)
//			//�ڲ�ѭ���������ڴ�ӡ���ַ�������j<i��ʾ��N�д�ӡN���ַ�
//			//char����c��"F"��ʼ��ÿ�δ�ӡʱ������c--
//			//ʵ���ַ��ĵݼ�Ч�����ڵ�6�У��������'A'
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}
//
//int  main(void)
//{
//	int i, j;
//	char c = 'A';
//	for (i = 1; i <= 6; i++) {
//		for (j = 0; j < i; j++, c++)
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	//�����ַ���ASCLL�������'A'��1�õ���ʮ���ƽ��num
//	//num������Ҫ��ӡ�Ĵ�A��ʼ���ַ�����Ҳ�Ǵ�ӡ��������
//	for (i = 1; i <= num; i++) {
//		//���ѭ�����ƴ�ӡ������numΪ�����ַ���A�Ĳ��1
//		for (j = 0; i < num - i; j++)
//			printf(" ");
//		//��ӡ�ո񣬿ո���Ϊ���ַ�����ȥ��ǰ��Ӧ��ӡ���ַ���
//		//��������Ӧ��ӡ�ո��� + Ӧ��ӡ�ַ��� = ���ַ�������������
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		//�ڴ�ӡ�����ַ���ʱ����Ҫͨ��ch��������������ʼֵj�ڿո��Ѿ�ͨ��ѭ��
//		//���˳�ʼ�������ֻ��ӡʣ���ַ���
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		//�ڴ�ӡ�����ַ�ʱ���ַ����ݼ�����
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int start, end;
//	printf("Please enter the start number:");
//	scanf("%d", &start);
//	printf("Please enter the end number:");
//	scanf("%d", &end);
//	//��ȡ�û��������ʼ���ݺ���ֹ����
//	printf("    Ori:      Square:    Cubic:\n");
//	for (int i = start; i <= end; i++) {
//		printf("%6d,%10d,%10d", i,i*i,i*i*i);
//		printf("\n");
//		//��ӡ3�����ݣ�ѭ��������ж�Ϊi <= end,��֤
//		//���һ��ֵ���û�����Ľ���ֵ
//
//		//�����������ݣ��������������ֵ���ܻ�����������Ҫע��
//	}
//	return 0;
//}

//#include <string>
//
//int main(void)
//{
//	char word[30];
//	printf("Please enter the words: ");
//	scanf("%s", word);
//	//scanf����������ȡ�û������룬������word�ַ�������
//	printf("The word you enter is : %s\n", word);
//	printf("The reverse word you enter is : ");
//	printf("%d", strlen(word));
//	for (int i = strlen(word) - 1; i >= 0; i--) {
//		printf("%c", word[i]);
//	}
//	//�����ӡ���±�ֵͨ��strlen����������ã�strlen�������صĳ���ֵ
//	//������'\0',���������±����0~�����鳤��-1��
//	printf("\n");
//	return 0;
//}

//int main(void)
//{
//	float x, y;
//	printf("Please enter the two float data(separated by blank): ");
//	while (scanf("%f %f", &x, &y) == 2) {
//		//scanf()�����ķ���ֵ�ǳɹ���ȡ���������ݵĸ�����
//		//���ֻ�гɹ���ȡ�������������ݣ��䷵��ֵ��Ϊ2
//		printf("The answer is %f\n", (x - y) / (x*y));
//		//���򲻴���x����yΪ0�����������б�Ҫ������������������ж����
//		printf("Plaese enter the two float data(separated by blank): ");
//	}
//	printf("Program end!");
//	return 0;
//}

//int main(void)
//{
//	int lower, upper;
//	printf("Enter lower and upper integer ;limits: ");  //�û�����һ�� 2 �� 4
//	scanf("%d %d", &lower, &upper);   //ȥ��ַ
//	//ʹ��scanf()������ȡ��������ֵ
//	while (upper > lower) {
//		//�ж��û��������������ֵ
//		int sum = 0;
//		for (int i = lower; i <= upper; i++) {   //lowerΪ2 upperΪ4
//			sum = sum + i*i;
//			//ͨ��forѭ������ƽ����
//		}
//		printf("The sum of the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: "); //��������
//		scanf("%d %d", &lower, &upper);
//		//�û��ٴ�������������ֵ
//	}
//	printf("Done!");
//	return 0;
//
//	//���Ϊ4+9+16=29
//}

//int main(void)
//{
//	int data[8];
//	printf("Enter teh 8 integer data (seperate by blank): ");
//	for (int i = 0; i < 8; i++) {
//		scanf("%d", &data[i]);  //1~8
//	}
//	//ͨ���û������룬��ȡ�˸���������
//
//	printf("Ok, the reverse data is :");
//	for (int i = 7; i >= 0; i--) {
//		printf(" %d", data[i]);   //8����1
//	}
//	//�����ӡ����Ҫע���±�Խ������
//	printf("\nDone!\n");
//	return 0;
//}

//int main(void) {
//	int length;
//	double sum = 0.0;
//	printf("Enter the limit length: ");
//	scanf("%d", &length);
//	while (length > 0) {
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			sum = sum + 1.0 / i;
//		}
//		//����1 + 1��2 + 1��3...
//		printf("The sum for 1.0 +...+1.0/%d.0 is %lf\n", length, sum);
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			if (i % 2 == 0) sum = sum - 1.0 / i;
//			else sum = sum + 1.0 / i;
//		}
//		//����1 - 1/2 + 1/3 - 1/4+...
//		printf("The sum for 1.0-...+1.0/%d.0 is %lf\n", length, sum);
//
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			if (i % 2 != 0) sum = sum + 2 * 1.0 / i;
//		}//�������еĺ�ֻ���������ż���������
//		printf("The sum for 1.0 + 1.0+2.0/3.0+...+2.0/%d.0 is %lf\n", length, sum)
//			;
//		printf("Enter the limit length: ");
//		scanf("%d", &length);
//	}
//	printf("\nnDone!\n");
//	return 0;
//}

//int main(void)
//{
//	int lower, upper;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &lower, &upper);
//	//ʹ��scanf()������ȡ��������ֵ
//	while (upper > lower) {
//		//�ж��û��������������ֵ
//		int sum = 0;
//		for (int i = lower; i <= upper; i++) {
//			sum = sum + i*i;
//			//ͨ��forѭ������ƽ����
//		}
//		printf("The sum fo the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: ");
//		scanf("%d %d", &lower, &upper);
//		//�û��ٴ�������������ֵ
//	}
//	printf("Done!");
//	return 0;
//}

//int main(void) {
//	int data[8];
//	data[0] = 2;
//	//��ʼ����һ��Ԫ��Ϊ2��1����
//	for (int i = 1; i < 8; i++) {
//		data[
//			i] = data[i - 1] * 2;
//	}
//	//2��n���ݵ���2����2��n-1����
//	int i = 0;
//	do{
//		printf("%d  ", data[i++]);
//	} while (i < 8);
//	
//	printf("\nDone!\n");
//	return 0;
//
//	//���Ϊ2  4  8  16  32  64  128  256
//}

//int main(void) {
//	double first[8], second[8];
//	printf("Enter 8 data to the FIRST array: ");
//	for (int i = 0; i < 8; i++) {
//		double sum = 0;
//		for (int j = 0; j <= i; j++) {
//			sum = sum + first[j];
//		}
//		second[i] = sum;
//	}
//	//ʹ��Ƕ��ѭ���������һ�������ǰN���
//	//Ҳ����ʹ�õ�ѭ����
//	printf("All the data of two array:\n");
//	printf("First Array: ");
//	for (int i = 0; i < 8; i++) {
//		printf("%12lf. ", first[i]);
//	}
//	printf("\nSecond Array: ");
//	for (int i = 0; i < 8; i++) {
//		printf("%12lf. ", second[i]);
//	}
//
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	char data[256];
//	printf("Enter the char in a line : ");
//	int i = 0;
//	do{
//		scanf("%c", &data[i]);
//	} while (data[i] != '\n' && ++i);
//	//ѭ����ȡ�û�������ַ������������ַ������У�ֱ���û�����س���
//	//ѭ��δ��������ַ����������ض�����¿��ܻ�������
//	printf("The reverse char of the data: ");
//	for (i--; i >= 0; i--) {
//		//ԭ�±�iΪ���һ���ַ����±꣬��ʼ��ʱi-��Ŀ��ʱɾ������Ǹ����з�
//		printf("%c", data[i]);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	float daphne, deirdre;
//	daphne = deirdre = 100.0;
//	int year = 0;   //�趨��ʼֵΪ0
//	do{
//		daphne = daphne + 100 * 0.1;  //110
//		deirdre = deirdre + deirdre*0.05;  //105
//		year++;      
//		//��������ÿ�����Ϣ��Ͷ�ʶ�
//	} while ((deirdre - daphne) < 0);
//	//��daphne����deirdreʱ���˳�ѭ��
//	printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n", year, daphne, deirdre);
//	printf("\nDone!\n");
//	return 0;
//
//	//���27 years later.
//	//Daphne = 370.000000.
//	//Deirdre = 373.345520
//}

//#include <string.h>
//int main(void) {
//	float chuckie = 100;
//	int year = 0;
//	do{
//		chuckie = chuckie + chuckie*0.08;
//		chuckie -= 10;
//		year++;
//		printf("%f\n", chuckie);
//	} while (chuckie > 9);
//	//���˻����С��9����Ԫ������һ�꽫�ᱻȫ��֧ȡ
//	printf("%f years later. Chuckie's account %f \n", year, chuckie);
//	printf("%f years later. Chuckie's account is null \n", ++year);
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	int rabnud = 5;
//	int weeks = 1;
//	while (rabnud < 150) {
//		printf("At %d weeks, Rabnub has %4d friends \n", weeks, rabnud);
//		rabnud = 2 * (rabnud - weeks++);
//		//����ÿ��Rabnud��ʿ��������
//	};
//	printf("\nDone!\n");
//	return 0;
	//���
	//At 1 weeks, Rabnub has    5 friends
	//At 2 weeks, Rabnub has    8 friends
	//At 3 weeks, Rabnub has   12 friends
	//At 4 weeks, Rabnub has   18 friends
	//At 5 weeks, Rabnub has   28 friends
	//At 6 weeks, Rabnub has   46 friends
	//At 7 weeks, Rabnub has   80 friends
	//At 8 weeks, Rabnub has  146 friends
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, };
//	int arr2[] = { 2, 3, 4, 5, 6, };
//	int arr3[] = { 3, 4, 5, 6, 7, };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//		1 2 3 4 5
//		2 3 4 5 6
//		3 4 5 6 7
//	}
//}


//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int(*p)[10] = &arr;  //����ĵ�ַҪ������
////�����p��������ָ��

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	return 0;
//}\

//����ָ����÷�
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;  
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);  //����*pa��ʾ��������ĵ�ַ Ȼ��ȡi�ֱ���ҳ��������������ַ
//	}
//	return 0;  //*(*pa + i)   *pa == arr
//}

//void print1(int arr[3][5], int x, int y)  //3��5��
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);     //�ĸ���ʾд��
//		printf("%d ", *(p + i)); //�ĸ���ʾд��
//		printf("%d ", *(arr + i)); //�ĸ���ʾд��
//		printf("%d ", arr[i]);  //�ĸ���ʾд��
//	}
//}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));  //->
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print2(arr, 3, 5);

	return 0;
}



















































































































































