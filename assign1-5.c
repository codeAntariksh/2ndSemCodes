// COMPUTE AREA AND CIRCUMFERENCE OF A CIRCLE USING RADIUS
#include<stdio.h>
int main()
{
	float radius;
	scanf("%f",&radius);
	float area,cir;
	area=3.141592653*radius*radius;
	cir=2*3.141592653*radius;
	printf("Area=%f\n",area);
	printf("Circumference=%f",cir);
	return 0;
}