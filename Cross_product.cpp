//2���� 2���� ���ͷ� ������ ���ϴ� ���α׷�

#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 ��������
	double x1, y1 = 0.0;
	double x2, y2 = 0.0;
	double cross_product = 0.0;

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

	//7 ���� ���� ���Ѵ�
	cross_product = x1 * y2 - x2 * y1;

	//8 ������� ����Ѵ�
	printf("���� ��� ������� = %lf \n", cross_product);

	return 0;
}