#include <stdio.h>
#define DT 5
#define AL 8
#define N 20
#define R 3
#define C 3
#define Y 3
#define P 5
int gob(int ta);
int b_s(int list[], int n, int input);
void grid();
int sum(int sale[Y][P]);

int main() {
	//ex10_09
	/*
	int su[DT] = { 1,2,3,4,5 };
	int result;

	printf("배열> su[DT] = {1, 2, 3, 4, 5}\n");
	printf("전달> su[3] = %d --> 배열 요소 복사본 전달\n", su[3]);

	result = gob(su[3]);

	printf("반환> gob(su[3]) 호출 결과 반환: %d\n", result);
	printf("배열확인> su[3] 저장 값: %d \n", su[3]);
	*/

	//ex10_10
	/*
	int s_list[AL] = { 5, 4, 1,3,2 };
	int a, b, temp, sort;

	printf("초기> 배열 요소: 5 4 1 3 2\n");
	printf("\n[for 문으로 선택 정렬 수행]\n");

	for (a = 0; a < AL - 1; a++) {
		sort = a;
		for (b = a + 1;b < AL;b++) {
			if (s_list[b] < s_list[sort]) {
				sort = b;
			}
		}

		//선택정렬로 값 치환
		temp = s_list[a];
		s_list[a] = s_list[sort];
		s_list[sort] = temp;
	}
	printf("결과> 배열 요소: ");

	for (a = 0;a < AL;a++) {
		printf("%d", s_list[a]);
	}
	*/

	//ex10_11
	/*
	int s_list[AL] = { 5,4,1,3,2,7,6 };
	int input, cnt;
	char yn;

	printf("초기> 배열 요소: 5 4 1 3 2 7 6\n");

	while (1) {
		printf("숫자 입력(1 ~ 7): ");
		scanf_s("%d", &input);
		printf("\n");

		if (input < 1 || input > 7) {
			printf("값 입력 오류!\n");
			printf("다시 입력하세요.\n");
			continue;
		}

		for (cnt = 0;cnt < AL; cnt++) {
			if (s_list[cnt] == input) {
				printf("순차 탐색 횟수: %d회\n", cnt + 1);
				printf("탐색 성공 인덱스: %d\n", cnt);
			}
		}
	re_ch:

		printf("프로그램을 다시 시작할까요? (Y / N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n') {
			break;
		}
		else if (yn == 'Y' || yn == 'y') {
			continue;
		}
		else {
			printf("알파벳 입력 오류!\n");
			printf("알파벳을 다시 입력하세요.\n");
			goto re_ch;
		}
	}
	*/

	//ex10_12
	/*
	int sno[AL] = { 3,8,15,24,35,57,68,85 };
	int input, search;
	char yn;

	do {
		printf("\n초기> 배열 요소: 3 8 15 24 35 57 68 85");
		printf("숫자 입력: ");
		scanf_s("%d", &input);

		search = b_s(sno, AL, input);
		printf("탐색 성공 인덱스: [%2d]\n", search);

	re_input:
		printf("프로그램을 다시 실행하겠습니까? (Y / N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n') {
			break;
		}
		else if (yn == 'Y' || yn == 'y') {
			continue;
		}
		else {
			printf("\n알파벳 입력 오류!\n");
			printf("알파벳을 다시 입력하세요.\n");
			goto re_input;
		}
	} while (1);
	
	*/
	//ex10_13
/*
	int cnt, sno= 203012101, total = 0;
	float avg;
	int bd[R][C] = {
		{135,150,148,160,153},
		{115,120,123,121,112},
		{132,129,128,133,130} 
	};

	printf(">> 고혈압 판정 기준: 수축기 혈압 140 초과\n");
	for (cnt = 0;cnt < R;cnt++) {
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = total / 5.0; //자료형 자동 변환

		printf("\n> 환자 #%d의 수축기 평균 혈압 및 판정\n", cnt + 1);
		printf("번호: %d\n", sno++);
		printf("혈압: %.2f\n", avg);

		if (avg > 140) {
			printf("판정: 고혈압\n");
		}
		else {
			printf("판정: 정상\n");
		}
	}
	*/
	//ex10_14
/*
	int row, col, total = 0;
	float avg;
	char name[N];
	int st[R][C];

	for (row = 0;row < R;row++) {
		printf("> 학생 %d의 성명과 3개 과목 점수 입력\n", row + 1);
		printf("%d.성명: ", row + 1);

		scanf_s("%s", name, sizeof(name));

		for (col = 0;col < C;col++) {
			printf("과목%d점수: ", col + 1);
			scanf_s("%d", &st[row][col]);
		}
		printf("\n");

		total = st[row][0] + st[row][1] + st[row][2];
		avg = total / 3.0;

		printf("%s의 성적 현황\n", name);
		printf("총점: %d\n", total);
		printf("평균: %.2f\n\n", avg);
	}
	printf("전체 %d명의 성적 처리 후 프로그램 종료\n", row);
	*/
	
	//ex10_15
/*
	int tic[R][C];
	int row, col, p, g;

	printf("게임 실행 횟수 제한: 총 9회\n\n");
	grid();

	//게임판 초기화
	for (row = 0;row < R; row++) {
		for (col = 0;col < C;col++) {
			tic[row][col] = ' ';
		}
	}

	//사용자로부터 위치 입력받아 게임판에 표시
	printf("게임 요령 -> 홀수 횟수와 짝수 횟수로 상대편 구분\n");
	printf("[사용자 1]: 홀수 횟수 사용\n");
	printf("[사용자 2]: 짝수 횟수 사용\n");
	printf("[허용 범위]: 0 ~ 2까지만 허용!\n\n");

	for (p = 0;p < 9;p++) {
	re_play:
		printf("%d번째 입력: ", p + 1);
		scanf_s("%d %d", &row, &col);

		if (row < 0 || row>2 || col < 0 || col > 2) {
			printf("입력 오류!\n");
			printf("다시 입력하세요.\n\n");
			goto re_play;
		}
		tic[row][col] = (p % 2 == 0) ? 'O' : 'X';
	}
	printf("\n게임 결과\n");

	for (g = 0;g < R;g++) {
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n", tic[g][0], tic[g][1], tic[g][2]);
	}
	printf("|---|---|---|\n\n");
	printf("총 %d회를 실행하였으므로 프로그램 종료\n", p);
	*/

	//ex10_16
	int row, col, total = 0;
	int sale[Y][P] = {
		{2025, 353, 127, 83, 883},
		{2026, 387, 133, 89, 907},
		{2027, 439, 135, 92, 965}
	};

	printf("컴퓨터\t모니터\t키보드\t마우스\t소프트웨어\n");

	for (row = 0;row < Y;row++) {
		for (col = 0;col < P;col++) {
			printf("%d\t", sale[row][col]);
		}
		printf("\n");
	}

	total = sum(sale);
	printf("3년간 총 매출액: %d백만원\n", total);
	return 0;
}

