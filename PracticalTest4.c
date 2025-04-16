//Lucas Number
#include<stdio.h>
int lucas(int n)
{
	if(n==1)
		return 2;
	if(n==2)
		return 1;
	else 
		return lucas(n-1)+lucas(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("The Lucas no series for %d terms are=\n",n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",lucas(i));
	}
	return 0;
}