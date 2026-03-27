#include <stdio.h>

int main(void) {

    int num1, num2, res1; //정수형 변수 선언
    double res2; //실수형 변수 선언
    char op; //문자형 변수 선언 (1글자)
    char end;

    while (1) { //아래 로직들을 무한히 반복

        printf("첫 번째 숫자를 입력해 주세요: ");
        scanf_s("%d", &num1); //%d란 정수형 값을 의미 num1변수에 대입할 값을 입력받음

        printf("연산자 입력(+ - * /): ");
        scanf_s(" %c", &op); //%c란 문자형 값을 의미 op변수에 대입할 값을 입력받음

        printf("두 번째 숫자를 이력해 주세요: ");
        scanf_s("%d", &num2);

        switch (op) { //op값에 따른 다른 값을 출력하기 위한 조건문

        case '+': //op값에 '+'문자가 대입된 경우 아래 로직 실행
            res1 = num1 + num2; //res1변수에 num1 + num2의 값을 추가함
            //printf("%d", res1);
            break; //'+'일 때 실행되던 로직 종료
        case '-':
            res1 = num1 - num2;
            //printf("%d", res1);
            break;

        case '*':
            res1 = num1 * num2;
            //printf("%d", res1);
            break;

        case '/':
            res2 = (double)num1 / num2;
            //printf("%.2f", res2);
            break;

            //default: //위 모든 조건에 부합하지 않는 값 처리
                //printf("입력오류");
        }

        if (op == '+' || op == '-' || op == '*') { //op값에 따른 값 출력
            printf("%d", res1); //화면에 출력 %d라지에 res1값을 출력한다
        } else if (op == '/') { //위 조건에 부합하지 않고 이 조건에 부합하는 값이라면 아래 로직 실행
            printf("%.2f", res2); //화면에 출력 %.2f란 실수형 값 소수점 아래 2자리까지 출력하시오 %.2f자리에 res2값 출력
        } else { //위 모든 조건에 부합하지 않는 값 처리
            printf("입력오류");
        }
        
        printf("\n종료하시겠습니까?(y/n): ");
        scanf_s(" %c", &end);
        if (end == 'y' || end == 'Y') { //다음 조건을 만족한다면 아래 로직 실행
            printf("종료합니다.");
            break; //while 반복문을 종료
        } else if (end == 'n' || end == 'N') {
            printf("재개합니다.\n");
        }
    }

	return 0; //정상적으로 종료
}