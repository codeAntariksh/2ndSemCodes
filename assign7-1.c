// reverseInteger(n)
#include<stdio.h>
int reverseInteger(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum*10+(n%10);
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("Reversed Integer = %d",reverseInteger(n));
	return 0;
}