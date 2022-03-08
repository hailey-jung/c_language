#include <stdio.h>
#include<stdlib.h>


int main(void) {

    printf("안녕하세요.");
    printf("123\n");
    printf("456789\n");
    printf("123\n456789");

    printf("123 + 456789\n"); //숫자로 인식이 안됨!

    printf("삑~삑~삑 소리 세 번 : \a\a\a \n");
    printf("테스트 글자\r 앞에 있는 글을 덮어씁니다.\n");
    printf("[Tab] 키 사용 \t 일정한 간격 \t 좋습니다.\n");
    printf("컴퓨터를 \"사랑\"합니다. 큰따옴표 출력\n"); //이스케이프 문자 활용

    printf("%d %d\n", 123, 456789);

    //printf("%d\n", 123, 456789); //형식지정자가 적어서 하나가 출력되지 않음.

    //printf("%d + %d = %d\n", 123, 456789); //마지막 형식지정자에는 쓰레기값이 들어간다

    system("title 정수형 데이터의 자릿수 지정 형식");

    printf("|%d|", 358);
    printf(": 정수형 기본 자릿수\n");

    printf("|%5d|", 358);
    printf(": 전체 자릿수 5개\n");

    printf("|%05d|", 358);
    printf(": 전체 자릿수는 5개이고 빈칸은 0으로 채움\n");

    system("title 실수형 데이터의 자릿수 지정 형식");

    printf("|%f|", 358.123456);
    printf(": 실수형 기본 자릿수\n");

    printf("|%.2f|", 358.123456);
    printf(": 소수 둘째 자리까지 출력\n");

    printf("|%6.1f|", 358.123456);
    printf(": 전체 6자리, 소수 첫째 자리까지 출력\n");

    printf("|%-6.1f|", 358.123456);
    printf(": 전체 6자리, 왼쪽 정렬, 소수 첫째 자리까지 출력\n");

    printf("|%7.3f|", 358.123456);
    printf(": 전체 7자리, 소수 셋째 자리까지 출력\n");

    printf("|%010.3f|", 358.123456);
    printf(": 전체 10자리, 빈칸은 0으로 채움, 소수 첫째 자리까지 출력\n");

    system("title 문자열형 데이터의 자릿수 지정 형식");

    printf("|%s|, |Visual-C++|");
    printf("문자열형 기본 자릿수\n");

    printf("|%12s|, |Visual-C++|");
    printf("전체 12자리, 오른쪽 정렬\n");

    printf("|%-12s|, |Visual-C++|");
    printf("전체 12자리, 왼쪽 정렬\n");

    system("title 정수 1개 입력 후 출력");

    int num;
    printf("1.정수 입력:");
    scanf_s("%d", &num);
    printf("2.키보드로 입력받은 값은 %d입니다.\n", num);

    system("title 정수 2개 입력받아 덧셈 연산");

    int num1, num2, hap; //정수형 변수 3개 선언

    printf("1.첫 번째 정수 입력: "); //화면에 문장 출력 후 첫 번째 정수 입력
    scanf_s("%d", &num1);

    printf("2. 두 번째 정수 입력: ");//화면에 문장 출력 후 두 번째 정수 입력
    scanf_s("%d", &num2);

    hap = num1 + num2;//덧셈 연산
    printf("3.덧셈 결과: %d + %d = %d\n", num1, num2, hap);

    system("title 정수 2개 입력받아 뺄셈 연산");

    int cha; //정수형 변수 3개 선언

    printf("1.두 개의 정수 입력: "); //화면에 문장 출력 후 두 정수 한번에 입력
    scanf_s("%d %d", &num1, &num2);

    cha = num1 - num2;//뺄셈 연산
    printf("2.뺄셈 결과: %d - %d = %d\n", num1, num2, cha);

    system("title 배열로 문자열 처리");

    char ch;
    char str[10];

    printf("1.문자 입력:");
    scanf_s("%c", &ch, sizeof(ch));   // 입력한 문자 변수를 메모리 주소에 저장

    printf("2.문자열 입력:");
    scanf_s("%s", str, sizeof(str));   //문자열은 &기호 생략

    printf("입력한 문자 출력:%c\n", ch);
    printf("입력한 문자열 출력:%s\n", str);

    system("title 배열로 문자열 처리");

    char op1, op2;

    printf("문자 2개를 연속해서 입력하세요.\n");
    printf("1. 첫 번쨰 문자 입력: ");
    scanf_s("%c", &op1, sizeof(op1));
    printf("2. 두 번쨰 문자 입력: ");
    scanf_s("%c", &op2, sizeof(op2));

    printf("\n");
    printf("첫 번째 문자 출력: %c\n", op1);
    printf("두 번쨰 문자 출력: %c\n", op2);

    system("title 버퍼 메모리 비우기");

    //char op1, op2;

    printf("문자 2개를 연속해서 입력하세요.\n");
    printf("1.첫 번째 문자 입력: ");
    scanf_s("%c", &op1, sizeof(op1));

    getchar();
    printf("2.두 번째 문자 입력: ");
    scanf_s("%c", &op2, sizeof(op2));

    printf("첫 번쨰 문자 출력: %c\n", op1);
    printf("두 번째 문자 출력: %c\n", op2);

    system("title for 문으로 알파벳 대문자 출력");
    int cnt; //반복문으로 사용할 카운트 변수
    printf("알파벳 대문자가 출력됩니다.\n");

    for (cnt = 65; cnt <= 90; cnt++) {
        printf("%c", cnt);
    }

    return 0;
    //hw1
    /*
    char id[8];
    char pw[10];

    printf("아이디(최대 8자리): ________\b\b\b\b\b\b\b\b");
    scanf_s("%s", id, sizeof(id));

    printf("패스워드(최대 10자리): __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", pw, sizeof(pw));

    printf("\n입력한 아이디는 %s, 패스워드는 %s입니다.\n", id, pw);
    */

    //hw2
    /*
    float su;

    printf("소수 여섯째 자리까지 실수 입력: ");
    scanf_s("%f", &su);

    printf("소수 둘째 자리까지 출력: %.2f\n", su);
    printf("전체 자릿수 6자리, 소수 첫째 자리까지 출력: %06.1f\n", su);

    return 0;
    */
}