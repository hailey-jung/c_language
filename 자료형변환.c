#include <stdio.h>
#define PI 3.141592
#define US 1129.50

int main(void)
{
	

	//14
	/*
	int dc_num = 123;
	int oc_num = 0123;
	int hx_num = 0x123;

	printf("10���� ���: %d\n", dc_num);
	printf("8���� ���: %#o\n", oc_num);
	printf("16���� ���: %#x\n", hx_num);
	printf("10���� 123�� 10������ ���: %d\n", dc_num);
	printf("8���� 0123�� 10������ ���: %d\n", oc_num);
	printf("16���� 0x123�� 10������ ���: %d\n", hx_num);
	
	printf("10���� 123�� 8������ ���: %o\n", dc_num);
	printf("8���� 0123�� 8������ ���: %o\n", oc_num);
	printf("16���� 0x123�� 8������ ���: %o\n", hx_num);
	printf("10���� 123�� 16������ ���: %x\n", dc_num);
	printf("8���� 0123�� 16������ ���: %x\n", oc_num);
	printf("16���� 0x123�� 16������ ���: %x\n", hx_num);
	*/

	//15
	/*
	unsigned int un_num = 12345U;
	long lg_num = 1234567890L;

	printf("��ȣ�� ���� 10���� ����� ����: 12345U\n");
	printf("long�� 10���� ����� ����: 1234567890L\n");
	printf("��ȣ�� ���� ������� 10������ ���: %u\n", un_num);
	printf("long�� ������� 10������ ���: %ld\n", lg_num);
	printf("��ȣ�� ���� ������� 8������ ���: %o\n", un_num);
	printf("long�� ������� 8������ ���: %o\n", lg_num);
	printf("��ȣ�� ���� ������� 16������ ���: %X\n", un_num);
	printf("long�� ������� 16������ ���: %X\n", lg_num);
	*/

	//16
	/*
	int input_num;

	printf("���� �Է�: ");
	scanf_s("%d", &input_num);

	printf("10������ ���: %d\n", input_num);
	printf("8������ ���: %o\n", input_num);
	printf("16������ ���: %X\n", input_num);
	printf("�Է��� ������ �ش��ϴ� ����: %c\n", input_num);
	*/

	//17
	/*
	float f_num;
	f_num = 812.345F;

	printf("float�� ��� ���: 812.345F\n");
	printf("e ���������� ���: %e\n", f_num);
	printf("E ���������� ���: %E\n", f_num);
	*/

	//18
	/*
	double d_num;

	printf("�Ǽ��� ��� �Է�: ");
	scanf_s("%lf", &d_num);

	printf("float�� ���: %f\n", d_num);
	printf("e ������ ���: %e\n", d_num);
	printf("E ������ ���: %E\n", d_num);
	*/

	//19
	/*
	char munja, ascii;
	munja = 'S';
	ascii = 75;

	printf("munja: %c\n", munja);
	printf("ascii: %d\n", ascii);
	printf("���ĺ� S�� �ƽ�Ű�ڵ尪: %d\n", munja);
	printf("��� 75�� ���� ���ĺ�: %c\n", ascii);
	*/

	//20
	/*
	char arr[6] = "space";
	char input[13];

	printf("arr[6] = \"space\"\n");
	printf("���ڿ� ��� ���: %s\n", arr);

	printf("���ڿ� �Է�: ");
	scanf_s("%s", input, sizeof(input));

	printf("������ ���ڿ� ��� + �Է��� ���ڿ� = %s%s\n", arr, input);
	
	*/
	
	//21
	/*
	char* pot = "hello";
	printf("������ ���ڿ� ��� ���: %s\n", pot);
	*/

	//22
	/*
	float r, area = 0;

	printf("��ȣ ��� PI: 3.141592\n");
	printf("���� ���� = �� * ������ * ������\n");

	printf("������ �Է�(cm): ");
	scanf_s("%f", &r);
	area = PI * r * r;

	printf("������ %fcm�� ���� ���̴� %fcm^2\n");
	*/

	//23
	/*
	const float M = 3.305785;
	float flat, area = 0;

	printf("��ȣ ��� M: 3.305785\n");
	printf("������(m^2) = �� * 3.305785\n");

	printf("�� �Է�: ");
	scanf_s("%f", &flat);
	area = flat * M;

	printf("�Է��� %f���� %fm^2\n", flat, area);
	*/

	//24
	/*
	const float FEES = 0.0175;
	int chsh;
	float dollar = 0, fees_chsh;

	printf("�޷� ȯ�� US = 1129.50\n");
	printf("�޷� ���� �������� FEES = 0.0175\n");

	printf("ȯ���� �ݾ�(��ȭ): ");
	scanf_s("%d", &chsh);
	dollar = chsh / US;
	fees_chsh = chsh * FEES;

	printf("ȯ�� �� ��ȭ �ݾ�: $ %.2f\n", dollar);
	printf("ȯ�� ������: \ %.2f\n", fees_chsh);
	*/

	//25
	/*
	char ch;
	int num1;
	float num2;

	ch = 'A' + 5;
	num1 = 3 + 7.8;
	num2 = 5 / 3.0;

	printf("char ch = \'A\' + 5\n");
	printf("���� ���� ���(����): %c\n", ch);
	printf("���� ���� ���(������): %d\n", ch);
	printf("int num1 = 3 + 7.8\n");
	printf("���� ���� ���: %d\n", num1);
	printf("float num2 = 5 / 3.0\n");
	printf("������ ���� ���: %f\n", num2);
	*/

	//26
	/*
	int num1 = 5, num2 = 3;
	float result;

	printf("int num1 = 5, num2 = 3;\n");

	result = num1 / num2;
	printf("float result = num1 / num2 = %f\n", result);

	result = (float)num1 / num2;
	printf("result = (float)num1 / num2 = %f\n", result);
	*/


	return 0;
}
