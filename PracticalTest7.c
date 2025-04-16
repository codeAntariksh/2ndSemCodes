// INPUT STRING PALINDROME
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	char *p=s;
	for(int i=0;i<(strlen(s)/2);i++)
	{
		if(*(p+i)!=*(p+strlen(s)-i-1))
		{
			printf("Not a Palindrome");
			return 0;
		}
	}
	printf("Palindrome");
	return 0;
}