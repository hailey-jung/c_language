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
//����� ���� �Լ�!
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
	printf("������ ���� ���ұ��: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("���� ������ ������� �ʽ��ϴ�.\n");
		printf("���α׷��� �ٽ� �����մϴ�.\n\n");
		goto re;
	}
	else {
		cnt = 1;

		do {
			if (hap > 1000) {
				printf("�������� 1000�� �ʰ��߽��ϴ�.\n");
				break;
			}
			else {
				hap += cnt;
			}
			printf("%dȸ �ݺ� ������: %d\n", cnt, hap);
			cnt++;
		} while (cnt <= su);

		printf("1���� %d���� ������: %d\n", cnt - 1, hap);
	}
	*/

	//while�� �ٲ� �ڵ�

	/*
	int su, cnt, hap = 0;
re:
	printf("������ ���� ���ұ��: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("���� ������ ������� �ʽ��ϴ�.\n");
		printf("���α׷��� �ٽ� �����մϴ�.\n\n");
		goto re;
	}
	else {
		cnt = 1;

		while (cnt <= su) {
			if (hap > 1000) {
				printf("�������� 1000�� �ʰ��߽��ϴ�.\n");
				break;
			}
			else {
				hap += cnt;
			}
			printf("%dȸ �ݺ� ������: %d\n", cnt, hap);
			cnt++;
		}

		printf("1���� %d���� ������: %d\n", cnt - 1, hap);
	}
	*/



	//ex07_16
	/*
	int cnt, su, hap = 0;

	printf("Ȧ���� continue���� ����Ͽ� �ǳʶݴϴ�.\n");
	printf("���� �Է�: ");

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
	printf("1���� %d���� ¦���� ���� �հ�: %d\n", su, hap);
	*/

	//ex07_17 //do while �� while�� ����� ó�� �κи� �Ű���ָ� �ȴ� �������� ����
	/*
	char op;
	do {
	reset:
		printf("���ĺ� �빮�� �Է�: ");
		scanf("%c", &op, sizeof(op));
		getchar();

		if (op >= 'A' && op <= 'Z') {
			printf("�Է��� ���ĺ� %c��(��) �빮�ڰ� �½��ϴ�.\n", op);
			printf("�����ϼ̽��ϴ�.\n");
			break;
		}
		else {
			printf("�Է��� ���ĺ� %c��(��) �빮�ڰ� �ƴմϴ�.\n", op);
			printf("���ĺ��� �ٽ� �ԏ��ϼ���.\n");
			goto reset;
		}
	} while (1);

	*/

	//ex07_18
	/*
	int result;

	printf("sum() �Լ��� ���� ����\n");
	result = sum();

	printf("a = 10. b = 20�� ��");
	printf("����� %d\n", result);
	*/

	//ex08_01
	/*
	int cnt = 0;
	printf("1~45 �߿��� ���� 6�� ���\n");
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

	printf("1~45 �߿��� ���� 6�� ���\n");
	srand((unsigned)time(NULL)); //�ð� ����ȭ

	printf("srand() ���: ");
	for (cnt = 1;cnt <= 6;cnt++) {
		printf(" %d ", 1 + (rand() % NUM)); //1~45���� ���
	}

	printf("\n");
	*/

	//ex08_03
	/*
	double result, target = 3.58; //double�� ����

	printf("double�� ���� target�� ��: 3.58\n");

	result = ceil(target);
	printf("�ø� �Լ� ceil() ��� ��� : %.2f\n", result);

	result = floor(target);
	printf("���� �Լ� floor() ��� ���: %.2f\n", result);
	*/

	//ex08_04
	/*
	double result, weight1, weight2;

	printf("�� ������ �Է�(kg): ");
	scanf_s("%lf", &weight1);
	printf("������ ������ �Է�(kg): ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2;
	printf("���� ���� %.2f - %.2f = %.2f\n", weight1, weight2, result);

	result = fabs(weight1 - weight2);
	printf("[����] %.2f - %.2f = %.2f\n", weight1, weight2, result);
	*/

	//ex08_05
	/*
	int choice;
	double result, num1, num2;

	do {
		printf("1. ������ ��� ���α׷�\n");
		printf("2. ������ ��� ���α׷�\n");
		printf("3. ���α׷� ����\n");

		printf("��ȣ ����(1~3): ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			printf("1. ������ ��� ���α׷�\n");
			printf("�Ǽ� �Է�: ");
			scanf_s("%lf", &num1);

			printf("���� �Ǽ� �Է�: ");
			scanf_s("%lf", &num2);
			result = pow(num1, num2);

			printf("%f�� %f�� ���: %f\n\n");
			break;

		case 2:
			printf("2. ������ ��� ���α׷�\n");
			printf("�Ǽ� �Է�: ");
			scanf_s("%lf", &num1);

			result = sqrt(num1);
			printf("%f�� ������ ���: %f\n\n", num1, result);
			break;

		case 3:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
			break;

		default:
			printf("���� ����! ���� 1,2,3�߿��� �����ϼ���\n\n");
			continue;
			break;
		}

	} while (1);
	*/

	//ex08_06
	/*
	system("title system() �Լ� ��� ���α׷�");
	printf("���� ���α׷��� �����ϴ� ���͸� ���� ���\n");

	system("dir");	//���� ���͸� ���� ���
	printf("\n\n�ƹ� Ű�� ������ ���α׷��� ����˴ϴ�.\n");
	printf("���� �Է�: ");

	_getch();	//������ ���� ���� �Է� �Լ�
	system("cls");	//ȭ���� ��� ����
	*/

	//ex08_07
	/*
	system("title system() �Լ� ��� ���α׷�");

	printf("���� ���α׷��� �����ϴ� ���͸� ���� ���\n");

	system("dir");
	printf("\n�� ���α׷��� 10�� �� ����˴ϴ�.\n");
	Sleep(10000); //10�� ���� ���� �ð� ����
	system("cls");	//ȭ���� ��� ����
	*/

	//����� ���� �Լ�
	
	return 0;


}