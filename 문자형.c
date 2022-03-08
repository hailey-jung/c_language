#include <stdio.h>


int main(void)
{
	//ex03-16
	/*
	system("title for 문으로 알파벳 대문자 출력");
	int cnt; //반복문으로 사용할 카운트 변수
	printf("알파벳 대문자가 출력됩니다.\n");

	for (cnt = 65;cnt <= 90;cnt++) {
		printf("%c", cnt);
	}
	*/

	//도전문제01
	/*
	char id[8];
	char pw[10];

	printf("아이디(최대 8자리): ________\b\b\b\b\b\b\b\b");
	scanf_s("%s", id, sizeof(id));

	printf("패스워드(최대 10자리): __________\b\b\b\b\b\b\b\b\b\b");
	scanf_s("%s", pw, sizeof(pw));

	printf("\n입력한 아이디는 %s, 패스워드는 %s입니다.\n", id, pw);
	*/
	//도전문제02
	/*
	float su;

	printf("소수 여섯째 자리까지 실수 입력: ");
	scanf_s("%f", &su);

	printf("소수 둘째 자리까지 출력: %.2f\n", su);
	printf("전체 자릿수 6자리, 소수 첫째 자리까지 출력: %06.1f\n", su);
	*/

	//1
	/*
	short num1;
	int num2;
	long long num3;

	printf("자료형의 크기를 구하는 함수 : sizeof( ) 함수\n");
	printf("1.short형 변수 : %d바이트\n", sizeof(num1));
	printf("2.int형 변수 : %d바이트\n", sizeof(num2));
	printf("3.long long형 변수 : %d 바이트\n", sizeof(num3));
	printf("1바이트는 8비트입니다.\n");
	printf("4.short형 변수 : %d비트\n", sizeof(num1) * 8);
	printf("5.int형 변수 : %d비트\n", sizeof(num2) * 8);
	printf("6.long long형 변수 : %d비트\n", sizeof(num3) * 8);
	*/

	//2
	/*
	signed short num1, num2;
	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short형 유효 범위 : -32768 ~ 32767\n");
	printf("1.변수 num1 = 32767은 정상 출력 : %d\n", num2);
	*/

	//3
	/*
	signed short num1;
	int num2;

	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short형 유효 범위 : -32768 ~ 32767\n");
	printf("1.변수 short num1 = 32767은 정상 출력 : %7d\n", num2);
	*/

	//4
	/*
	unsigned long money;

	printf("unsigned long형 유효 범위: 0 ~ 42,9498,7295\n");

	printf("1.보유 현금 입력: ");
	scanf_s("%d", &money);

	printf("2.입력 현금 출력: %d\n", money);
	*/

	//5
	/*
	unsigned short a, b, result;

	printf("unsigned short형 유효 범위: 0 ~ 65,515\n");
	printf("1.첫 번째 정수 입력: ");
	scanf_s("%hu", &a);
	printf("2.두 번째 정수 입력: ");
	scanf_s("%hu", &b);

	result = a - b;
	printf("뺄셈 연산: %hu - %hu = %hu\n", a, b, result);
	*/

	//6
	/*
	short min_su, input, result;
	min_su = -32768;

	printf("short형 유효 범위: -32,768\n");
	printf("min_su = -32,768일 때\n");
	printf("뺄셈 연산을 수행할 정수 입력: ");
	scanf_s("%hi", &input);

	result = min_su - input;
	printf("뺄셈 연산: %hi - %hi = %hi\n", min_su, input, result);
	*/

	//7
	/*
	float height, weight, swap, bmi;
	printf("키와 체중은 소수 둘째 자리까지 입력\n");

	printf("키 입력(cm): ");
	scanf_s("%f", &height);
	printf("체중 입력(kg): ");
	scanf_s("%f", &weight);

	swap = height / 100;
	bmi = weight / (swap * swap);
	printf("BMI = 체중(kg) / 키(m) x 키(m))\n");
	printf("센티미터로 입력한 키를 미터로 환산해서 사용\n");
	printf("BMI = %.2f\n", bmi);
	*/

	//9
	/*
	int num1, num2;
	float result;

	printf("정수 2개를 입력하세요.\n");
	printf("첫 번째 정수 num1 = ");
	scanf_s("%d", &num1);
	printf("두 번째 정수 num2 = ");
	scanf_s("%d", &num2);

	result = (float)num1 / num2;
	printf("나눗셈 연산 = num1 / num2 = %d / %d = %f\n", num1, num2, result);
	*/
	
	//10
	/*
	float base, height;
	double result;

	printf("밑변과 높이에 소수 둘째 자리까지 데이터 입력\n");
	printf("밑변 입력(cm): ");
	scanf_s("%f", &base);
	printf("높이 입력(cm): ");
	scanf_s("%f", &height);

	result = (base * height) / 2;

	printf("삼각형 넓이(소수 6째 자리까지) 출력: %f\n", result);
	printf("삼각형 넓이(소수 15째 자리까지) 출력: %.15f\n", result);
	printf("삼각형 넓이(소수 16째 자리까지) 출력: %.16f\n", result);
	printf("삼각형 넓이(소수 17째 자리까지) 출력: %.17f\n", result);
	printf("삼각형 넓이(소수 18째 자리까지) 출력: %.18f\n", result);
	*/

	//11
	/*
	char alphabet;
	alphabet = 'A';

	printf("알파벳 대문자를 문자형 변수에 대입: alphabet = \'A\'\n");
	printf("알파벳 출력: %c\n", alphabet);
	printf("아스키코드값 출력: %d\n", alphabet);
	*/

	//12
	/*
	char alphabet, add;
	alphabet = 'A';
	add = alphabet + 5;

	printf("알파벳 대문자를 문자형 변수에 대입: alphabet = \'A\'\n");
	printf("처음 대입한 알파벳 출력: %c\n", alphabet);
	printf("처음 알파벳에 5를 더한 알파벳: %c\n", add);
	printf("변경된 알파벳의 아스키코드값: %d\n", add);
	*/

	//13
	/*
	char input_alpha;

	printf("알파벳 입력: ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("입력한 알파벳 출력: %c\n", input_alpha);
	printf("입력한 알파벳의 아스키코드값: %d\n", input_alpha);
	*/




	return 0;
}
