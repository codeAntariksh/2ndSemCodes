// COPY DATA ITEM FROM 1 TO OTHER ARRAY
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("Copied Array=\n");
		for(int i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}