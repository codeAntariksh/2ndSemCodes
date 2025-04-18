// FIBONACCI
// Using Recursion for Time Complexity O(2^N)
#include<stdio.h>
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("The Fibonacci no series for %d terms are=\n",n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
	return 0;
}