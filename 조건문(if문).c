#include <stdio.h>
#include<stdlib.h>


int main(void) {
	
	//ex06_01
	int input_num;

	printf("���� �Է�: ");
	scanf_s("%d", &input_num);

	if (input_num > 0) {
		printf("�Է��� ���� %d��(��) ���� �����Դϴ�.\n", input_num);
		//printf("���ǹ��� ���Դϴ�.\n"); ���ǹ� �ȿ� ������ ���� �����ؾ����� �����
	}
	//ex06_02
	printf("���ǹ��� ���Դϴ�.\n"); //������ �����̾ �����
	
	//ex06_04

	int input_num2, result;

	printf("���� �Է�: ");
	scanf_s("%d", &input_num2);
	result = input_num2 % 2;

	if (result != 0) {//�������� 0�̸� ¦��
		printf("�Է��� ���� %d��(��) \"Ȧ��\"�Դϴ�.\n", input_num2);
	}
	else {//�������� 0�� �ƴϸ� 1�� ���̹Ƿ� Ȧ��
		printf("�Է��� ���� %d��(��) \"¦��\"�Դϴ�.\n", input_num2);
	}
	
	//ex06_05
	char alphabet;

	printf("���ĺ� �Է�: ");
	scanf_s("%c", &alphabet, sizeof(alphabet));

	if (alphabet >= 'A' && alphabet <= 'Z') {//���ĺ��� �빮���� ��
		printf("�Է��� ���ĺ� %c��(��) \"�빮��\"�̰�\n", alphabet);
		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alphabet);
	}
	else {//���ĺ��� �ҹ����� ��
		printf("�Է��� ���ĺ� %c��(��) \"�ҹ���\"�̰�\n", alphabet);
		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alphabet);
	}

	//ex06_06
	int jumsu;
	char grade;

	printf("���� �Է�: ");
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

	printf("���� ���: %c����\n", grade);

	//ex06_07
	int jumsu2;
	char grade2;

	printf("���� �Է�: ");
	scanf_s("%d", &jumsu2);

	if (jumsu2 > 100 || jumsu2 < 0) {
		printf("���� ��� ����(0~100)�� �ƴմϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
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

	printf("�Է��� ����: %d\n", jumsu2);

	//ex06_08
	int jumsu3;
	char grade3;

	printf("���� �Է�: ");
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
		printf("���� ��� ����(0~100)�� �ƴմϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		return 0;
	}

	printf("�Է��� ���� : %d\n", jumsu3);
	printf("���� ���: %c����\n", grade3);

	//ex06_09
	char blood;
	
	printf("A��: A �Ǵ� a\n");
	printf("B��: B �Ǵ� b\n");
	printf("AB��: C �Ǵ� c\n");
	printf("O��: O �Ǵ� o\n");
	printf("�������� �ش��ϴ� ���ĺ� �Է�: ");
	scanf_s("%c", &blood, sizeof(blood));

	if (blood == 'A' || blood == 'a') {
		printf("�ε巴�� ������ �����Դϴ�.\n");
	}
	else if (blood == 'B' || blood == 'b') {
		printf("���� ��ȭ�� �ΰ��� �����Դϴ�.\n");
	}
	else if (blood == 'C' || blood == 'c') {
		printf("�������� ������ ���� �����Դϴ�.\n");
	}
	else if (blood == 'O' || blood == 'o') {
		printf("Ȱ���ϰ� ��Ȱ�� �����Դϴ�.\n");
	}
	else {
		printf("���ĺ��� ��ҹ��� �������� A, B, C, O�� ����մϴ�.\n");
	}


	return 0;
}