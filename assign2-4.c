// GRADE OF N STUDENTS IN A SUBJECT
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<N;i++)
	{
		if(a[i]<50)
		{
			printf("Grade of Student %d=F\n",i+1);
		}
		if(a[i]>=50 && a[i]<60)
		{
			printf("Grade of Student %d=C\n",i+1);
		}
		if(a[i]>=60 && a[i]<70)
		{
			printf("Grade of Student %d=B\n",i+1);
		}
		if(a[i]>=70 && a[i]<80)
		{
			printf("Grade of Student %d=B+\n",i+1);
		}
		if(a[i]>=80 && a[i]<90)
		{
			printf("Grade of Student %d=A\n",i+1);
		}
		if(a[i]>=90 && a[i]<=100)
		{
			printf("Grade of Student %d=A+\n",i+1);
		}
		if(a[i]>100)
		{
			printf("Grade of Student %d is wrongly put\n",i+1);
		}
	}
	return 0;
}