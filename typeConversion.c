# include <stdio.h>
/**
 * 타입변환
 * 
 * [O]표현범위가 좁은 타입 -> 넓은 타입 
 * [X]표현범위가 넓은 타입 -> 좁은 타입
 * 
 * 타입변환 방식
 * 1 묵시적 타입 변환 (자동 타입 변환)
 * 2 명시적 타입 변환 (강제 타입 변환)
 * 
*/

/**
 * 묵시적 타입변환
 * =자동타입변환
 * =implicit type conversion
 * 
 * - C 컴파일러가 자동으로 실행해주는 타입 변환
 * - 대입 연산 시 연산자의 오른쪽에 존재하는 데이터의 타입이 연산자의 왼쪽에 존재하는 데이터의 타입으로 묵시적 타입 변환이 진행
 * - 산술 연산에서는 데이터의 손실이 최소화되는 방향으로 묵시적 타입 변환이 진행
 * 
*/


int main (void){

    // Implicit type conversion
    
    char ch = 200;
    int num01 = 3.14;
    double num02 = 5;

    printf(" ch에 저장된 값은 %d 입니다. \n", ch);
    // 1 char형 변수에 char형 변수 표현 범위 이상을 저장,
    // 2 전달된 데이터의 상위 비트가 자동으로 삭제 
    // 3 데이터 손상 
    // ch에 저장된 값은 -56 입니다. 
    printf("num01에 저장된 값은 %d입니다.\n", num01);
    // 소수부분 삭제되어 데이터 손실 
    // num01에 저장된 값은 3입니다.
    printf("num02에 저장된 값은 %f입니다.\n", num02);
    // 자동타입변환, 데이터 손실은 없음
    // num02에 저장된 값은 5.000000입니다.

    double result01 = 5 + 3.14;
    double result02 = 5.0f + 3.14;  

    printf("result01에 저장된 값은 %f입니다.\n", result01);
    printf("result02에 저장된 값은 %f입니다.\n", result02);  


    // explicit type conversion

    int num03 = 1;
    int num04 = 4;

    double result03 = num03/num04;
    double result04 = (double)num03/num04;

    printf("result03 저장된 값은 %f입니다.\n", result03);
    printf("result04 저장된 값은 %f입니다.\n", result04);


    return 0;
}