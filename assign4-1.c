/* STORE AN ARRAY OF INTEGER INPUT
1.MAX ELEMENT
2.MIN ELEMENT
3.AVG VALUE
4.SUM OF ODD NUMBERS IN AN ARRAY
5.ARRAY IN REVERSE
*/
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
	int max=a[0],min=a[0];
	int total_sum=0,sum_odd=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
		total_sum+=a[i];
		if(a[i]%2==1)
		{
			sum_odd+=a[i];
		}
	}
	printf("Max=%d\nMin=%d\nAverage=%d\nSum of odd numbers=%d\n",max,min,(total_sum/n),sum_odd);
	printf("Reversed array=\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}