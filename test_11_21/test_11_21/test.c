#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d total: %.lf%% were below freezing.\n",
//		all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//
//	return 0;
//}

//#define SPACE ' '
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}

//#include <ctype.h>
//������ӡԭ�ַ�����һ���ַ�
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch)) //�����һ���ַ�
//		{
//			ch = tolower(ch);//�Ȼ���һС������ʾ
//			putchar(ch + 1);//��ʾ���ַ�����һ���ַ�
//		}
//		else               //����
//			putchar(ch);//ԭ����ʾ
//	}
//	putchar(ch); //���Ϊ��ֱ��ִ�д�ӡ���һ��У�����ԭ�����ӡ����
//
//	return 0;
//}

//#define RATE1   0.13230       //�״�ʹ��360kwh�ķ���
//#define RATE2   0.15040       //������ʹ�� 108 kwh�ķ���
//#define RATE3   0.30025       //������ʹ�� 252 kwh�ķ���
//#define RATE4   0.34025       //ʹ�ó��� 720kwh �ķ���
//#define BREAK1  360.0         //���ʵĵ�1���ֽ��
//#define BREAK2  468.0         //���ʵĵ�2���ֽ��
//#define BREAK3  720.0         //���ʵĵ�3���ֽ��
//#define BASE1   (RATE1 * BREAK1)  //ʹ��360kwh�ķ���
//#define BASE2   (BASE1 + (RATE2 * (BREAK2 - BREAK1)))   //ʹ��468kwh�ķ���
//#define BASE3   (BASE2 + (RATE3 *(BREAK3 - BREAK2)))    //ʹ��720kwh�ķ���
//
//int main(void)
//{
//	double kwh;         //ʹ�õ�ǧ��ʱ
//	double bill;        //���
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);           //%lf ��Ӧdouble����
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)     //360~468 kwh
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)                      //468~720 kwh
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else                                         //����720 kwh
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}

//#include <stdbool.h>
//int main(void)
//{
//	unsigned long num;  //�����Ե���
//	unsigned long div;   //���ܵ�Լ��
//	bool isPrime;       //�������
//
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num %div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu.\n",
//					num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n",
//						num, div);
//				isPrime = false;  //������������
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis; ");
//		printf("Enter q to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}

//#define PERIOD '.' //�þ���ʶ���ӵĽ�β
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch = '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non_quote characters.\n", charcount);
//
//	return 0;
//
//}

//#include <ctype.h>    //Ϊisspace()�����ṩԭ��
//#include <stdbool.h>   //Ϊbool true�� false�ṩ����
//#define STOP '|'
//int main(void)
//{
//	char c;         //�����ַ�
//	char prev;        //�����ǰһ���ַ�
//	long n_chars = 0L;  //�ַ���
//	int n_lines = 0;    //����
//	int n_words = 0;    //������
//	int p_lines = 0;    //������������
//	bool inword = false;  //���c�ڵ����У�inword����true
//
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';                    //����ʶ����������
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;      //ͳ���ַ�
//		if (c == '\n')
//			n_lines++;   //ͳ����
//		if (!isspace(c) && !inword)
//		{
//			inword = true;   //��ʼһ���µĵ���
//			n_words++;    //ͳ�Ƶ���
//		}
//		if (isspace(c) && inword)
//			inword = false;  //�ﵽ���ʵ�ĩβ
//		prev = c;    //�����ַ���ֵ
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}

//#define COVERAGE 350
//int main(void)
//{
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score < MIN || score > MAX)
//		{
//			printf("%0.lf is an invalid value. Try again: ", score);
//			continue; //��ת��whileѭ���Ĳ�������
//		}
//		printf("Accepting %0.lf:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.lf.\n", n, total / n);
//		printf("Low = 0.lf, high = %0.lf\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//	return 0;
//}

int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");

	return 0;
}