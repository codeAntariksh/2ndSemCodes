// PRINT NAME N TIMES
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char s[100];
	scanf("%s",s);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",s);
	}
	return 0;
}