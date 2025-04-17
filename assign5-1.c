// INPUT CHARACTER DETERMINATION OF SMALL/CAPITAL/DIGIT/SPECIAL SYMBOL
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>=48 && c<=57)
		printf("Digit");
	else if(c>=65 && c<=90)
		printf("Capital Letter");
	else if(c>=97 && c<=122)
		printf("Small Letter");
	else if(c<=31)
		printf("Wrong input");
	else
		printf("Special Symbol");
	return 0;
}