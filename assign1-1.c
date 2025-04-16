// Accept N different Numbers and print them
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
	printf("The Numbers are=\n");
	for(int i=0;i<N;i++)
		{
			printf("%d\n",a[i]);
		}
	return 0;
}