// Sum of first 20 natural no. using Recursion
#include<stdio.h>
int sum(int n)
{
	if(n>0)
	{return n+sum(n-1);}
}
int main()
{
	printf("Sum of first 20 natural no. is = %d",sum(20));
	return 0;
}