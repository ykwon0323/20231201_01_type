/**
 * 상수 
 * 변하지 않는 데이터 저장
 * 
 * 1 리터럴 상수 (literal constant)
 * 2 심볼릭 상수 (symbolic constant)
 * 
 * 
*/

/**
 * 리터럴 상수 (literal constant)
 * 데이터가 저장된 메모리 공간을 가리키는 이름을 가지고 있지 않음
 * 
 * C언어에서는 적절한 메모리 공간을 할당받기 위해 기본적으로 변수든 상수든 타입을 가짐
 * 리터럴 상수는 타입에 따라
 * 정수형 123
 * 실수형 3.14
 * 문자형 'a' 
 * 
*/

/**
 * 심볼릭 상수 (symbolic constant)
 * 선언과 동시에 초기화 되어야함
 * 심볼릭 상수는 const 또는 매크로를 사용
 * 
 * 
 * 
*/
//const
const int MAX = 10;

// #define 선행처리 지시자를 이용한 매크로 심볼릭 상수
#define MAX 10;

