// Vowel Count 
#include<stdio.h>
int main()
{
	int countA=0,countE=0,countI=0,countO=0,countU=0;
	char s[1000];
	fgets(s,1000,stdin);
	char *p=s;
	while(*p!='\0')
	{
		if(*p=='a' || *p=='A')
		{
			countA++;
		}	
		if(*p=='e' || *p=='E')
		{
			countE++;
		}	
		if(*p=='i' || *p=='I')
		{
			countI++;
		}	
		if(*p=='o' || *p=='O')
		{
			countO++;
		}	
		if(*p=='u' || *p=='U')
		{
			countU++;
		}	
		p++;
	}
	int sum=countA+countE+countI+countO+countU;
	printf("Total Vowel Count=%d\n",sum);
	printf("A=%d\n",countA);
	printf("E=%d\n",countE);
	printf("I=%d\n",countI);
	printf("O=%d\n",countO);
	printf("U=%d\n",countU);
	return 0;
}