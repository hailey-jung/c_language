#include <stdio.h>

int main(void) {
	//ex06_10
	/*
	char season;

	printf("��: A �Ǵ� a\n");
	printf("����: S �Ǵ� s\n");
	printf("����: D �Ǵ� d\n");
	printf("�ܿ�: F �Ǵ� f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է�: ");
	scanf_s("%c", &season, sizeof(season));

	switch (season) {
	case 'A':
	case 'a':
		printf("������ ����: ��\n");
		printf("�޽���: ������ �һ��ϴ� ����\n");
		break;

	case 'S':
	case 's':
		printf("������ ����: ����\n");
		printf("�޽���: �ÿ��� ����� ���� ����\n");
		break;

	case 'D':
	case 'd':
		printf("������ ����: ����\n");
		printf("�޽���: ��İ� ������ ǳ���� ����\n");
		break;

	case 'F':
	case 'f':
		printf("������ ����: �ܿ�\n");
		printf("�޽���: ���Ͼ� ���� ���� ��Ű�� ����\n");
		break;

	default:
		printf("������ ����: ����!!\n");
		printf("���ĺ��� ��� ���� ���� ���� A, S, D, F�� ���˴ϴ�.\n");
		break;
	}
	*/

	//ex06_11
	/*
	int jumsu, mok;
	char grade;

	printf("A����: 90�� �̻� 100�� ����\n");
	printf("B����: 80�� �̻� 90�� �̸�\n");
	printf("C����: 70�� �̻� 80�� �̸�\n");
	printf("D����: 60�� �̻� 70�� �̸�\n");
	printf("F����: 0�� �̻� 60�� �̸�\n");
	printf("���� �Է�: ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("�Է��� ������ ��� ������ �ƴմϴ�\n");
		printf("���α׷��� �ٽ� �����ϼ���\n");
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
		printf("���: %c����\n", grade);
	}
	*/
	//ex06_12
	/*
	int num1, num2, hap, cha, gob;
	double na;
	char op;

	printf("���� 2���� ������ �Է�(��> 8 + 5) : ");

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
		printf("%d %c %d ������ ������� �ʽ��ϴ�.\n", num1, op, num2);
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		break;
	}
	*/

	//ex06_13
	int year, month, day;
	printf("������ �� �Է�(��> 2035 08): ");
	scanf_s("%d %d", &year, &month);

	if (month > 12 || month < 1) {
		printf("%d���� ������� �ʴ� �����Դϴ�\n", month);
		printf("���α׷��� �ٽ� �����ϼ���\n");
	}
	else {
		switch (month) {
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
				printf("����");
				day = 29;
			}
			else {
				printf("���");
				day = 28;
			}
			break;

		case 4: case 6: case 9: case 11:
			printf("���");
			day = 30;
			break;

		default:
			printf("���");
			day = 31;
		}
		printf(": %d�� %02d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, day);
	}
	//ex07_01, ex07_02
	/*
	int count;

	for (count = 1; count < 10; count++) {
		printf("%dȸ ���: �ȳ��ϼ���.\n", count);
	}

	printf("for�� ���� �� ī��Ʈ ������ ��:%d\n", count);

	//ex07_03
	int count2, hap = 0; //���� �հ����� ����
	for (count2 = 1;count2 <= 10;count2++) {
		hap += count2;
		printf("%d���� ������ ���: hap = %d\n", count2, hap);
	 }

	printf("1 + 2 + ~ + 9 + 10 = %d\n", hap);

	//ex07_04
	int cnt, sum = 0;

	for (cnt = 1;cnt<= 10;cnt+= 2) {
		sum += cnt;
		printf("%d���� Ȧ���� ������ ���: hap = %d\n", cnt, sum);
	}

	printf("1+3+~+9 Ȧ���� ������ = %d\n", sum);

	//ex07_05
	int cnt2, su, sum2 = 0;
	printf("������ 5�� ����� ���ұ��: ");
	scanf_s("%d", &su);

	for (cnt2 = 5;cnt2 <= su;cnt2 += 5) {
		sum2 += cnt2;
		printf("%d���� 5�� ��� ���� �հ� ���: %d\n", cnt2, sum2);
	}
	printf("%d���� 5�� ��� ���� �հ� = %d\n", su, sum2);
	*/
	//ex07_06
	/* //������
	int dan, cnt3, gob;

replay:
	printf("�˰���� ������(2~99) �Է�: ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("����ϴ� ������ ������ �ƴմϴ�\n");
		printf("���α׷��� �ٽ� �����Ͻʽÿ�\n");
		goto replay;
	}
	else {
		for (cnt3 = 1;cnt3 <= 9;cnt3++) {
			gob = dan * cnt3;
			printf("%d x %d = %d\n", dan, cnt3, gob);
		}
		printf("%d���� ����߽��ϴ�.\n", dan);
	}
	*/
	//������
	/*
	int dan, cnt3, gob;

replay:
	printf("�˰���� ������(2~99) �Է�: ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("����ϴ� ������ ������ �ƴմϴ�\n");
		printf("���α׷��� �ٽ� �����Ͻʽÿ�\n");
		goto replay;
	}
	else {
		for (cnt3 = 9;cnt3 >= 1;cnt3--) {
			gob = dan * cnt3;
			printf("%d x %d = %d\n", dan, cnt3, gob);
		}
		printf("%d���� ����߽��ϴ�.\n", dan);
	}
	*/

	


	return 0;
}