// SET OF ALL PRIME NUMBERS BETWEEN 1 AND N(USER INPUT)
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int count=0;
	printf("The Prime no.s btw 1 and %d are=\n",N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
		{
			printf("%d ",i);
		}
		count=0;
	}
}