#include <math.h>
#include <stdio.h>


void main()
{
	double angle_radian, angle_degree;

	double degree = 30;
	angle_radian = angle_degree * M_PI / 180;

	double cosine = cos(angle_radian);
	double sine = sin(angle_radian);
	double tangent = tan(angle_radian);

	printf("angle_radian : % 10\n", angle_radian);
	printf("cos : %10\n", angle_radian);
	printf("sin : %10\n", angle_radian);
	printf("tan : %10\n", angle_radian);




	

	

	return 0;
}