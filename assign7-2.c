// stringLength(char src[])
#include<stdio.h>
int stringLength(char src[])
{
	int count=0;
	char *p=src;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char src[200];
	scanf("%s",src);
	printf("The String Length is %d",stringLength(src));
	return 0;
}