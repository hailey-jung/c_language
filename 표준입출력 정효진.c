#include <stdio.h>
#include<stdlib.h>


int main(void) {

    printf("�ȳ��ϼ���.");
    printf("123\n");
    printf("456789\n");
    printf("123\n456789");

    printf("123 + 456789\n"); //���ڷ� �ν��� �ȵ�!

    printf("��~��~�� �Ҹ� �� �� : \a\a\a \n");
    printf("�׽�Ʈ ����\r �տ� �ִ� ���� ����ϴ�.\n");
    printf("[Tab] Ű ��� \t ������ ���� \t �����ϴ�.\n");
    printf("��ǻ�͸� \"���\"�մϴ�. ū����ǥ ���\n"); //�̽������� ���� Ȱ��

    printf("%d %d\n", 123, 456789);

    //printf("%d\n", 123, 456789); //���������ڰ� ��� �ϳ��� ��µ��� ����.

    //printf("%d + %d = %d\n", 123, 456789); //������ ���������ڿ��� �����Ⱚ�� ����

    system("title ������ �������� �ڸ��� ���� ����");

    printf("|%d|", 358);
    printf(": ������ �⺻ �ڸ���\n");

    printf("|%5d|", 358);
    printf(": ��ü �ڸ��� 5��\n");

    printf("|%05d|", 358);
    printf(": ��ü �ڸ����� 5���̰� ��ĭ�� 0���� ä��\n");

    system("title �Ǽ��� �������� �ڸ��� ���� ����");

    printf("|%f|", 358.123456);
    printf(": �Ǽ��� �⺻ �ڸ���\n");

    printf("|%.2f|", 358.123456);
    printf(": �Ҽ� ��° �ڸ����� ���\n");

    printf("|%6.1f|", 358.123456);
    printf(": ��ü 6�ڸ�, �Ҽ� ù° �ڸ����� ���\n");

    printf("|%-6.1f|", 358.123456);
    printf(": ��ü 6�ڸ�, ���� ����, �Ҽ� ù° �ڸ����� ���\n");

    printf("|%7.3f|", 358.123456);
    printf(": ��ü 7�ڸ�, �Ҽ� ��° �ڸ����� ���\n");

    printf("|%010.3f|", 358.123456);
    printf(": ��ü 10�ڸ�, ��ĭ�� 0���� ä��, �Ҽ� ù° �ڸ����� ���\n");

    system("title ���ڿ��� �������� �ڸ��� ���� ����");

    printf("|%s|, |Visual-C++|");
    printf("���ڿ��� �⺻ �ڸ���\n");

    printf("|%12s|, |Visual-C++|");
    printf("��ü 12�ڸ�, ������ ����\n");

    printf("|%-12s|, |Visual-C++|");
    printf("��ü 12�ڸ�, ���� ����\n");

    system("title ���� 1�� �Է� �� ���");

    int num;
    printf("1.���� �Է�:");
    scanf_s("%d", &num);
    printf("2.Ű����� �Է¹��� ���� %d�Դϴ�.\n", num);

    system("title ���� 2�� �Է¹޾� ���� ����");

    int num1, num2, hap; //������ ���� 3�� ����

    printf("1.ù ��° ���� �Է�: "); //ȭ�鿡 ���� ��� �� ù ��° ���� �Է�
    scanf_s("%d", &num1);

    printf("2. �� ��° ���� �Է�: ");//ȭ�鿡 ���� ��� �� �� ��° ���� �Է�
    scanf_s("%d", &num2);

    hap = num1 + num2;//���� ����
    printf("3.���� ���: %d + %d = %d\n", num1, num2, hap);

    system("title ���� 2�� �Է¹޾� ���� ����");

    int cha; //������ ���� 3�� ����

    printf("1.�� ���� ���� �Է�: "); //ȭ�鿡 ���� ��� �� �� ���� �ѹ��� �Է�
    scanf_s("%d %d", &num1, &num2);

    cha = num1 - num2;//���� ����
    printf("2.���� ���: %d - %d = %d\n", num1, num2, cha);

    system("title �迭�� ���ڿ� ó��");

    char ch;
    char str[10];

    printf("1.���� �Է�:");
    scanf_s("%c", &ch, sizeof(ch));   // �Է��� ���� ������ �޸� �ּҿ� ����

    printf("2.���ڿ� �Է�:");
    scanf_s("%s", str, sizeof(str));   //���ڿ��� &��ȣ ����

    printf("�Է��� ���� ���:%c\n", ch);
    printf("�Է��� ���ڿ� ���:%s\n", str);

    system("title �迭�� ���ڿ� ó��");

    char op1, op2;

    printf("���� 2���� �����ؼ� �Է��ϼ���.\n");
    printf("1. ù ���� ���� �Է�: ");
    scanf_s("%c", &op1, sizeof(op1));
    printf("2. �� ���� ���� �Է�: ");
    scanf_s("%c", &op2, sizeof(op2));

    printf("\n");
    printf("ù ��° ���� ���: %c\n", op1);
    printf("�� ���� ���� ���: %c\n", op2);

    system("title ���� �޸� ����");

    //char op1, op2;

    printf("���� 2���� �����ؼ� �Է��ϼ���.\n");
    printf("1.ù ��° ���� �Է�: ");
    scanf_s("%c", &op1, sizeof(op1));

    getchar();
    printf("2.�� ��° ���� �Է�: ");
    scanf_s("%c", &op2, sizeof(op2));

    printf("ù ���� ���� ���: %c\n", op1);
    printf("�� ��° ���� ���: %c\n", op2);

    system("title for ������ ���ĺ� �빮�� ���");
    int cnt; //�ݺ������� ����� ī��Ʈ ����
    printf("���ĺ� �빮�ڰ� ��µ˴ϴ�.\n");

    for (cnt = 65; cnt <= 90; cnt++) {
        printf("%c", cnt);
    }

    return 0;
    //hw1
    /*
    char id[8];
    char pw[10];

    printf("���̵�(�ִ� 8�ڸ�): ________\b\b\b\b\b\b\b\b");
    scanf_s("%s", id, sizeof(id));

    printf("�н�����(�ִ� 10�ڸ�): __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", pw, sizeof(pw));

    printf("\n�Է��� ���̵�� %s, �н������ %s�Դϴ�.\n", id, pw);
    */

    //hw2
    /*
    float su;

    printf("�Ҽ� ����° �ڸ����� �Ǽ� �Է�: ");
    scanf_s("%f", &su);

    printf("�Ҽ� ��° �ڸ����� ���: %.2f\n", su);
    printf("��ü �ڸ��� 6�ڸ�, �Ҽ� ù° �ڸ����� ���: %06.1f\n", su);

    return 0;
    */
}