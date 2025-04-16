// NUMBER +VE,-VE OR 0
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ch;
	if(n>0)
		ch=1;
	else if(n==0)
		ch=0;
	else
		ch=-1;
	switch(ch)
	{
	case 1: printf("POSITIVE");
		break;
	case -1: printf("NEGATIVE");
		break;
	case 0: printf("ZERO");
		break;
	default: printf("Wrong Entry");
		break;
	}
	return 0;
}