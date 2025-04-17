// DELETE ELEMENT FROM SPECIFIED LOCATION
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int element;
	scanf("%d",&element);
	int b[n-1];
	int key;
	for(int i=0;i<n;i++)
	{
		if(a[i]==element)
			{
				key=i;
			}
	}
	for(int i=0;i<key;i++)
	{
		b[i]=a[i];
	}
	for(int i=key+1;i<n;i++)
	{
		b[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		printf("%d\n",b[i]);	
	}
	return 0;
}