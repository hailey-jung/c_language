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

	printf("�迭> su[DT] = {1, 2, 3, 4, 5}\n");
	printf("����> su[3] = %d --> �迭 ��� ���纻 ����\n", su[3]);

	result = gob(su[3]);

	printf("��ȯ> gob(su[3]) ȣ�� ��� ��ȯ: %d\n", result);
	printf("�迭Ȯ��> su[3] ���� ��: %d \n", su[3]);
	*/

	//ex10_10
	/*
	int s_list[AL] = { 5, 4, 1,3,2 };
	int a, b, temp, sort;

	printf("�ʱ�> �迭 ���: 5 4 1 3 2\n");
	printf("\n[for ������ ���� ���� ����]\n");

	for (a = 0; a < AL - 1; a++) {
		sort = a;
		for (b = a + 1;b < AL;b++) {
			if (s_list[b] < s_list[sort]) {
				sort = b;
			}
		}

		//�������ķ� �� ġȯ
		temp = s_list[a];
		s_list[a] = s_list[sort];
		s_list[sort] = temp;
	}
	printf("���> �迭 ���: ");

	for (a = 0;a < AL;a++) {
		printf("%d", s_list[a]);
	}
	*/

	//ex10_11
	/*
	int s_list[AL] = { 5,4,1,3,2,7,6 };
	int input, cnt;
	char yn;

	printf("�ʱ�> �迭 ���: 5 4 1 3 2 7 6\n");

	while (1) {
		printf("���� �Է�(1 ~ 7): ");
		scanf_s("%d", &input);
		printf("\n");

		if (input < 1 || input > 7) {
			printf("�� �Է� ����!\n");
			printf("�ٽ� �Է��ϼ���.\n");
			continue;
		}

		for (cnt = 0;cnt < AL; cnt++) {
			if (s_list[cnt] == input) {
				printf("���� Ž�� Ƚ��: %dȸ\n", cnt + 1);
				printf("Ž�� ���� �ε���: %d\n", cnt);
			}
		}
	re_ch:

		printf("���α׷��� �ٽ� �����ұ��? (Y / N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n') {
			break;
		}
		else if (yn == 'Y' || yn == 'y') {
			continue;
		}
		else {
			printf("���ĺ� �Է� ����!\n");
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
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
		printf("\n�ʱ�> �迭 ���: 3 8 15 24 35 57 68 85");
		printf("���� �Է�: ");
		scanf_s("%d", &input);

		search = b_s(sno, AL, input);
		printf("Ž�� ���� �ε���: [%2d]\n", search);

	re_input:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y / N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n') {
			break;
		}
		else if (yn == 'Y' || yn == 'y') {
			continue;
		}
		else {
			printf("\n���ĺ� �Է� ����!\n");
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
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

	printf(">> ������ ���� ����: ����� ���� 140 �ʰ�\n");
	for (cnt = 0;cnt < R;cnt++) {
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = total / 5.0; //�ڷ��� �ڵ� ��ȯ

		printf("\n> ȯ�� #%d�� ����� ��� ���� �� ����\n", cnt + 1);
		printf("��ȣ: %d\n", sno++);
		printf("����: %.2f\n", avg);

		if (avg > 140) {
			printf("����: ������\n");
		}
		else {
			printf("����: ����\n");
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
		printf("> �л� %d�� ����� 3�� ���� ���� �Է�\n", row + 1);
		printf("%d.����: ", row + 1);

		scanf_s("%s", name, sizeof(name));

		for (col = 0;col < C;col++) {
			printf("����%d����: ", col + 1);
			scanf_s("%d", &st[row][col]);
		}
		printf("\n");

		total = st[row][0] + st[row][1] + st[row][2];
		avg = total / 3.0;

		printf("%s�� ���� ��Ȳ\n", name);
		printf("����: %d\n", total);
		printf("���: %.2f\n\n", avg);
	}
	printf("��ü %d���� ���� ó�� �� ���α׷� ����\n", row);
	*/
	
	//ex10_15
/*
	int tic[R][C];
	int row, col, p, g;

	printf("���� ���� Ƚ�� ����: �� 9ȸ\n\n");
	grid();

	//������ �ʱ�ȭ
	for (row = 0;row < R; row++) {
		for (col = 0;col < C;col++) {
			tic[row][col] = ' ';
		}
	}

	//����ڷκ��� ��ġ �Է¹޾� �����ǿ� ǥ��
	printf("���� ��� -> Ȧ�� Ƚ���� ¦�� Ƚ���� ����� ����\n");
	printf("[����� 1]: Ȧ�� Ƚ�� ���\n");
	printf("[����� 2]: ¦�� Ƚ�� ���\n");
	printf("[��� ����]: 0 ~ 2������ ���!\n\n");

	for (p = 0;p < 9;p++) {
	re_play:
		printf("%d��° �Է�: ", p + 1);
		scanf_s("%d %d", &row, &col);

		if (row < 0 || row>2 || col < 0 || col > 2) {
			printf("�Է� ����!\n");
			printf("�ٽ� �Է��ϼ���.\n\n");
			goto re_play;
		}
		tic[row][col] = (p % 2 == 0) ? 'O' : 'X';
	}
	printf("\n���� ���\n");

	for (g = 0;g < R;g++) {
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n", tic[g][0], tic[g][1], tic[g][2]);
	}
	printf("|---|---|---|\n\n");
	printf("�� %dȸ�� �����Ͽ����Ƿ� ���α׷� ����\n", p);
	*/

	//ex10_16
	int row, col, total = 0;
	int sale[Y][P] = {
		{2025, 353, 127, 83, 883},
		{2026, 387, 133, 89, 907},
		{2027, 439, 135, 92, 965}
	};

	printf("��ǻ��\t�����\tŰ����\t���콺\t����Ʈ����\n");

	for (row = 0;row < Y;row++) {
		for (col = 0;col < P;col++) {
			printf("%d\t", sale[row][col]);
		}
		printf("\n");
	}

	total = sum(sale);
	printf("3�Ⱓ �� �����: %d�鸸��\n", total);
	return 0;
}

int gob(int ta) {
	int mul;

	mul = ta * ta;

	printf("\n����� ���� �Լ� gob( ) ȣ��\n");
	printf("����> su[3] �迭 ����� ����: %d + %d = %d\n", ta, ta, mul);

	return mul;
}

int b_s(int list[], int n, int input) {
	int low = 0;
	int high = n - 1;
	int md, cnt = 1;

	while (low <= high) {
		printf("%dȸ ���� Ž��: [%d %d]\n", cnt, low, high);
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