//3���� 3���� ���ͷ� ������ ���ϴ� ���α׷�

#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 ��������
	double x1, y1 = 0.0;
	double x2, y2 = 0.0;
	double x3, y3 = 0.0;
	double dot_product = 0.0;

	//1 x������ x��ǥ �Է�
	printf("x1�� ���� �Է��ϼ���:");
	scanf_s("%lf", &x1);

	//2 x������ y��ǥ �Է�
	printf("y1�� ���� �Է��ϼ���:");
	scanf_s("%lf", &y1);

	//3 y������ x��ǥ �Է�
	printf("x2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &x2);

	//4 y������ y��ǥ �Է�
	printf("y2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &y2);

	//5 z������ x��ǥ �Է�
	printf("x3�� ���� �Է��ϼ���:");
	scanf_s("%lf", &x3);

	//6 z������ y��ǥ �Է�
	printf("y3�� ���� �Է��ϼ���:");
	scanf_s("%lf", &y3);

	//7 ���� ���� ���Ѵ�
	dot_product = x1 * y1 + x2 * y2 + x3 * y3;

	//8 ������� ����Ѵ�
	printf("���� ��� ������� = %lf \n", dot_product);

	return 0;
}