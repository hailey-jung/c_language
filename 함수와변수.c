#include <stdio.h>

int Add();
int G_a;
int G_b;


int start = 7;

void Start();

void CRedit(int cash);


int main(void)
{
	//09_01
	/*
	int cnt;

	printf("1���� 10���� ���� �հ� ���\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0;
		sum += cnt;
	}
	printf("1���� 10���� ���� �հ� :%d\n", sum);
	*/

	//09_02
	/*
	int cnt;

	printf("1���� 10���� ���� �հ� ���\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0;
		sum += cnt;
		printf("1���� %d���� ���� �հ� : %d\n", cnt, sum);
	}
	*/

	//09_03
	/*
	int cnt, sum = 0;

	printf("1���� %d���� ���� �հ� ���\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		sum += cnt;
		printf("1���� %d���� ���� �հ� : %d\n", cnt, sum);
	}
	*/

	//09_04
	/*
	int sum = 0;
	G_a = 10;
	G_b = 20;

	printf("����> G_a = 10, G_b = 20�� �� ���� ���� ���\n");
	printf("\n[main( ) �Լ� ����]\n");
	printf("ȣ��> ���� ���� ���� Add( ) �Լ� ȣ��\n");
	sum = Add();

	printf("\n[main( ) �Լ� ����]|n");
	printf("ȸ��> Add( ) �Լ��κ��� ���� ���� ��� ��ȯ\n");
	printf("���> ���� ���� ��� : %d + %d = %d\n", G_a, G_b, sum);
	*/


	//09_05
	/*
	int start = 8;

	printf("���� ���� ���� : star = 7\n");
	printf("���� ���� ���� : star = 8\n");
	printf("���> star = % d\n", star);
	*/

	//09_06
	/*
	printf("Start( ) �Լ� 3ȸ ȣ�� ���\n");
	Start();
	Start();
	Start();
	*/

	//09_07
	/*
	int cnt, cash = 0;

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("<%dȸ ����>\n", cnt);
		printf("���� : ");
		scanf_s("%d", &cash);

		printf("�Ա�\t\t���\t\t�ܾ�\n");
		CRedit(cash);
	}

	printf("\n�� %dȸ ���� �� ���α׷� ����\n", cnt - 1);
	*/

	//09_08



	return 0;
}



int Add()
{
	int hap = 0;
	hap = G_a + G_b;

	printf("[Add( ) �Լ� ����]\n");
	printf("����> ���� 2���� ���� ���� ����\n");

	return hap;
}

void Start()
{
	static int s_cnt = 0;
	int a_cnt = 0;

	printf("���� ���� = %d\t ���� ���� = %d\n", s_cnt, a_cnt);
	s_cnt++;
	a_cnt++;
}



void CRedit(int cash)
{
	static int balance = 0;

	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf("\t\t%d\t\t", -cash);

	balance += cash;
	printf("%d\n, balance)");
}




