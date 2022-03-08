#include <stdio.h>

int main(void) {
	//ex11_01
	/*
	int i_num = 3;
	char ch = 'A';
	float f_num = 21.5;
	//%d: 부호있음 %u: 부호없음
	printf("자료형별 주소를 10진수로 출력\n");
	printf("1. int형 변수의 주소: %u\n", &i_num);
	printf("2. char형 변수의 주소: %u\n", &ch);
	printf("3. float형 변수의 주소: %u\n", &f_num);

	printf("\n자료형별 주소를 16진수로 출력\n");
	printf("1. int형 변수의 주소: %X\n", &i_num);
	printf("2. char형 변수의 주소: %X\n", &ch);
	printf("3. float형 변수의 주소: %X\n", &f_num);
	*/

	//ex11_02
	/*
	int a = 8;
	int* pa = NULL;

	pa = &a;

	float b = 3.75;
	float* pb = &b;

	printf("일반 변수 a의 값: %u\n", a);
	printf("일반 변수 a의 주소값: %u\n", &a);
	printf("포인터 pa의 주소값: %u\n\n", pa);

	printf("일반 변수 b의 값: %.2f\n", b);
	printf("일반 변수 b의 주소값: %u\n", &b);
	printf("포인터 pb의 주소값: %u\n\n", pb);

	printf("NULL의 주소값: %u\n", NULL);
	*/

	//ex11_03
	/*
	int a = 300;
	int* pa = NULL; //NULL 주소값은 stdio.h 헤더파일에서 0번지로 지정

	pa = &a;
	char yn;

	do {
		printf("\n 주소값 출력\n");
		printf("1. 포인터 pa의 주소값: %u\n", pa);
		printf("2. 일반 변수 a의 주소값: %u\n", &a);
		printf("\n데이터값 출력 \n");
		printf("1. *pa의 데이터값: %u\n", *pa);
		printf("2. 일반 변수 a의 데이터값: %u\n", a);

	re_play:
		printf("프로그램을 다시 시작하겠습니까?(Y/N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		switch (yn) {
		case 'Y': case 'y':
			continue;
			break;

		case 'N': case 'n':
			printf("프로그램을 종료합니다.\n");
			return 0;

		default:
			printf("\n%c는(은) 허용하지 않는 알파벳입니다!\n", yn);
			printf("알파벳을 다시 입력하세요.\n");
			goto re_play;
			break;
		}
	} while (1);
	*/

	//ex11_04
	/*
	int a = 30;
	int* p = NULL;

	printf("a = 30, p = &a일 때\n");
	
	p = &a;
	printf("1. 포인터 p의 주소값: %u\n", p);
	printf("2. 포인터가 가르키는 *p의 데이터값: %u\n", *p);
	printf("\n*p = 50일 때\n");

	*p = 50;
	printf("1. 포인터 p의 주소값: %u\n", p);
	printf("2. 포인터가 가르키는 *p의 데이터값: %u\n", a);
	*/

	//ex11_05 //수업때는 넘어감
	/*
	int a = 103;
	int* pa = NULL;

	pa = &a;

	printf("int a = 103;\n");
	printf("int *pa = NULL\n;");
	printf("pa = &a;\n");

	if (pa != NULL) {
		printf("pa는 유효한 포인터\n");
		printf("1. 포인터 pa의 주소값: %u\n", pa);
		printf("2. 포인터가 가르키는 *pa의 데이터값: %u\n", *pa);
	}
	else {
		printf("소스코드 pa = &a;를 주석처리한 경우\n");
		printf("pa는 유효하지 않은 포인터!\n");
	}
	*/
	//ex11_06
	/*
	double a;//double a로 해야 문제없음
	double* pd = NULL;

	pd = &a;
	*pd = 13.8;

	if (pd != NULL) {
		printf("pd는 유효한 포인터\n");
		printf("1. 포인터 pd의 주소값: %u\n", pd);
		printf("2. 포인터가 가르키는 *pd의 데이터값: %u\n", *pd);
	}
	*/

	//ex11_07
	/*
	char c;
	char* pc;
	pc = &c;

	int i;
	int* pi;
	pi = &i;

	double d;
	double* pd;
	pd = &d;

	printf("1. 포인터 증감 연산자 사용 전 주소값\n");
	printf("char형 포인터 주소값: %d\n", pc);
	printf("int형 포인터 주소값: %d\n", pi);
	printf("double형 포인터 주소값: %d\n", pd);

	*pc++;//1증가
	*pi++;//4증가
	*pd++;//8증가

	printf("\n2. 포인터 *p++ 연산자 수행 후 주소값\n");
	printf("char형 포인터 주소값: %d\n", pc);
	printf("int형 포인터 주소값: %d\n", pi);
	printf("double형 포인터 주소값: %d\n", pd);
	*/

	//ex11_08
	double d = 3.3058;
	double* pd;

	pd = &d;

	printf("1. 포인터 pd의 증감 연산 전 주소값과 데이터값\n");
	printf("포인터 pd의 현재 주소값: %u\n", pd);
	printf("포인터 pd의 현재 데이터값: %f\n", d);

	(*pd)++; //데이터값이 변경됨

	printf("\n2. 포인터 (*pd)++의 증감 연산 후 주소값과 데이터값\n");
	printf("포인터 pd의 현재 주소값: %u\n", pd);
	printf("포인터 pd의 현재 데이터값: %f\n", d);


	return 0;
}