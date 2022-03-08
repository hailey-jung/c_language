#include <stdio.h>
#include<stdlib.h>


int main(void) {
	
	//ex06_01
	int input_num;

	printf("정수 입력: ");
	scanf_s("%d", &input_num);

	if (input_num > 0) {
		printf("입력한 정수 %d는(은) 양의 정수입니다.\n", input_num);
		//printf("조건문은 참입니다.\n"); 조건문 안에 있으면 조건 만족해야지만 실행됨
	}
	//ex06_02
	printf("조건문은 참입니다.\n"); //조건이 거짓이어도 실행됨
	
	//ex06_04

	int input_num2, result;

	printf("정수 입력: ");
	scanf_s("%d", &input_num2);
	result = input_num2 % 2;

	if (result != 0) {//나머지가 0이면 짝수
		printf("입력한 정수 %d는(은) \"홀수\"입니다.\n", input_num2);
	}
	else {//나머지가 0이 아니면 1일 것이므로 홀수
		printf("입력한 정수 %d는(은) \"짝수\"입니다.\n", input_num2);
	}
	
	//ex06_05
	char alphabet;

	printf("알파벳 입력: ");
	scanf_s("%c", &alphabet, sizeof(alphabet));

	if (alphabet >= 'A' && alphabet <= 'Z') {//알파벳이 대문자일 때
		printf("입력한 알파벳 %c는(은) \"대문자\"이고\n", alphabet);
		printf("아스키코드값은 %d입니다.\n", alphabet);
	}
	else {//알파벳이 소문자일 때
		printf("입력한 알파벳 %c는(은) \"소문자\"이고\n", alphabet);
		printf("아스키코드값은 %d입니다.\n", alphabet);
	}

	//ex06_06
	int jumsu;
	char grade;

	printf("점수 입력: ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90) {
		grade = 'A';
	}
	else if (jumsu >= 80) {
		grade = 'B';
	}
	else if (jumsu >= 70) {
		grade = 'C';
	}
	else if (jumsu >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	printf("점수 등급: %c학점\n", grade);

	//ex06_07
	int jumsu2;
	char grade2;

	printf("점수 입력: ");
	scanf_s("%d", &jumsu2);

	if (jumsu2 > 100 || jumsu2 < 0) {
		printf("점수 허용 구간(0~100)이 아닙니다.\n");
		printf("프로그램을 다시 시작하세요.\n");
	}
	else {
		if (jumsu2 >= 90) {
			grade2 = 'A';
		}
		else if (jumsu2 >= 80) {
			grade2 = 'B';
		}
		else if (jumsu2 >= 70) {
			grade2 = 'C';
		}
		else if (jumsu2 >= 60) {
			grade2 = 'D';
		}
		else {
			grade2 = 'F';
		}
	}

	printf("입력한 점수: %d\n", jumsu2);

	//ex06_08
	int jumsu3;
	char grade3;

	printf("점수 입력: ");
	scanf_s("%d", &jumsu3);

	if (jumsu3 >= 90 && jumsu3 <= 100) {
		grade3 = 'A';
	}
	else if (jumsu3 >= 80 && jumsu3 < 90) {
		grade3 = 'B';
	}
	else if (jumsu3 >= 70 && jumsu3 < 80) {
		grade3 = 'C';
	}
	else if (jumsu3 >= 60 && jumsu3 < 70) {
		grade3 = 'D';
	}
	else if(jumsu3 >= 0 && jumsu3 < 60){
		grade3 = 'F';
	}
	else{
		printf("점수 허용 구간(0~100)이 아닙니다.\n");
		printf("프로그램을 다시 시작하세요.\n");
		return 0;
	}

	printf("입력한 점수 : %d\n", jumsu3);
	printf("점수 등급: %c학점\n", grade3);

	//ex06_09
	char blood;
	
	printf("A형: A 또는 a\n");
	printf("B형: B 또는 b\n");
	printf("AB형: C 또는 c\n");
	printf("O형: O 또는 o\n");
	printf("혈액형에 해당하는 알파벳 입력: ");
	scanf_s("%c", &blood, sizeof(blood));

	if (blood == 'A' || blood == 'a') {
		printf("부드럽고 섬세한 성향입니다.\n");
	}
	else if (blood == 'B' || blood == 'b') {
		printf("주위 변화에 민감한 성향입니다.\n");
	}
	else if (blood == 'C' || blood == 'c') {
		printf("예술적인 감각을 가진 성향입니다.\n");
	}
	else if (blood == 'O' || blood == 'o') {
		printf("활발하고 쾌활한 성향입니다.\n");
	}
	else {
		printf("알파벳은 대소문자 구별없이 A, B, C, O만 허용합니다.\n");
	}


	return 0;
}