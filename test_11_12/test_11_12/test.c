//#define _CRT_SECURE_NO_WARNINGS 1
//
//int main(int argc, char *argv[]) {
//	int counter, i = 0;
//	printf("PRINT COUNTINUE 10 NUMBERS!\n");
//	printf("PLEASE INPUT THE START NUMBER :");
//	scanf("%d", &counter);
//	//��ȡ�û����뱣�浽counter��
//	while (i++ < 11) {
//		printf(" %d \n", counter++);
//	}
//	//ѭ��10�Σ���ӡ��ΧΪ���������ݿ�ʼ��10������
//	printf("PROGRAM EXIT!\n");
//	return 0;
//
//    //���Ϊ1...10��
//}

//#define WEEK_PER_DAY 7 //ÿ��������
//int main(int argc, char *argv[]) {
//	int days, weeks, input;
//	
//	printf("CONVERT DAYS TO WEEKS!\N");
//	printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");  //����һ��15
//	scanf("%d", &input);
//	//��ȡ�û����룬������input������
//	while (input > 0) {
//		weeks = input / WEEK_PER_DAY;   
//		//��������
//		days = input%WEEK_PER_DAY;
//		//���㲻��һ�ܵ�����
//		printf("%d days are %d weeks, %d days\n", input, weeks, days); //15��Ϊ2����1��
//		//��ӡ��� 15 2�� 1��
//		printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");  //����������ӡ
//		scanf("%d", &input);
//	}
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//Ԥ����ת����λ��ʾ����

//int main(int argc, char *argv[]) {
//	int feet;
//	float inches, cm;
//	printf("CONVERT CM TO INCHES!\n");
//	printf("Enter the heigh in centimeters:");  //����170
//	scanf("%f", &cm);
//	//��ȡ�û����������
//	while (cm > 0) {
//		feet = cm / FEET_TO_CM;
//		inches = (cm - feet*FEET_TO_CM) / INCH_TO_CM;
//		//����ת������
//		printf(" %.lf cm = %d feet , %.lf inches\n", cm, feet, inches);
//		//��ӡ��� feetΪ5�� inchesΪ7Ӣ��
//		printf("Enter the height in centimeters( <=0 TO QUIT ):");
//		scanf("%f", &cm);
//		//ѭ����ȡ�û�����
//	}
//	printf("PEOGRAM EXIT!\n");
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work:");  //����20-��
//	scanf("%d", &count);
//	��ȡ�û����������
//	while (count > 0) {
//		sum = sum + count--;
//	}
//	ͨ���ݼ����㣬����ѭ�������㹤���ܺ�
//	printf("You earned $ %d total!\n", sum);
//	printf("PROGRAM EXIT!\N");
//	return 0;
//	���Ϊ210��
//}

//int main(int argc, char *argv[]) {
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work:");  //����20-��
//	scanf("%d", &count);
//	//��ȡ�û����������
//	while (count > 0) {
//		sum = sum + count * count;
//		count--;
//	}
//	//ͨ���ݼ����㣬����ѭ�������㹤���ܺ�
//		printf("You earned $ %d total!\n", sum);
//	printf("PROGRAM EXIT!\N");
//	return 0;
//}

//double cubic(double n);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("Enter the double datum to calc cubic :");  //��ӡ��ʾ��
//	scanf("%lf", &input);
//	//��ȡ�û�������
//	cubic(input);
//	//��������������������ֵ  
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}
//double cubic(double n) {
//	double t = n * n *n;  //2��2��2=8
//	printf("The %lg's cubic is %lg !\n", n, t);  //2   8 �����ʹ�ӡ���
//	return t;
//}

//int main(int argc, char *argv[]) {
//	int first, second;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to server as the second operand:");
//	scanf("%d", &second);
//	//�û������second���ݱ��ֲ���
//	printf("Now enter the first operand:");
//	scanf("%d", &first);
//	//�ֱ��ȡ�û����������
//	while (first > 0) {
//		printf("%d %% %d is %d\n", first, second, (first%second));
//		printf("Enter next number for first operand( <= 0 to quit):");
//		scanf("%d", &first);
//	}
//	//ѭ����ȡ�û������룬���㲢��ӡ���
//	printf("Done!\n");
//	return 0;
//}

