#include<stdio.h>
int main()
{
	int row,column;
	scanf("%d %d",&row,&column);
	int a[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int largest=a[0][0];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(a[i][j]>largest)
				largest=a[i][j];
		}
	}
	printf("Largest=%d",largest);
	return 0;
}