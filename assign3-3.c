// COUNT NO OF DIGITS IN A GIVEN INTEGER
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	int a;      // TO HANDLE -VE NO. CASES
	if(n>=0)
	{
		a=n;
		while(a>0)
		{
			a/=10;
			count++;
		}
	}
	else
	{
		a=-n;
		while(a>0)
		{
			a/=10;
			count++;
		}
	}
	printf("The no of digits in %d are=%d",n,count);
	return 0;
}