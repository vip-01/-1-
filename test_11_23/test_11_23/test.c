#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	int weight, height;
//	scanf("%d %d", &weight, &height);
//	if (weight < 100 && height > 64)
//	if (height >= 72)
//		printf("You are very tall for your weight.\n");
//	else
//		printf("You are tall for your weight.\n");
//	else if (weight > 300 && height < 48)
//		printf("You are quite short for your weight.\n");
//	else
//		printf("Your weight is ideal.\n");
//	return 0;
//
//}

//int main(void)
//{
//	int i = 0;
//	while (i < 3) {
//			switch (i++) {
//			case 0:printf("fat ");
//			case 1:printf("hat ");
//			case 2:printf("cat ");
//			default:printf("Oh no! ");
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int lc = 0;
//	int uc = 0;
//	int oc = 0;
//	
//	while ((ch = getchar()) != '#')
//	{
//		if (ch >= 'a' && ch <= 'z')
//			lc++;
//		else if (ch >= 'A' && ch <= 'Z')
//			uc++;
//		else oc++;
//	}
//	printf("%d lowercase, %d uppercase, %d other", lc, uc, oc);
//
//	return 0;
//}

//int main(void)
//{
//	int age = 20;
//	while (age++ <= 65)
//	{
//		if ((age % 20) == 0)
//			printf("You are %d. Here is a raise.\n", age);
//		if (age == 65)
//			printf("You are %d. Here is your gold watch.\n", age);
//	}
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("Step 1\n");
//		if (ch == 'c')
//			continue;
//		else if (ch == 'b')
//			break;
//		else if (ch = 'h')
//			goto laststep;
//		printf("Step 2\n");
//		laststep: printf("Step 2\n");
//	}
//	printf("Done\n");
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	while((ch = getchar()) != '#')
//	{
//		if (ch != '\n') {
//			printf("Step 1\n");
//			if (ch == 'b') break;
//			if (ch != 'c') {
//				if (ch == 'h') {
//					printf("Step 3\n");
//				}
//				else
//					printf("Step 2\n");
//					printf("Step 3\n");
//			}
//		}
//	}
//	printf("Done\n");
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int blank = 0;
//	int endline = 0;
//	int others = 0;
//	printf("Please input chars( # for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//			blank++;
//		//ͳ�ƿո�
//		else if (ch == '\n')
//			endline++;
//		//ͳ�ƻ��з�
//		else others++;
//		//ͳ���������з���
//	}
//	printf("%d blank, %d endline, %d others", blank, endline, others);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int counter = 0;
//	printf("Please input chars( # for exit):");
//	while ((ch == getchar()) != '#')
//	{
//		if (counter++ % 8 == 0)
//			printf("\n");
//		//ʹ�ü�������ÿ8���ַ���ӡһ�����з�
//
//		if (ch == '\n')
//			printf("'\\b'-%03d. ", ch);
//		//���ڻ��з�����Ҫת����ʾ��ʽ��������ܻ���
//		//����8���ַ�ʱ�ͻ���
//
//		else if (ch == 't')
//			printf("'\\t'-%03d. ", ch);
//		else printf("'%c'-%03d. ", ch, ch);
//	}
//	printf("Done\n");
//	return 0;
//}

//int main(void)
//{
//	int odd_sum = 0;
//	int even_sum = 0;
//	int odd_count = 0;
//	int even_count = 0;
//	int input = 0;
//
//	printf("Please input numbers ( 0 for exit):");
//	while (scanf("%d", &input))
//	{
//		if (input == 0) break;
//		if (input % 2 == 0) {
//			even_sum = even_sum + input;
//			even_count++;
//		}
//		else{
//			odd_sum = odd_sum + input;
//			//ʹ��+= �����
//			odd_count++;
//		}
//	}
//	printf("Have %d enen number, average is %g\n", even_count, 1.0*even_sum / even_count);
//	printf("Have %d odd number, average is %g\n", odd_count, 1.0*odd_sum / odd_count);
//	printf("Done\n");
//	return 0;
//
//	//ʶ��ż�������������Լ�������ǵ�ƽ��ֵ
//}

