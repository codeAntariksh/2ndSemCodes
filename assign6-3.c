#include<stdio.h>
int subs(char s1[],char s2[])
{
	char *p=s1,*q=s2;
	while(*p!='\0')
	{
		if(*p==*q)
		{
			char *p_start=p;
			while(*q!='\0')
			{
				if(*q==*p)
				{
					q++;
					p++;
				}
				else break;
			}
			if(*q=='\0')
			{
				return 1;
			}
			else 
			{
				q=s2;
				p=p_start;
			}
		}
		p++;
	}
	return 0;
}
int main()
{
	char s1[200],s2[200];
	scanf("%s",s1);
	scanf("%s",s2);
	printf(" %d ",subs(s1,s2));
	return 0;
}