// INTEGER TO STRING
#include<stdio.h>
int rev_no(int x)
{
	int rev=0;
	while(x>0)
	{
		rev=rev*10+(x%10);
		x/=10;
	}
	return rev;
}
void str(int x)
{
	if(x==0)
		printf("Zero ");
	if(x==1)
		printf("One ");
	if(x==2)
		printf("Two ");
	if(x==3)
		printf("Three ");
	if(x==4)
		printf("Four ");
	if(x==5)
		printf("Five ");
	if(x==6)
		printf("Six ");
	if(x==7)
		printf("Seven ");
	if(x==8)
		printf("Eight ");
	if(x==9)
		printf("Nine ");
	if(x==10)
		printf("Ten ");
}
int main()
{
	int s;
	scanf("%d",&s);
	int n,rem;
	n=rev_no(s);
	while(n>0)
	{
		rem=n%10;
		str(rem);
		n/=10;
	}
	return 0;
}





