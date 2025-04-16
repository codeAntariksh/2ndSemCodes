// SWAP 2 NUMBERS
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);
	return 0;
}
// CAN ALSO BE DONE USING 3RD VARIABLE
/*
CODE=
int main()
{
	int a,b,temp;
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);
	return 0;
}
*/