//int Temperatures(double fahrenheit);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("This program convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start : ");
//	while (scanf("%lf", &input) == 1) {
//		Temperatures(input);
//		printf("Enter next fahrenheit! ( q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}
//int Temperatures(double fahrenheit) {
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0*(fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit,
//		celsius, kelvin);
//	return 0;
//}


//��ǰ�������ֽ�����ʲô
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//���㵱ǰ�������ֽ����Ƕ���
//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//����1��С��
//	//����0�����
//	return *p;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//�ô���Ľ���ǣ�
//int main()
//{
//	char a = -128;
//	//100000000000000010000000
//	//111111111111111101111111
//	//111111111111111110000000  ����
//	//10000000  �����ԭ����ͬ
//	//111111111111111110000000 �����������ת����ʮ����4294967168
//	printf("%u\n", a);  //%u�Ǵ�ӡʮ���Ƶ��޷�������
//	return 0;
//	//���Ϊ4294967168��
//}

//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001 -����
//
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ: %d\n", n);  //9
//	printf("pFloat��ֵΪ: %f\n", *pFloat); //0.000000
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 *1.001 * 2^3
//	//01000001000100000000000000000000
//	//1091567616
//	printf("num��ֵΪ: %d\n", n);
//	printf("pFloat��ֵΪ: %f\n", *pFloat);//9.0
//	return 0;
//	//n��ֵΪ: 9
//    //pFloat��ֵΪ: 0.000000
//    //num��ֵΪ : 1091567616
//	//pFloat��ֵΪ : 9.000000
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
//�û��������� ֱ������q�˳����ҵõ����������ܺ�
//
//int main(void)
//{
//	int n = 5;
//
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//
//	while (n < 3)
//	{
//		printf("n is %d\n", n);
//		n++;
//	}
//	printf("That's all this program does\n");
//
//	return 0;
//
//}

//int main(void)
//{
//	int n = 0;
//
//	while (n++ < 3)
//	{
//		printf("n is %d\n", n);
//	}
//	printf("That's all this program does.\n");
//
//	return 0;
//}

//#include <math.h>

//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response;
//
//	printf("What is the value of pi?\n"); //�ȴ�ӡ��һ��
//	scanf("%lf", &response);   //����double���͵��������
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}

//int main(void)
//{
//	int true_val, false_val;
//
//	true_val = (10 > 2);
//	false_val = (10 == 2);
//	printf("true = %d; false = %d \n", true_val, false_val);
//
//	return 0;
//	
//}

//int main(void)
//{
//	int n = 3;
//
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//
//	return 0;
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1); //��ߴ���ɶ���
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}

//һ������ѭ��
//int main(void)
//{
//	const int NUMBER = 22;
//	int count = 1;
//
//	while (count <= NUMBER)
//	{
//		printf("Be my Valentine!\n");  //��ӡ��仰22��
//		count++;
//	}
//	return 0;
//}

//int main(void)
//{
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//
//	printf("    n  n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num*num*num);  //��ӡ1��6������
//
//	return 0;
//}

//int main(void)
//{
//	int secs;
//
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//	return 0;
//}

//int main(void)
//{
//	int n;
//
//	for (n = 2; n < 60; n = n + 13)
//		printf("%d \n", n);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//
//	for (ch = 'a'; ch <= 'z'; ch++)   //97 122
//		printf("The ASCII value for %c is %d.\n", ch, ch); //ת����Ӧascll������֣�һֱ�����122ֹͣ
//	return 0;
//}

//int main(void)
//{
//	double debt;
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)  //11 11�ļ�
//		printf("Your debt is now $%.2f.\n", debt);
//
//	return 0;
//
//}

//int main(void)
//{
//	int x;
//	int y = 55;
//
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//	return 0;
//}

//int main(void)
//{
//	int ans, n;
//	ans = 2;
//	for (n = 3; ans <= 25;)
//		ans = ans * n;
//	printf("n = %d; ans  = %d.\n", n, ans);
//	return 0;
//}

//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}

//���������
//int main(void)
//{
//	const int FIRST_OZ = 46;
//	const int NEXT_OZ = 20;
//	int ounces, cost;
//
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//		printf("%5d  $%4.2f\n", ounces, cost / 100.0);
//
//	return 0;
//}

//�����еĺ�
//int main(void)
//{
//	int t_ct;
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
//								   t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//	return 0;
//}

//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}

//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//	//ABCDEF
//	//BCDEF
//	//CDEF
//	//DEF
//	//EF
//	//F
//}

//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}


























































































