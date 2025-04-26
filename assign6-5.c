#include<stdio.h>
void print_arr(int n,int a[][n])
{
	int arr[n][2];
	for(int i=0;i<n;i++)
	{
		int r_lar=a[i][0];
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>=r_lar)
			{
				r_lar=a[i][j];
			}
		}
		arr[i][0]=r_lar;
	}
	for(int j=0;j<n;j++)
	{
    	int c_lar=a[0][j];
   		for(int i=1;i<n;i++) 
       	{
        	if(a[i][j] >= c_lar)
            c_lar = a[i][j];
    	}
    	arr[j][1] = c_lar;
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	print_arr(n,a);
	return 0;
}