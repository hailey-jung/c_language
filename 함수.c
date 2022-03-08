#include <stdio.h>
#include <stdlib.h>	//system()
#include <time.h>
#include <math.h>
#include <conio.h>	// _getch()
#include <windows.h>


#define NUM 45

int sum() {
	int a = 10, b = 20, hap;
	hap = a + b;
	return hap;
}
//사용자 정의 함수!
void Dash() {
	for (int a = 1;a <= 100;a++) {
		printf("-");
	}

	printf("\n");
}
int main(void) {

	//ex07_15
	/*
	int su, cnt, hap = 0;
re:
	printf("어디까지 합을 구할까요: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("음의 정수는 허용하지 않습니다.\n");
		printf("프로그램을 다시 시작합니다.\n\n");
		goto re;
	}
	else {
		cnt = 1;

		do {
			if (hap > 1000) {
				printf("누적합이 1000을 초과했습니다.\n");
				break;
			}
			else {
				hap += cnt;
			}
			printf("%d회 반복 누적합: %d\n", cnt, hap);
			cnt++;
		} while (cnt <= su);

		printf("1부터 %d까지 누적합: %d\n", cnt - 1, hap);
	}
	*/

	//while로 바꾼 코드

	/*
	int su, cnt, hap = 0;
re:
	printf("어디까지 합을 구할까요: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("음의 정수는 허용하지 않습니다.\n");
		printf("프로그램을 다시 시작합니다.\n\n");
		goto re;
	}
	else {
		cnt = 1;

		while (cnt <= su) {
			if (hap > 1000) {
				printf("누적합이 1000을 초과했습니다.\n");
				break;
			}
			else {
				hap += cnt;
			}
			printf("%d회 반복 누적합: %d\n", cnt, hap);
			cnt++;
		}

		printf("1부터 %d까지 누적합: %d\n", cnt - 1, hap);
	}
	*/



	//ex07_16
	/*
	int cnt, su, hap = 0;

	printf("홀수는 continue문을 사용하여 건너뜁니다.\n");
	printf("정수 입력: ");

	scanf_s("%d", &su);

	for (cnt = 1;cnt <= su;cnt++) {
		if ((cnt % 2) != 0) {
			continue;
		}
		else {
			hap += cnt;
			printf("%3d", cnt);

			if ((cnt % 20) == 0) {
				printf("\n");
			}
		}

	}
	printf("1부터 %d까지 짝수의 누적 합계: %d\n", su, hap);
	*/

	//ex07_17 //do while 을 while로 변경시 처음 부분만 신경써주면 된다 나머지는 동일
	/*
	char op;
	do {
	reset:
		printf("알파벳 대문자 입력: ");
		scanf("%c", &op, sizeof(op));
		getchar();

		if (op >= 'A' && op <= 'Z') {
			printf("입력한 알파벳 %c는(은) 대문자가 맞습니다.\n", op);
			printf("수고하셨습니다.\n");
			break;
		}
		else {
			printf("입력한 알파벳 %c는(은) 대문자가 아닙니다.\n", op);
			printf("알파벳을 다시 입룍하세요.\n");
			goto reset;
		}
	} while (1);

	*/

	//ex07_18
	/*
	int result;

	printf("sum() 함수의 덧셈 연산\n");
	result = sum();

	printf("a = 10. b = 20일 때");
	printf("결과는 %d\n", result);
	*/

	//ex08_01
	/*
	int cnt = 0;
	printf("1~45 중에서 숫자 6개 출력\n");
	printf("rand(): ");

	for (cnt = 1; cnt <= 6; cnt++) {
		printf("%d", rand());
	}

	printf("\n");
	printf("rand() %% 45: ");

	for (cnt = 1;cnt <= 6;cnt++) {
		printf(" %d ", (rand() % 45)); //0~44
	}

	printf("\n");
	printf("1 + (rand() % 45): ");

	for (cnt = 1;cnt <= 6;cnt++) {
		printf(" %d ", 1 + (rand() % 45)); //1~45
	}

	printf("\n");
	printf("35 + (rand() % 13): ");

	for (cnt = 1;cnt <= 6;cnt++) {
		printf(" %d ", 35 + (rand() % 13)); //35~47
	}

	printf("\n");
	*/

	//ex08_02
	/*
	int cnt;

	printf("1~45 중에서 숫자 6개 출력\n");
	srand((unsigned)time(NULL)); //시간 차별화

	printf("srand() 출력: ");
	for (cnt = 1;cnt <= 6;cnt++) {
		printf(" %d ", 1 + (rand() % NUM)); //1~45사이 출력
	}

	printf("\n");
	*/

	//ex08_03
	/*
	double result, target = 3.58; //double형 선언

	printf("double형 변수 target의 값: 3.58\n");

	result = ceil(target);
	printf("올림 함수 ceil() 사용 결과 : %.2f\n", result);

	result = floor(target);
	printf("내림 함수 floor() 사용 결과: %.2f\n", result);
	*/

	//ex08_04
	/*
	double result, weight1, weight2;

	printf("내 몸무게 입력(kg): ");
	scanf_s("%lf", &weight1);
	printf("선생님 몸무게 입력(kg): ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2;
	printf("뺄샘 연산 %.2f - %.2f = %.2f\n", weight1, weight2, result);

	result = fabs(weight1 - weight2);
	printf("[절댓값] %.2f - %.2f = %.2f\n", weight1, weight2, result);
	*/

	//ex08_05
	/*
	int choice;
	double result, num1, num2;

	do {
		printf("1. 제곱값 출력 프로그램\n");
		printf("2. 제곱근 출력 프로그램\n");
		printf("3. 프로그램 종료\n");

		printf("번호 선택(1~3): ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			printf("1. 제곱값 출력 프로그램\n");
			printf("실수 입력: ");
			scanf_s("%lf", &num1);

			printf("지수 실수 입력: ");
			scanf_s("%lf", &num2);
			result = pow(num1, num2);

			printf("%f의 %f승 결과: %f\n\n");
			break;

		case 2:
			printf("2. 제곱근 출력 프로그램\n");
			printf("실수 입력: ");
			scanf_s("%lf", &num1);

			result = sqrt(num1);
			printf("%f의 제곱근 결과: %f\n\n", num1, result);
			break;

		case 3:
			printf("프로그램을 종료합니다.\n");
			return 0;
			break;

		default:
			printf("선택 오류! 숫자 1,2,3중에서 선택하세요\n\n");
			continue;
			break;
		}

	} while (1);
	*/

	//ex08_06
	/*
	system("title system() 함수 사용 프로그램");
	printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

	system("dir");	//현재 디렉터리 정보 출력
	printf("\n\n아무 키나 누르면 프로그램이 종료됩니다.\n");
	printf("문자 입력: ");

	_getch();	//직접형 단일 문자 입력 함수
	system("cls");	//화면을 모두 지움
	*/

	//ex08_07
	/*
	system("title system() 함수 사용 프로그램");

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

	system("dir");
	printf("\n이 프로그램은 10초 후 종료됩니다.\n");
	Sleep(10000); //10초 동안 지연 시간 설정
	system("cls");	//화면을 모두 지움
	*/

	//사용자 정의 함수
	
	return 0;


}