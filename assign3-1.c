// GCD OF 2 INTEGERS
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("GCD is = %d",a);
	return 0;
}