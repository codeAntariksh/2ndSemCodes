#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0)
	{
		return 0;
	}
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0,avg=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	int b[n+1];
	b[(n+1)/2]=avg;
	for(int i=0;i<(n+1)/2;i++)
	{
		b[i]=a[i];
	}
	for(int j=1+((n+1)/2);j<n+1;j++)
	{
		b[j]=a[j-1];
	}
	printf("The New Array will be=\n");
	for(int i=0;i<n+1;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}