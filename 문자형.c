#include <stdio.h>


int main(void)
{
	//ex03-16
	/*
	system("title for ������ ���ĺ� �빮�� ���");
	int cnt; //�ݺ������� ����� ī��Ʈ ����
	printf("���ĺ� �빮�ڰ� ��µ˴ϴ�.\n");

	for (cnt = 65;cnt <= 90;cnt++) {
		printf("%c", cnt);
	}
	*/

	//��������01
	/*
	char id[8];
	char pw[10];

	printf("���̵�(�ִ� 8�ڸ�): ________\b\b\b\b\b\b\b\b");
	scanf_s("%s", id, sizeof(id));

	printf("�н�����(�ִ� 10�ڸ�): __________\b\b\b\b\b\b\b\b\b\b");
	scanf_s("%s", pw, sizeof(pw));

	printf("\n�Է��� ���̵�� %s, �н������ %s�Դϴ�.\n", id, pw);
	*/
	//��������02
	/*
	float su;

	printf("�Ҽ� ����° �ڸ����� �Ǽ� �Է�: ");
	scanf_s("%f", &su);

	printf("�Ҽ� ��° �ڸ����� ���: %.2f\n", su);
	printf("��ü �ڸ��� 6�ڸ�, �Ҽ� ù° �ڸ����� ���: %06.1f\n", su);
	*/

	//1
	/*
	short num1;
	int num2;
	long long num3;

	printf("�ڷ����� ũ�⸦ ���ϴ� �Լ� : sizeof( ) �Լ�\n");
	printf("1.short�� ���� : %d����Ʈ\n", sizeof(num1));
	printf("2.int�� ���� : %d����Ʈ\n", sizeof(num2));
	printf("3.long long�� ���� : %d ����Ʈ\n", sizeof(num3));
	printf("1����Ʈ�� 8��Ʈ�Դϴ�.\n");
	printf("4.short�� ���� : %d��Ʈ\n", sizeof(num1) * 8);
	printf("5.int�� ���� : %d��Ʈ\n", sizeof(num2) * 8);
	printf("6.long long�� ���� : %d��Ʈ\n", sizeof(num3) * 8);
	*/

	//2
	/*
	signed short num1, num2;
	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short�� ��ȿ ���� : -32768 ~ 32767\n");
	printf("1.���� num1 = 32767�� ���� ��� : %d\n", num2);
	*/

	//3
	/*
	signed short num1;
	int num2;

	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short�� ��ȿ ���� : -32768 ~ 32767\n");
	printf("1.���� short num1 = 32767�� ���� ��� : %7d\n", num2);
	*/

	//4
	/*
	unsigned long money;

	printf("unsigned long�� ��ȿ ����: 0 ~ 42,9498,7295\n");

	printf("1.���� ���� �Է�: ");
	scanf_s("%d", &money);

	printf("2.�Է� ���� ���: %d\n", money);
	*/

	//5
	/*
	unsigned short a, b, result;

	printf("unsigned short�� ��ȿ ����: 0 ~ 65,515\n");
	printf("1.ù ��° ���� �Է�: ");
	scanf_s("%hu", &a);
	printf("2.�� ��° ���� �Է�: ");
	scanf_s("%hu", &b);

	result = a - b;
	printf("���� ����: %hu - %hu = %hu\n", a, b, result);
	*/

	//6
	/*
	short min_su, input, result;
	min_su = -32768;

	printf("short�� ��ȿ ����: -32,768\n");
	printf("min_su = -32,768�� ��\n");
	printf("���� ������ ������ ���� �Է�: ");
	scanf_s("%hi", &input);

	result = min_su - input;
	printf("���� ����: %hi - %hi = %hi\n", min_su, input, result);
	*/

	//7
	/*
	float height, weight, swap, bmi;
	printf("Ű�� ü���� �Ҽ� ��° �ڸ����� �Է�\n");

	printf("Ű �Է�(cm): ");
	scanf_s("%f", &height);
	printf("ü�� �Է�(kg): ");
	scanf_s("%f", &weight);

	swap = height / 100;
	bmi = weight / (swap * swap);
	printf("BMI = ü��(kg) / Ű(m) x Ű(m))\n");
	printf("��Ƽ���ͷ� �Է��� Ű�� ���ͷ� ȯ���ؼ� ���\n");
	printf("BMI = %.2f\n", bmi);
	*/

	//9
	/*
	int num1, num2;
	float result;

	printf("���� 2���� �Է��ϼ���.\n");
	printf("ù ��° ���� num1 = ");
	scanf_s("%d", &num1);
	printf("�� ��° ���� num2 = ");
	scanf_s("%d", &num2);

	result = (float)num1 / num2;
	printf("������ ���� = num1 / num2 = %d / %d = %f\n", num1, num2, result);
	*/
	
	//10
	/*
	float base, height;
	double result;

	printf("�غ��� ���̿� �Ҽ� ��° �ڸ����� ������ �Է�\n");
	printf("�غ� �Է�(cm): ");
	scanf_s("%f", &base);
	printf("���� �Է�(cm): ");
	scanf_s("%f", &height);

	result = (base * height) / 2;

	printf("�ﰢ�� ����(�Ҽ� 6° �ڸ�����) ���: %f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 15° �ڸ�����) ���: %.15f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 16° �ڸ�����) ���: %.16f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 17° �ڸ�����) ���: %.17f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 18° �ڸ�����) ���: %.18f\n", result);
	*/

	//11
	/*
	char alphabet;
	alphabet = 'A';

	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = \'A\'\n");
	printf("���ĺ� ���: %c\n", alphabet);
	printf("�ƽ�Ű�ڵ尪 ���: %d\n", alphabet);
	*/

	//12
	/*
	char alphabet, add;
	alphabet = 'A';
	add = alphabet + 5;

	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = \'A\'\n");
	printf("ó�� ������ ���ĺ� ���: %c\n", alphabet);
	printf("ó�� ���ĺ��� 5�� ���� ���ĺ�: %c\n", add);
	printf("����� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", add);
	*/

	//13
	/*
	char input_alpha;

	printf("���ĺ� �Է�: ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("�Է��� ���ĺ� ���: %c\n", input_alpha);
	printf("�Է��� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", input_alpha);
	*/




	return 0;
}
