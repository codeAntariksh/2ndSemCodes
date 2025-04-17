// SORTING AN ARRAY
/* There are many Techniques to sort an array, 
Here we will be using 
Bubble Sort and Selection Sort*/
//Bubble Sort
void swap(int &x,int &y)
{
		int temp;
		temp=x;
		x=y;
		y=temp;
}
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
	/*for(int i=0;i<n-1;i++) //  Bubble Sort
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}*/
// Selection Sort
	for(int i=0;i<=n-2;i++)
	{
	int min=i;
	for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
	swap(a[min],a[i]);
	}
	printf("Sorted Array=\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}