#include <stdio.h>

int Add();
int G_a;
int G_b;


int start = 7;

void Start();

void CRedit(int cash);


int main(void)
{
	//09_01
	/*
	int cnt;

	printf("1부터 10까지 누적 합계 출력\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0;
		sum += cnt;
	}
	printf("1부터 10까지 누적 합계 :%d\n", sum);
	*/

	//09_02
	/*
	int cnt;

	printf("1부터 10까지 누적 합계 출력\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0;
		sum += cnt;
		printf("1부터 %d까지 누적 합계 : %d\n", cnt, sum);
	}
	*/

	//09_03
	/*
	int cnt, sum = 0;

	printf("1부터 %d까지 누적 합계 출력\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		sum += cnt;
		printf("1부터 %d까지 누적 합계 : %d\n", cnt, sum);
	}
	*/

	//09_04
	/*
	int sum = 0;
	G_a = 10;
	G_b = 20;

	printf("문제> G_a = 10, G_b = 20일 때 덧셈 연산 결과\n");
	printf("\n[main( ) 함수 영역]\n");
	printf("호출> 덧셈 연산 위해 Add( ) 함수 호출\n");
	sum = Add();

	printf("\n[main( ) 함수 영역]|n");
	printf("회신> Add( ) 함수로부터 덧셈 연산 결과 반환\n");
	printf("결과> 전역 변수 사용 : %d + %d = %d\n", G_a, G_b, sum);
	*/


	//09_05
	/*
	int start = 8;

	printf("전역 변수 선언 : star = 7\n");
	printf("지역 변수 선언 : star = 8\n");
	printf("출력> star = % d\n", star);
	*/

	//09_06
	/*
	printf("Start( ) 함수 3회 호출 결과\n");
	Start();
	Start();
	Start();
	*/

	//09_07
	/*
	int cnt, cash = 0;

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("<%d회 실행>\n", cnt);
		printf("현금 : ");
		scanf_s("%d", &cash);

		printf("입금\t\t출금\t\t잔액\n");
		CRedit(cash);
	}

	printf("\n총 %d회 실행 후 프로그램 종료\n", cnt - 1);
	*/

	//09_08



	return 0;
}



int Add()
{
	int hap = 0;
	hap = G_a + G_b;

	printf("[Add( ) 함수 영역]\n");
	printf("수행> 정수 2개의 덧셈 연산 수행\n");

	return hap;
}

void Start()
{
	static int s_cnt = 0;
	int a_cnt = 0;

	printf("정적 변수 = %d\t 동적 변수 = %d\n", s_cnt, a_cnt);
	s_cnt++;
	a_cnt++;
}



void CRedit(int cash)
{
	static int balance = 0;

	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf("\t\t%d\t\t", -cash);

	balance += cash;
	printf("%d\n, balance)");
}




