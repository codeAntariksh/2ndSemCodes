// Print all Perfect numbers between 2 to 2000
#include<stdio.h>
bool isperfect(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}

	}
	if(sum==n)
		return true;
	else return false;
}
int main()
{
	printf("The Perfect numbers between 2 to 2000 are=\n");
	for(int i=2;i<=2000;i++)
	{
		if(isperfect(i)==true)
			printf("%d\n",i);
	}
	return 0;
}