#include <stdio.h>

int main(void) {
	//ex11_01
	/*
	int i_num = 3;
	char ch = 'A';
	float f_num = 21.5;
	//%d: ��ȣ���� %u: ��ȣ����
	printf("�ڷ����� �ּҸ� 10������ ���\n");
	printf("1. int�� ������ �ּ�: %u\n", &i_num);
	printf("2. char�� ������ �ּ�: %u\n", &ch);
	printf("3. float�� ������ �ּ�: %u\n", &f_num);

	printf("\n�ڷ����� �ּҸ� 16������ ���\n");
	printf("1. int�� ������ �ּ�: %X\n", &i_num);
	printf("2. char�� ������ �ּ�: %X\n", &ch);
	printf("3. float�� ������ �ּ�: %X\n", &f_num);
	*/

	//ex11_02
	/*
	int a = 8;
	int* pa = NULL;

	pa = &a;

	float b = 3.75;
	float* pb = &b;

	printf("�Ϲ� ���� a�� ��: %u\n", a);
	printf("�Ϲ� ���� a�� �ּҰ�: %u\n", &a);
	printf("������ pa�� �ּҰ�: %u\n\n", pa);

	printf("�Ϲ� ���� b�� ��: %.2f\n", b);
	printf("�Ϲ� ���� b�� �ּҰ�: %u\n", &b);
	printf("������ pb�� �ּҰ�: %u\n\n", pb);

	printf("NULL�� �ּҰ�: %u\n", NULL);
	*/

	//ex11_03
	/*
	int a = 300;
	int* pa = NULL; //NULL �ּҰ��� stdio.h ������Ͽ��� 0������ ����

	pa = &a;
	char yn;

	do {
		printf("\n �ּҰ� ���\n");
		printf("1. ������ pa�� �ּҰ�: %u\n", pa);
		printf("2. �Ϲ� ���� a�� �ּҰ�: %u\n", &a);
		printf("\n�����Ͱ� ��� \n");
		printf("1. *pa�� �����Ͱ�: %u\n", *pa);
		printf("2. �Ϲ� ���� a�� �����Ͱ�: %u\n", a);

	re_play:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�?(Y/N): ");
		scanf_s(" %c", &yn, sizeof(yn));

		switch (yn) {
		case 'Y': case 'y':
			continue;
			break;

		case 'N': case 'n':
			printf("���α׷��� �����մϴ�.\n");
			return 0;

		default:
			printf("\n%c��(��) ������� �ʴ� ���ĺ��Դϴ�!\n", yn);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto re_play;
			break;
		}
	} while (1);
	*/

	//ex11_04
	/*
	int a = 30;
	int* p = NULL;

	printf("a = 30, p = &a�� ��\n");
	
	p = &a;
	printf("1. ������ p�� �ּҰ�: %u\n", p);
	printf("2. �����Ͱ� ����Ű�� *p�� �����Ͱ�: %u\n", *p);
	printf("\n*p = 50�� ��\n");

	*p = 50;
	printf("1. ������ p�� �ּҰ�: %u\n", p);
	printf("2. �����Ͱ� ����Ű�� *p�� �����Ͱ�: %u\n", a);
	*/

	//ex11_05 //�������� �Ѿ
	/*
	int a = 103;
	int* pa = NULL;

	pa = &a;

	printf("int a = 103;\n");
	printf("int *pa = NULL\n;");
	printf("pa = &a;\n");

	if (pa != NULL) {
		printf("pa�� ��ȿ�� ������\n");
		printf("1. ������ pa�� �ּҰ�: %u\n", pa);
		printf("2. �����Ͱ� ����Ű�� *pa�� �����Ͱ�: %u\n", *pa);
	}
	else {
		printf("�ҽ��ڵ� pa = &a;�� �ּ�ó���� ���\n");
		printf("pa�� ��ȿ���� ���� ������!\n");
	}
	*/
	//ex11_06
	/*
	double a;//double a�� �ؾ� ��������
	double* pd = NULL;

	pd = &a;
	*pd = 13.8;

	if (pd != NULL) {
		printf("pd�� ��ȿ�� ������\n");
		printf("1. ������ pd�� �ּҰ�: %u\n", pd);
		printf("2. �����Ͱ� ����Ű�� *pd�� �����Ͱ�: %u\n", *pd);
	}
	*/

	//ex11_07
	/*
	char c;
	char* pc;
	pc = &c;

	int i;
	int* pi;
	pi = &i;

	double d;
	double* pd;
	pd = &d;

	printf("1. ������ ���� ������ ��� �� �ּҰ�\n");
	printf("char�� ������ �ּҰ�: %d\n", pc);
	printf("int�� ������ �ּҰ�: %d\n", pi);
	printf("double�� ������ �ּҰ�: %d\n", pd);

	*pc++;//1����
	*pi++;//4����
	*pd++;//8����

	printf("\n2. ������ *p++ ������ ���� �� �ּҰ�\n");
	printf("char�� ������ �ּҰ�: %d\n", pc);
	printf("int�� ������ �ּҰ�: %d\n", pi);
	printf("double�� ������ �ּҰ�: %d\n", pd);
	*/

	//ex11_08
	double d = 3.3058;
	double* pd;

	pd = &d;

	printf("1. ������ pd�� ���� ���� �� �ּҰ��� �����Ͱ�\n");
	printf("������ pd�� ���� �ּҰ�: %u\n", pd);
	printf("������ pd�� ���� �����Ͱ�: %f\n", d);

	(*pd)++; //�����Ͱ��� �����

	printf("\n2. ������ (*pd)++�� ���� ���� �� �ּҰ��� �����Ͱ�\n");
	printf("������ pd�� ���� �ּҰ�: %u\n", pd);
	printf("������ pd�� ���� �����Ͱ�: %f\n", d);


	return 0;
}