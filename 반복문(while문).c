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
			printf(": �ٱ��� for�� %d�� ��, ���� for���� %d\n", dan, cnt4);
		}
		printf("\n");
	}
	*/
	/*
	//ex07_08
	int cnt, star;

	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d��: ", cnt);
		for (star = 1;star <= cnt;star++)
			printf("*");
		printf("\n");
	}
	*/
	//�Ųٷ�
	/*
	int cnt, star;

	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d��: ", cnt);
		for (star = 5;star >= cnt;star--)
			printf("*");
		printf("\n");
	}
	*/

	//ex07_09
	/*
	int cnt, star;
	for (cnt = 1;cnt <= 5;cnt++) {
		printf("%d��: ", cnt);
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
	printf("������ ���� ���ұ��: ");
	scanf_s("%d", &su);

	if (su < 0) {
		printf("���� ������ ������� �ʽ��ϴ�.\n");
		printf("���α׷��� �ٽ� �����մϴ�.\n");
		goto re;
	}
	else {
		cnt = 1;

		while (cnt <= su) {
			hap += cnt;
			printf("%dȸ �ݺ� ������: %d\n", cnt, hap);
			cnt++;
		}
		printf("1���� %d���� ������: %d\n", su, hap);
	}
	*/
	//ex7_11
	/*
	int su, cnt = 1, hap = 0;
	while (1) {
		printf("�������� ���� ���ұ��: ");
		scanf_s("%d", &su);

		if (su < 0) {
			printf("���� ������ ������� �ʽ��ϴ�. \n");
			printf("���α׷��� �ٽ� �����մϴ�. \n");
			continue;
		}
		else {
			while (cnt <= su) {
				hap += cnt;
				printf("%d���� ������ ... %d\n", cnt, hap);

				if (hap > 50) {
					printf("�����հ� 50�� �ʰ��Ͽ� ���α׷��� �����մϴ�.\n");
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
	printf("������ ���� ���ұ��: ");
	scanf_s("%d", &su);

	do {
		hap += cnt;
		printf("%dȸ ����: �������� %d\n", cnt, hap);
		cnt++;
	} while (cnt <= su);

	printf("1���� %d���� ������: %d\n", su, hap);
	*/

	//ex07_14
	/*
	int jumsu, cnt = 1;
	char op;

	do {
		printf("<%dȸ ����>\n", cnt);
		printf("���α׷��� �����ϰڽ��ϱ�? (Y/N): ");

		scanf_s("%c", &op, sizeof(op));

		if (op == 'N' || op == 'n') {
			printf("�� %dȸ ���� �� �����մϴ�.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
		re_jumsu:
			printf("���� �Է�: ");
			scanf_s("%d", &jumsu);

			if (jumsu <= 100 && jumsu >= 90) {
				printf("A����\n\n");
			}
			else if (jumsu < 90 && jumsu >= 80) {
				printf("B����\n\n");
			}
			else if (jumsu < 80 && jumsu >= 70) {
				printf("C����\n\n");
			}
			else if (jumsu < 70 && jumsu >= 60) {
				printf("D����\n\n");
			}
			else if (jumsu < 60 && jumsu >= 0) {
				printf("F����\n\n");
			}
			else {
				printf("���� %d��(��) ��� ������ �ƴմϴ�.\n");
				printf("������ �ٽ� �Է��ϼ���.\n");
				goto re_jumsu;
			}

			getchar();
			cnt++;
		}
		else {
			printf("�Է��� ���ĺ� %c��(��) ������ �ʽ��ϴ�.\n");
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			getchar(); //���� ���� �����
			cnt++;
		}
	} while (1);//���� �ݺ�
	*/

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
	int result;

	printf("sum() �Լ��� ���� ����\n");
	result = sum();

	printf("a = 10. b = 20�� ��");
	printf("����� %d\n", result);
	
	return 0;
}