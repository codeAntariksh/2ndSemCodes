// DOING THE HARDER PART B>5x^3+4x^2y^2+4y^3+30
#include<stdio.h>
int main()
{
	char choice; // I for Integer and F for Float
	scanf("%c",&choice);
	if(choice=='I')
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int sum = 5*(x*x*x)+4*(x*x)*(y*y)+4*(y*y*y)+30;
		printf("Sum=%d",sum);
	}
	else if(choice=='F')
	{
		float x,y;
		scanf("%f %f",&x,&y);
		float sum = 5*(x*x*x)+4*(x*x)*(y*y)+4*(y*y*y)+30;
		printf("Sum=%f",sum);
	}
	else
	{
		printf("Wrong Character Input");
	}
	return 0;
}