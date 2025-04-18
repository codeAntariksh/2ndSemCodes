// Compute X^N
#include<stdio.h>
/*
int main()
{
	int X,N,res=1;
	scanf("%d %d",&X,&N);
	for(int i=1;i<=N;i++)
	{
		res=res*X;
	}
	printf("%d ^ %d = %d",X,N,res);
	return 0;
}
*/
// Remove White Spaces from a String
int main()
{
	char s[200];
	fgets(s,200,stdin);
	char r[200];
	char *p=s;
	int j=0;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			r[j]=*p;
			j++;
			p++;
		}
		else
		{ 
			p++;
			continue;
		}
	}
	r[j]='\0';
	printf("The New String will be = %s",r);
	return 0;
}






