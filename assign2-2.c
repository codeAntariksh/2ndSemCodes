// COMPUTE QUOTIENT AND REMAINDER OF AN INTEGER DIV
#include<stdio.h>
int main()
{
	int n,divisor;
	scanf("%d %d",&n,&divisor);
	if(divisor==0)
	{
		printf("Cannot be divided by 0");
		return 0;
	}
	int q,r;
	q=n/divisor;
	r=n%divisor;
	printf("Quotient=%d \nRemainder=%d",q,r);
	return 0;
}