//int main(void)
//{
//	int counter = 0;
//	char ch;
//	printf("Please input chars( # for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '!') {
//			printf("!!");
//			counter++;
//		}else if (ch == '.'){
//			printf("!");
//			counter++;
//		}
//		else{
//			printf("%c", ch);
//		}
//	}
//	printf("\nTotal replace %d times\n", counter);
//	printf("Done\n");
//	return 0;
//}

//int main(void)
//{
//	int counter = 0;
//	char ch;
//	printf("Please input chars( # for exit):");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch){
//			case '!':
//				printf("!!");
//				counter++;
//			case '.':
//				printf("!");
//				counter++;
//				break;
//			default:
//				printf("%c", ch);
//		}
//	}
//	printf("\nTotal replace %d times\n", counter);
//	printf("Done\n");
//	return 0;
//}

//int main(void)
//{
//	int counter = 0;
//	int halfpair = 0;
//	char ch;
//	printf("Please input chars( # for exit0:");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch){
//		case 'e':
//			halfpair = 1;
//			break;
//		case 'i':
//			if (halfpair == 1){
//				counter++;
//				halfpair = 0;
//			}
//			break;
//		default:
//			halfpair = 0;
//		}
//	}
//	printf("\nTotally exist %d \'ei\' in all char!\n", counter);
//	printf("Done\n");
//	return 0;
//}

//#define BASE_SALARY 10.00
//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
////�����ö���
//int main(void)
//{
//	float hours = 0;
//	float salary, tax, taxed_salary;
//	//���ʣ�˰�𣬾�����
//	printf("Enter the working hours a week:");
//	scanf("%f", &hours);
//	if (hours <= 30) {
//		salary = hours*BASE_SALARY;
//		tax = salary*BASE_TAX;
//		taxed_salary = salary - tax;
//		//30Сʱ���ڣ��޼Ӱ࣬��׼����˰��
//	}
//	else if (hours <= 40){
//		salary = hours*BASE_SALARY;
//		tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		taxed_salary = salary - tax;
//		//30~40Сʱ���޼Ӱ࣬����˰��
//	}
//	else{
//		salary = (40 + (hours - 40)*EXTRA_HOUR)*BASE_SALARY;
//		if (salary <= 450) tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		else tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (salary - 450)*EXCEED_TAX;
//		taxed_salary = salary - tax;
//		//40Сʱ���ϣ��Ӱ࣬˰�ʰ�����450��Ԫ�÷ֽ�ۼ�
//	}
//	printf("LYour salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\
//		   		   n", salary, tax, taxed_salary);
//	printf("Done\n");
//	return 0;
//}

//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//
//void show_menu(void);
//float get_hours(void);
//
//void calc_salary(float base_salary, float hours);
////���ݻ������ʺ͹���ʱ�����㹤�ʣ�˰�𣬾�����ú���
//int main(void)
//{
//	float hours = 0;
//	char selected;
//	do{
//		show_menu();
//		scanf("%c", &selected);
//		switch (selected){
//		case '1':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(8.75, hours);
//			break;
//			//ѡ���������ʣ���ȡ�û�����ù���ʱ�������㹤�ʣ�˰�𼰾�����
//		case '2':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(9.33, hours);
//			break;
//		case '3':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(10.00, hours);
//			break;
//		case '4':
//			printf("Hello, you select $8.75/hr. Enter the work hours: ");
//			scanf("%f", &hours);
//			calc_salary(11.20, hours);
//			break;
//		case '5':
//			break;
//		default:
//			printf("Errow selected! please retry!\n");
//			getchar();
//			break;
//		}
//	} while (selected != '5' );
//	printf("Done\n");
//	return 0;
//}
//void show_menu(void){
//	//��ʾ��ʾ�˵�
//	char s1[] = "1) $8.75/hr";
//	char s2[] = "2) $9.33/hr";
//	char s3[] = "3) $10.00/hr";
//	char s4[] = "4) $11.20/hr";
//	char s5[] = "5) quit";
//
//	printf("****************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action\n");
//	printf("%-40s", s1);
//	printf("%-40s\n", s2);
//	printf("%-40s", s3);
//	printf("%-40s\n", s4);
//	printf("%-40s\n", s5);
//	printf("****************************************************************\n");
//}
//
//void calc_salary(float base_salary, float hours) {
//	float salary, tax, taxed_salary;
//	if (hours <= 30){
//		//����ʱ��С��30Сʱ�����
//		salary = hours*base_salary;
//		tax = salary*BASE_TAX;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40){
//		//����ʱ������40Сʱ�����
//		salary = hours*base_salary;
//		tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		taxed_salary = salary - tax;
//	}
//	else{
//		//��������ʱ�������µ�˰�ռ���
//		salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
//		if (salary <= 450) tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		else tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX + (salary - 450)*EXCEED_TAX;
//		taxed_salary = salary - tax;
//	}
//	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n",
//		salary, tax, taxed_salary);
//	printf("\ncontinue....\n");
//}


