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

	printf("10진수 상수: %d\n", dc_num);
	printf("8진수 상수: %#o\n", oc_num);
	printf("16진수 상수: %#x\n", hx_num);
	printf("10진수 123을 10진수로 출력: %d\n", dc_num);
	printf("8진수 0123을 10진수로 출력: %d\n", oc_num);
	printf("16진수 0x123을 10진수로 출력: %d\n", hx_num);
	
	printf("10진수 123을 8진수로 출력: %o\n", dc_num);
	printf("8진수 0123을 8진수로 출력: %o\n", oc_num);
	printf("16진수 0x123을 8진수로 출력: %o\n", hx_num);
	printf("10진수 123을 16진수로 출력: %x\n", dc_num);
	printf("8진수 0123을 16진수로 출력: %x\n", oc_num);
	printf("16진수 0x123을 16진수로 출력: %x\n", hx_num);
	*/

	//15
	/*
	unsigned int un_num = 12345U;
	long lg_num = 1234567890L;

	printf("부호가 없는 10진수 상수값 대입: 12345U\n");
	printf("long형 10진수 상수값 대입: 1234567890L\n");
	printf("부호가 없는 상수값을 10진수로 출력: %u\n", un_num);
	printf("long형 상수값을 10진수로 출력: %ld\n", lg_num);
	printf("부호가 없는 상수값을 8진수로 출력: %o\n", un_num);
	printf("long형 상수값을 8진수로 출력: %o\n", lg_num);
	printf("부호가 없는 상수값을 16진수로 출력: %X\n", un_num);
	printf("long형 상수값을 16진수로 출력: %X\n", lg_num);
	*/

	//16
	/*
	int input_num;

	printf("정수 입력: ");
	scanf_s("%d", &input_num);

	printf("10진수로 출력: %d\n", input_num);
	printf("8진수로 출력: %o\n", input_num);
	printf("16진수로 출력: %X\n", input_num);
	printf("입력한 정수에 해당하는 문자: %c\n", input_num);
	*/

	//17
	/*
	float f_num;
	f_num = 812.345F;

	printf("float형 상수 출력: 812.345F\n");
	printf("e 지수형으로 출력: %e\n", f_num);
	printf("E 지수형으로 출력: %E\n", f_num);
	*/

	//18
	/*
	double d_num;

	printf("실수형 상수 입력: ");
	scanf_s("%lf", &d_num);

	printf("float형 출력: %f\n", d_num);
	printf("e 지수형 출력: %e\n", d_num);
	printf("E 지수형 출력: %E\n", d_num);
	*/

	//19
	/*
	char munja, ascii;
	munja = 'S';
	ascii = 75;

	printf("munja: %c\n", munja);
	printf("ascii: %d\n", ascii);
	printf("알파벳 S의 아스키코드값: %d\n", munja);
	printf("상수 75에 대한 알파벳: %c\n", ascii);
	*/

	//20
	/*
	char arr[6] = "space";
	char input[13];

	printf("arr[6] = \"space\"\n");
	printf("문자열 상수 출력: %s\n", arr);

	printf("문자열 입력: ");
	scanf_s("%s", input, sizeof(input));

	printf("제시한 문자열 상수 + 입력한 문자열 = %s%s\n", arr, input);
	
	*/
	
	//21
	/*
	char* pot = "hello";
	printf("포인터 문자열 상수 출력: %s\n", pot);
	*/

	//22
	/*
	float r, area = 0;

	printf("기호 상수 PI: 3.141592\n");
	printf("원의 넓이 = ㅠ * 반지름 * 반지름\n");

	printf("반지름 입력(cm): ");
	scanf_s("%f", &r);
	area = PI * r * r;

	printf("반지름 %fcm인 원의 넓이는 %fcm^2\n");
	*/

	//23
	/*
	const float M = 3.305785;
	float flat, area = 0;

	printf("기호 상수 M: 3.305785\n");
	printf("평방미터(m^2) = 평 * 3.305785\n");

	printf("평 입력: ");
	scanf_s("%f", &flat);
	area = flat * M;

	printf("입력한 %f평은 %fm^2\n", flat, area);
	*/

	//24
	/*
	const float FEES = 0.0175;
	int chsh;
	float dollar = 0, fees_chsh;

	printf("달러 환율 US = 1129.50\n");
	printf("달러 구매 수수료율 FEES = 0.0175\n");

	printf("환전할 금액(한화): ");
	scanf_s("%d", &chsh);
	dollar = chsh / US;
	fees_chsh = chsh * FEES;

	printf("환전 후 미화 금액: $ %.2f\n", dollar);
	printf("환전 수수료: \ %.2f\n", fees_chsh);
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
	printf("덧셈 연산 결과(문자): %c\n", ch);
	printf("덧셈 연산 결과(정수형): %d\n", ch);
	printf("int num1 = 3 + 7.8\n");
	printf("덧셈 연산 결과: %d\n", num1);
	printf("float num2 = 5 / 3.0\n");
	printf("나누셈 연산 결과: %f\n", num2);
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
