#include <stdio.h>
#define TM 60

int main(void) {
	//ex05_01
	int num1, num2, hap, cha, gob, div, nam;
	num1 = 25;
	num2 = 2;

	hap = num1 + num2;
	cha = num1 - num2;
	gob = num1 * num2;
	div = num1 / num2;
	nam = num1 % num2;

	printf("1. ����: 25 + 2 = %d\n", hap);
	printf("2. ����: 25 - 2 = %d\n", cha);
	printf("3. ����: 25 * 2 = %d\n", gob);
	printf("4. ������: 25 / 2 = %d\n", div);
	printf("5. ��������: 25 % 2 = %d\n", nam);

	int input, m, s;
	printf("���� �Է�: ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	m = input / TM;
	s = input % TM;

	printf("1. �Է��� ����: %d\n", input);
	printf("2. ��, �� ����: %d�� %d��\n", m, s);
	
	//ex05_03
	int result = 10, num = 20;

	result *= num - 5;

	printf("��> result *= num - 5\n");
	printf("��> %d\n", result);

	//ex05_04
	int val, a;

	a = 8;
	val = ++a;

	printf("a = 8�� �� \n");
	printf("1. val = ++a�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = a++;
	printf("2. val = a++�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = --a;
	printf("3. val = --a�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = a--;
	printf("4. val = a--�̸� val = %d, a = %d\n", val, a);

	//ex05_05
	int val_1, val_2, a, b;

	printf("a = 1-, b = 15�� ��\n");

	a = 10;
	b = 15;
	val_1 = ++a + b--;

	printf("1. val_1 = ++a + b-- = %d, a = %d, b = %d\n", val_1, a, b);
	
	a = 10;
	b = 15;
	val_1 = a++ + --b;

	printf("2. val_2 = a++ + --b = %d, a = %d, b = %d\n", val_2, a, b);

	//ex05_06
	int a, b;

	printf("ù ��° ���� �Է�: ");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է�: ");
	scanf_s("%d", &b);

	printf("a == b: %d\n", a == b);
	printf("a != b: %d\n", a != b);
	printf("a > b: %d\n", a > b);
	printf("a < b: %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a == 5: d\n", a == 5);
	printf("5 == a: %d\n", 5 == a);

	//ex05_07
	int a, b, c, val1, val2, val3, val4, val5;
	a = 0, b = 5, c = 8;

	val1 = a && b;
	val2 = a || c;
	val3 = (a > b) && (a < c);
	val4 = !val3;
	val5 = b && c;

	printf("a = 0, b = 5, c = 8�� ��\n");
	printf("1. a && b: %d\n", val1);
	printf("2. a || b: %d\n", val2);
	printf("3. (a > b) && (a < c): %d\n", val3);
	printf("4. (3)�� �� !val3: %d\n", val4);
	printf("5. b && c: %d\n", val5);

	//ex05_08
	int input, year;

	printf("�����̸� 1, ����̸� 0 ���\n");

	printf("���� �Է�: ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);

	printf("�Է��� %d���� %d�� �ش��մϴ�.\n", input, year);

	//ex05_09
	int num1, num2, max, min;

	printf("���� 2���� ���ʷ� �Է�\n");

	printf("ù ��° ����: ____ \b\b\b\b\b");
	scanf_s("%d", &num1);

	printf("�� ��° ����: ____ \b\b\b\b\b");
	scanf_s("%d", &num2);

	max = (num1 > num2) ? num1 : num2;
	min = (num1 < num2) ? num1 : num2;

	printf("�� �� ū ��: %d\n", max);
	printf("�� �� ���� ��: %d\n", min);

	//ex05_10
	int a, b, val1, val2, val3, val4, val5;
	a = 5;	//0101
	b = 3;	//0011

	val1 = a & b;
	val2 = a | b;
	val3 = a ^ b;
	val4 = ~val3;
	val5 = ~val4;

	printf("a = 5, b = 3�� �� \n");
	printf("1. a & b: %d\n", val1);
	printf("2. a | b: %d\n", val2);
	printf("3. a ^ b: %d\n", val3);
	printf("4. (3)�� �� ~val3: %d\n", val4); //~�� ������� 1 ����
	printf("5. (4)�� �� ~val4: %d\n", val5); //1 ���ϰ� ��ȣ ����

	return 0;
}