//int main(int argc, char *argv[]) {
//	int datum;
//	do{
//		printf("Enter a number( 0 to exit ):");
//		scanf("%d", &datum);
//		if (datum < 2){
//			if (datum == 0) break;
//			printf("%d is out of range, retry.\n", datum);
//			continue;
//		}
//		//��ȡ�û������������
//		printf("You input %d, so the prime from %d to 2 is: ", datum, datum);
//		for (int i = datum; i > 1; i--){
//			//�������ݵ�2��ѭ����ѭ���ж������ڵ�ÿһ�����Ƿ�������
//			int is_prime = 1;
//			for (int j = 2; j <= i / 2; j++){
//				if (i%j == 0){
//					is_prime = 0;
//					break;
//				}
//			}
//			if (is_prime == 1)
//				printf("%d, ", i);
//			//����������ǣ��б��Ƿ��ӡ�����ڵ�����
//		}
//		printf("\n");
//	} while (datum != 0);
//	printf("Done! bye.");
//	return 0;
//}

//#define SINGLE 17850
//#define HOLDER 23900
//#define MARRY 29750
//#define DIVORCE 14875
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.28
////������صĳ�������
//
//int main(void)
//{
//	char type;
//	float salary;
//	float tax, salary_taxed;
//	do{
//		printf("Please select tax type. There are for type:\n");
//		printf("1)Single  2)House holder 3)Married    4)Divorced  5)Quit:");
//		scanf("%c", &type);
//		//ѡ����˰���ͣ�switch���Բ�ͬ���ͷֱ����
//		switch (type){
//		case '1':
//			printf("Enter your salary:");
//			scanf("%f", &salary);
//			if (salary <= SINGLE) {
//				tax = salary*BASE_TAX;
//				salary_taxed = salary - tax;
//			}
//			else{
//				tax = salary*BASE_TAX + (salary - SINGLE)*EXTRA_TAX;
//				salary_taxed = salary - tax;
//			}
//			printf("Hi,your salary is %.2f,tax is %.2f,after tax salary is %.2f\b",
//				salary,tax,salary_taxed);
//				break;
//		case '2':
//			printf("Enter your salary:");
//			scanf("%f", &salary);
//			if (salary <= HOLDER){
//				tax = salary*BASE_TAX;
//				salary_taxed = salary - tax;
//			}
//			else{
//				tax = salary*BASE_TAX + (salary - HOLDER)*EXTRA_TAX;
//				salary_taxed = salary - tax;
//			}
//			printf("Hi,your salary is %.2f,tax is %.2f,after tax salary is %.2f\b",
//				salary, tax, salary_taxed);
//			break;
//		case '3':
//			printf("Enter your salary:");
//			scanf("%f", &salary);
//			if (salary <= MARRY){
//				tax = salary*BASE_TAX;
//				salary_taxed = salary - tax;
//			}
//			else{
//				tax = salary*BASE_TAX + (salary - MARRY)*EXTRA_TAX;
//				salary_taxed = salary - tax;
//			}
//			printf("Hi, your salary is %.2f, tax is %.2f,after tax salary is %.2f\b",
//				salary, tax, salary_taxed);
//			break;
//		case '4':
//			printf("Enter your salary:");
//			scanf("%f", &salary);
//			if (salary <= DIVORCE){
//				tax = salary*BASE_TAX;
//				salary_taxed = salary - tax;
//			}
//			else{
//				tax = salary*BASE_TAX + (salary - DIVORCE)*EXTRA_TAX;
//				salary_taxed = salary - tax;
//			}
//			printf("Hi, your salary is %.2f, tax is %.2f,after tax salary is %.2f\b",
//				salary, tax, salary_taxed);
//			break;
//		case '5':
//			break;
//		default:
//			printf("Wrong type. Please retry.\n");
//		}
//	} while (type != '5');
//	printf("Done\n");
//	return 0;
//
//	//����5000��˰��750������4250
//	//��ѡ������1 2 3 4
//	//���Ϊ��Hi, your salary is 5000.00, tax is 750.00, after tax salary is 4250.
//}
//
//#define PRICE_ARTI 2.05
//#define PRICE_BEET 1.25
//#define PRICE_CARROT 1.09
//#define DISCOUNT 0.05
////��������
//void show_menu(void);
//float get_weight(void);
////��������
//
//int main(void)
//{
//	float w_arti = 0;
//	float w_beet = 0;
//	float w_carrot = 0;
//	char selected;
//	float weight, amount, rebate, freight, total;
//	do{
//		show_menu();
//		scanf("%c", &selected);
//		switch (selected){
//			case 'a':
//				w_arti += get_weight();
//				break;
//			case 'b':
//				w_beet += get_weight();
//				break;
//			case 'c':
//				w_carrot += get_weight();
//				break;
//			case 'q':
//				break;
//			default:
//				printf("Error input, retry!\n");
//		}
//	} while (selected != 'q');
//	//��ȡ���Զ������������
//
//	amount = w_arti*PRICE_ARTI + w_beet*PRICE_BEET + w_carrot*PRICE_CARROT;
//	weight = w_arti + w_beet + w_carrot;
//	//������ͻ�������
//
//	if (amount >= 100) rebate = amount*DISCOUNT;
//	else rebate = 0;
//	//���ݻ���������ۿ�
//
//	if (weight <= 5) freight = 6.5;
//	else if (weight > 5 && weight <= 20) freight = 14;
//	else freight = 14 + (weight - 20) * 0.5;
//	//�������������ʷ�
//	total = amount + freight - rebate;
//
//	printf("The price of vegetable:\nartichoke %g$/pound, beet %g$/pound, carrot%g$ / pound.\n",
//		PRICE_ARTI,PRICE_BEET,PRICE_CARROT);
//	printf("You order %g pound artichoke,  %g pound beet, %g pound carrot.\n",
//		w_arti, w_beet, w_carrot);
//	printf("You total order %g pounds, discunt %g$,  amount %g$, freight %g$,total %g$.\n",
//		weight,rebate,amount,freight,total);
//	printf("Done\n");
//	return 0;
//}
//void show_menu(void){
//	//��ʾ����ѡ��˵�
//	printf("***************************************************************\n");
//	printf("Enter the char corresponding to the desired vegetable.\n");
//	printf("a) artichoke                    b) beet\n");
//	printf("c) carrot                       q) quit & checkout\n");
//	printf("***************************************************************\n");
//	printf("Please input the vegetable you want to buy(a,b,c or q for quit): ");
//}
//float get_weight(void){
//	//��ȡ�û�����Ĺ�������
//	float weight;
//	printf("Please input how many pounds you buy:");
//	scanf("%f", &weight);
//	printf("Ok, add %g pound to cartt��\n", weight);
//	getchar();
//	return weight;
//}

//41
//int main()
//{
//	int iq = 0;
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//	//����140����Genius
//}

//42
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//			printf("Perfect\n");
//	}
//	return 0;
//}

//43

//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}
//44

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (~scanf("%d", &num))
//	{
//		if (num % 2 == 1)
//			printf("Odd\n");
//		else
//			printf("Even\n");
//	}
//	return 0;
//}

//45

//#include <stdio.h>
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	while (~scanf("%d%d%d", &n1, &n2, &n3))
//	{
//		int max = n1>n2 ? n1 : n2;
//		max = max>n3 ? max : n3;
//		printf("%d\n", max);
//	}
//	return 0;
//
//}

#include <stdio.h>

int main()
{
	int ch = 0;
	char vowel[] = "AaEeIiOoUu";
	while ((ch = getchar()) != EOF)
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == vowel[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
		{
			printf("Consonant\n");
		}
		getchar(); //��Ϊgetchar���滹��һ��/n����������Ҫ��������
	}
	return 0;
}