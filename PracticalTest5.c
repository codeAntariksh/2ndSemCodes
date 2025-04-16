// Comparing 2 Strings without using strcmp()
#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	char *p=s1,*q=s2;
	scanf("%s",s1);
	scanf("%s",s2);
	while(*p!='\0' && *q!='\0')
	{
		if(*p!=*q)
		{
			printf("Not Identical");
			return 0;
		}
		p++;
		q++;
	}
	printf("Identical");
	return 0;
}