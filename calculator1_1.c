#include <stdio.h> //printf 함수와 scanf_s 함수를 사용하기 위해서

int main()
{
	//연산자 저장 변수
	char operatorType;
	//피연산자 저장 변수
	int num1, num2;

	printf("첫 번째 정숫값을 입력 : ");
	//첫 번째 피 연산자를 입력 받음
	scanf_s("%d", &num1);
	//연산자와 함께 입력된 엔터키 제거
	rewind(stdin);

	printf("연산자 입력 (+,-,*,/ 가능) : ");
	//연산자를 입력 받는다.
	scanf_s("%c", &operatorType, 1);
	//연산자와 함께 입력된 엔터키 제거
	rewind(stdin);

	printf("두 번째 정숫값을 입력 : ");
	//두 번째 피연산자를 입력 받는다.
	scanf_s("%d", &num2);

	// 1. switch 구문으로 작성
	switch (operatorType)
	{
		case '+': //덧셈 연산
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
			break;
		case '-': //뺄셈 연산
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
			break;
		case '*': //곱셈 연산
			printf("%d * %d = %d \n", num1, num2, num1 * num2);
			break;
		case '/': //나눗셈 연산(분모가 0인 경우 오류발생)
			if (num2 == 0) printf("오류 발생. 0으로 나눌 수 없습니다. \n");
			else printf("%d / %d = %.3f \n", num1, num2, num1 / (double)num2);
			break;
	}
	return 0;
}