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

	printf("1. 덧셈: 25 + 2 = %d\n", hap);
	printf("2. 뺄셈: 25 - 2 = %d\n", cha);
	printf("3. 곱셈: 25 * 2 = %d\n", gob);
	printf("4. 나눗셈: 25 / 2 = %d\n", div);
	printf("5. 나머지값: 25 % 2 = %d\n", nam);

	int input, m, s;
	printf("숫자 입력: ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	m = input / TM;
	s = input % TM;

	printf("1. 입력한 숫자: %d\n", input);
	printf("2. 분, 초 단위: %d분 %d초\n", m, s);
	
	//ex05_03
	int result = 10, num = 20;

	result *= num - 5;

	printf("문> result *= num - 5\n");
	printf("답> %d\n", result);

	//ex05_04
	int val, a;

	a = 8;
	val = ++a;

	printf("a = 8일 때 \n");
	printf("1. val = ++a이면 val = %d, a = %d\n", val, a);

	a = 8;
	val = a++;
	printf("2. val = a++이면 val = %d, a = %d\n", val, a);

	a = 8;
	val = --a;
	printf("3. val = --a이면 val = %d, a = %d\n", val, a);

	a = 8;
	val = a--;
	printf("4. val = a--이면 val = %d, a = %d\n", val, a);

	//ex05_05
	int val_1, val_2, a, b;

	printf("a = 1-, b = 15일 때\n");

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

	printf("첫 번째 정수 입력: ");
	scanf_s("%d", &a);
	printf("두 번째 정수 입력: ");
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

	printf("a = 0, b = 5, c = 8일 때\n");
	printf("1. a && b: %d\n", val1);
	printf("2. a || b: %d\n", val2);
	printf("3. (a > b) && (a < c): %d\n", val3);
	printf("4. (3)번 값 !val3: %d\n", val4);
	printf("5. b && c: %d\n", val5);

	//ex05_08
	int input, year;

	printf("윤년이면 1, 평년이면 0 출력\n");

	printf("연도 입력: ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);

	printf("입력한 %d년은 %d에 해당합니다.\n", input, year);

	//ex05_09
	int num1, num2, max, min;

	printf("정수 2개를 차례로 입력\n");

	printf("첫 번째 정수: ____ \b\b\b\b\b");
	scanf_s("%d", &num1);

	printf("두 번째 정수: ____ \b\b\b\b\b");
	scanf_s("%d", &num2);

	max = (num1 > num2) ? num1 : num2;
	min = (num1 < num2) ? num1 : num2;

	printf("둘 중 큰 수: %d\n", max);
	printf("둘 중 작은 수: %d\n", min);

	//ex05_10
	int a, b, val1, val2, val3, val4, val5;
	a = 5;	//0101
	b = 3;	//0011

	val1 = a & b;
	val2 = a | b;
	val3 = a ^ b;
	val4 = ~val3;
	val5 = ~val4;

	printf("a = 5, b = 3일 때 \n");
	printf("1. a & b: %d\n", val1);
	printf("2. a | b: %d\n", val2);
	printf("3. a ^ b: %d\n", val3);
	printf("4. (3)번 값 ~val3: %d\n", val4); //~는 결과값에 1 더함
	printf("5. (4)번 값 ~val4: %d\n", val5); //1 더하고 부호 반전

	return 0;
}