int gob(int ta) {
	int mul;

	mul = ta * ta;

	printf("\n사용자 정의 함수 gob( ) 호출\n");
	printf("산출> su[3] 배열 요소의 제곱: %d + %d = %d\n", ta, ta, mul);

	return mul;
}

int b_s(int list[], int n, int input) {
	int low = 0;
	int high = n - 1;
	int md, cnt = 1;

	while (low <= high) {
		printf("%d회 이진 탐색: [%d %d]\n", cnt, low, high);
		md = (low + high) / 2;

		if (input == list[md]) {
			return md;
		}
		else if (input > list[md]) {
			low = md + 1;
		}
		else {
			high = md - 1;
		}

		cnt++;
	}
	return -1;
}

void grid() {
	printf("|---|---|---|\n");
	printf("| 1 | 2 | 3 |\n");
	printf("|---|---|---|\n");
	printf("| 4 | 5 | 6 |\n");
	printf("|---|---|---|\n");
	printf("| 7 | 8 | 9 |\n");
	printf("|---|---|---|\n");
}

int sum(const int sale[Y][P]) {
	int a, b;
	int hap = 0;

	for (a = 0;a < Y;a++) {
		for (b = 0;b < P;b++) {
			hap += sale[a][b];
		}
	}
	return hap;
}