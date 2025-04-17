// LINEAR SEARCH OF ELEMENT 45
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
	int key,value=45;
	for(int i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			key=i;
			printf("Key=%d",key);
			return 0;
		}
	}
	printf("Key Not Found");
	return 0;
}