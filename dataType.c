/**
 * 기본타입
 * - 정수형 : 부호를 가지고 있고, 소수 부분이 없는 수
 *  - unsigned 키워드 : 음수표현 X, 양수표현 2배
 * - 실수형 : 소수부나 지수가 있는 수를 가리키며, 정수보다 훨씬 더 넓은 표현 범위를 가짐
 *  - 기술적 한계로 실수를 표현하는 방식은 반드시 오차가 발생함
 * - 문자형
 *  - 컴퓨터(2진수인식) - 약속필요
 *  - 아스키코드(ASCII) = 7 비트 문자 인코딩
 *  - 128개의 문자를 표현 가능
 *  - 출력할 수 없는 33개 문자
 *  - 출력할 수 있는 52개의 영문 대소문자, 10개의 숫자, 32개의 특수문자, 1개의 공백문자
 * 
*/

/**
 * 정수형 데이터의 타입을 결정할 때
 * - 반드시 자신이 사용하고자하는 최대 크기를 고려해야함
 * Overflow 
 * - 해당 타입이 표현할 수 있는 최대 범위보다 큰 수 를 저장할 때 발생
 * - 오버플로우 발생시 최상위비트(MSB)를 벗어난 데이터가 인접 비트를 덮어쓰므로, 잘못된 결과 얻을 수 있음
 * Underflow
 * - 최소범위보다 작은 수를 저장할 때 발생
 * 
*/
