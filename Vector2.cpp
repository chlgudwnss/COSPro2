//3개의 3차원 벡터로 내적을 구하는 프로그램

#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 변수선언
	double x1, y1 = 0.0;
	double x2, y2 = 0.0;
	double x3, y3 = 0.0;
	double dot_product = 0.0;

	//1 x벡터의 x좌표 입력
	printf("x1의 값을 입력하세요:");
	scanf_s("%lf", &x1);

	//2 x벡터의 y좌표 입력
	printf("y1의 값을 입력하세요:");
	scanf_s("%lf", &y1);

	//3 y벡터의 x좌표 입력
	printf("x2의 값을 입력하세요:");
	scanf_s("%lf", &x2);

	//4 y벡터의 y좌표 입력
	printf("y2의 값을 입력하세요:");
	scanf_s("%lf", &y2);

	//5 z벡터의 x좌표 입력
	printf("x3의 값을 입력하세요:");
	scanf_s("%lf", &x3);

	//6 z벡터의 y좌표 입력
	printf("y3의 값을 입력하세요:");
	scanf_s("%lf", &y3);

	//7 내적 값을 구한다
	dot_product = x1 * y1 + x2 * y2 + x3 * y3;

	//8 결과값을 출력한다
	printf("내적 계산 결과값은 = %lf \n", dot_product);

	return 0;
}