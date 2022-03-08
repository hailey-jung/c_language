#include <stdio.h>
int sum() {
	int a = 10, b = 20, hap;
	hap = a + b;
	return hap;
}
int main(void) {
	//ex07_07
	/*
	int dan, cnt4, gob;

	for (dan = 2;dan <= 9;dan++) {
		for (cnt4 = 1;cnt4 <= 9;cnt4++) {
			gob = dan * cnt4;
			printf("%d x %d = %d", dan, cnt4, gob);
			printf(": 바깥쪽 for문 %d일 때, 안쪽 for문은 %d\n", dan, cnt4);
		}
		printf("\n");
	}
	*/
	/*
	//ex07_08
	int cnt, star;

	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d행: ", cnt);
		for (star = 1;star <= cnt;star++)
			printf("*");
		printf("\n");
	}
	*/
	//거꾸로
	/*
	int cnt, star;

	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d행: ", cnt);
		for (star = 5;star >= cnt;star--)
			printf("*");
		printf("\n");
	}
	*/

	//ex07_09
	/*
	int cnt, star;
	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d행: ", cnt);
		for (star = 5;star >= cnt;star--) {
			printf("*");
		}
		printf("\n");
	}
	*/
	//ex7_10
	/*
	int su, cnt, hap = 0;

re:
	printf("어디까지 합을 구할까요: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("음의 정수는 허용하지 않습니다.\n");
		printf("프로그램을 다시 시작합니다.\n");
		goto re;
	}
	else {
		cnt = 1;

		while (cnt <= su) {
			hap += cnt;
			printf("%d회 반복 누적합: %d\n", cnt, hap);
			cnt++;
		}
		printf("1부터 %d까지 누적합: %d\n", su, hap);
	}
	*/
	//ex7_11
	/*
	int su, cnt = 1, hap = 0;
	while (1) {
		printf("어디까지의 합을 구할까요: ");
		scanf_s("%d", &su);

		if (su < 0) {
			printf("음의 정수는 허용하지 않습니다. \n");
			printf("프로그램을 다시 시작합니다. \n");
			continue;
		}
		else {
			while (cnt <= su) {
				hap += cnt;
				printf("%d까지 누적합 ... %d\n", cnt, hap);

				if (hap > 50) {
					printf("누적합계 50을 초과하여 프로그램을 종료합니다.\n");
					break;
				}
				cnt++;
			}
			return 0;
		}
	}
	*/
	//ex07_12
	/*
	int cnt;
	cnt = 0;
	while (cnt < 30) {
		cnt++;
		printf("%3d", cnt);

		if ((cnt % 5) == 0) {
			printf("\n");
		}
	}
	*/

	//ex07_13
/*
	int su, cnt = 1, hap = 0;
	printf("어디까지 합을 구할까요: ");
	scanf_s("%d", &su);

	do {
		hap += cnt;
		printf("%d회 실행: 누적합은 %d\n", cnt, hap);
		cnt++;
	} while (cnt <= su);

	printf("1부터 %d까지 누적합: %d\n", su, hap);
	*/

	//ex07_14
	/*
	int jumsu, cnt = 1;
	char op;

	do {
		printf("<%d회 실행>\n", cnt);
		printf("프로그램을 시작하겠습니까? (Y/N): ");

		scanf_s("%c", &op, sizeof(op));

		if (op == 'N' || op == 'n') {
			printf("총 %d회 수행 후 종료합니다.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
		re_jumsu:
			printf("점수 입력: ");
			scanf_s("%d", &jumsu);

			if (jumsu <= 100 && jumsu >= 90) {
				printf("A학점\n\n");
			}
			else if (jumsu < 90 && jumsu >= 80) {
				printf("B학점\n\n");
			}
			else if (jumsu < 80 && jumsu >= 70) {
				printf("C학점\n\n");
			}
			else if (jumsu < 70 && jumsu >= 60) {
				printf("D학점\n\n");
			}
			else if (jumsu < 60 && jumsu >= 0) {
				printf("F학점\n\n");
			}
			else {
				printf("점수 %d는(은) 허용 구간이 아닙니다.\n");
				printf("점수를 다시 입력하세요.\n");
				goto re_jumsu;
			}

			getchar();
			cnt++;
		}
		else {
			printf("입력한 알파벳 %c는(은) 허용되지 않습니다.\n");
			printf("알파벳을 다시 입력하세요.\n\n");
			getchar(); //버퍼 내용 지우기
			cnt++;
		}
	} while (1);//무한 반복
	*/

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
	int result;

	printf("sum() 함수의 덧셈 연산\n");
	result = sum();

	printf("a = 10. b = 20일 때");
	printf("결과는 %d\n", result);
	
	return 0;
}