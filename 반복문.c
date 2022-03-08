#include <stdio.h>

int main(void) {
	//ex06_10
	/*
	char season;

	printf("봄: A 또는 a\n");
	printf("여름: S 또는 s\n");
	printf("가을: D 또는 d\n");
	printf("겨울: F 또는 f\n");
	printf("좋아하는 계절에 해당하는 알파벳 입력: ");
	scanf_s("%c", &season, sizeof(season));

	switch (season) {
	case 'A':
	case 'a':
		printf("선택한 계절: 봄\n");
		printf("메시지: 만물이 소생하는 계절\n");
		break;

	case 'S':
	case 's':
		printf("선택한 계절: 여름\n");
		printf("메시지: 시원한 계곡을 즐기는 계절\n");
		break;

	case 'D':
	case 'd':
		printf("선택한 계절: 가을\n");
		printf("메시지: 곡식과 과일이 풍성한 계절\n");
		break;

	case 'F':
	case 'f':
		printf("선택한 계절: 겨울\n");
		printf("메시지: 새하얀 눈이 덮인 스키의 계절\n");
		break;

	default:
		printf("선택한 계절: 오류!!\n");
		printf("알파벳은 대소 문자 구별 없이 A, S, D, F만 허용됩니다.\n");
		break;
	}
	*/

	//ex06_11
	/*
	int jumsu, mok;
	char grade;

	printf("A학점: 90점 이상 100점 이하\n");
	printf("B학점: 80점 이상 90점 미만\n");
	printf("C학점: 70점 이상 80점 미만\n");
	printf("D학점: 60점 이상 70점 미만\n");
	printf("F학점: 0점 이상 60점 미만\n");
	printf("점수 입력: ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("입력한 점수는 허용 구간이 아닙니다\n");
		printf("프로그램을 다시 실행하세요\n");
	}
	else {
		mok = jumsu / 10;
		switch (mok) {
		case 10:
		case 9:
			grade = 'A';
			break;

		case 8:
			grade = 'B';
			break;

		case 7:
			grade = 'C';
			break;

		case 6:
			grade = 'D';
			break;

		default:
			grade = 'F';
			break;
		}
		printf("등급: %c학점\n", grade);
	}
	*/
	//ex06_12
	/*
	int num1, num2, hap, cha, gob;
	double na;
	char op;

	printf("정수 2개와 연산자 입력(예> 8 + 5) : ");

	scanf_s("%d %c %d", &num1, &op, sizeof(op), &num2);

	switch (op) {
	case '+':
		hap = num1 + num2;
		printf("%d %c %d = %d\n", num1, op, num2, hap);
		break;

	case '-':
		cha = num1 - num2;
		printf("%d %c %d = %d\n", num1, op, num2, cha);
		break;

	case '*':
		gob = num1 * num2;
		printf("%d %c %d = %d\n", num1, op, num2, gob);
		break;

	case '/':
		na = (float)num1 / num2;
		printf("%d %c %d = %f\n", num1, op, num2, na);
		break;

	default:
		printf("%d %c %d 연산은 허용하지 않습니다.\n", num1, op, num2);
		printf("프로그램을 다시 시작하세요.\n");
		break;
	}
	*/

	//ex06_13
	int year, month, day;
	printf("연도와 월 입력(예> 2035 08): ");
	scanf_s("%d %d", &year, &month);

	if (month > 12 || month < 1) {
		printf("%d월은 허용하지 않는 숫자입니다\n", month);
		printf("프로그램을 다시 시작하세요\n");
	}
	else {
		switch (month) {
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
				printf("윤년");
				day = 29;
			}
			else {
				printf("평년");
				day = 28;
			}
			break;

		case 4: case 6: case 9: case 11:
			printf("평년");
			day = 30;
			break;

		default:
			printf("평년");
			day = 31;
		}
		printf(": %d년 %02d월은 %d일까지 있습니다.\n", year, month, day);
	}
	//ex07_01, ex07_02
	/*
	int count;

	for (count = 1; count < 10; count++) {
		printf("%d회 출력: 안녕하세요.\n", count);
	}

	printf("for문 종료 후 카운트 변수의 값:%d\n", count);

	//ex07_03
	int count2, hap = 0; //누적 합계저장 변수
	for (count2 = 1;count2 <= 10;count2++) {
		hap += count2;
		printf("%d까지 누적합 출력: hap = %d\n", count2, hap);
	 }

	printf("1 + 2 + ~ + 9 + 10 = %d\n", hap);

	//ex07_04
	int cnt, sum = 0;

	for (cnt = 1;cnt<= 10;cnt+= 2) {
		sum += cnt;
		printf("%d까지 홀수의 누적합 출력: hap = %d\n", cnt, sum);
	}

	printf("1+3+~+9 홀수의 누적합 = %d\n", sum);

	//ex07_05
	int cnt2, su, sum2 = 0;
	printf("어디까지 5의 배수를 구할까요: ");
	scanf_s("%d", &su);

	for (cnt2 = 5;cnt2 <= su;cnt2 += 5) {
		sum2 += cnt2;
		printf("%d까지 5의 배수 누적 합계 출력: %d\n", cnt2, sum2);
	}
	printf("%d까지 5의 배수 누적 합계 = %d\n", su, sum2);
	*/
	//ex07_06
	/* //정방향
	int dan, cnt3, gob;

replay:
	printf("알고싶은 구구단(2~99) 입력: ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("허용하는 구구단 범위가 아닙니다\n");
		printf("프로그램을 다시 실행하십시오\n");
		goto replay;
	}
	else {
		for (cnt3 = 1;cnt3 <= 9;cnt3++) {
			gob = dan * cnt3;
			printf("%d x %d = %d\n", dan, cnt3, gob);
		}
		printf("%d단을 출력했습니다.\n", dan);
	}
	*/
	//역방향
	/*
	int dan, cnt3, gob;

replay:
	printf("알고싶은 구구단(2~99) 입력: ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("허용하는 구구단 범위가 아닙니다\n");
		printf("프로그램을 다시 실행하십시오\n");
		goto replay;
	}
	else {
		for (cnt3 = 9;cnt3 >= 1;cnt3--) {
			gob = dan * cnt3;
			printf("%d x %d = %d\n", dan, cnt3, gob);
		}
		printf("%d단을 출력했습니다.\n", dan);
	}
	*/

	


	return 0;
}