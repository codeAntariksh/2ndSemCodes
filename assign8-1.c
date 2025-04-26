// Vowel or Consonant
// Not using condition of Special Characters or DIgits
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='E' || ch=='e' || ch=='i' || ch=='I' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
	{
		printf("Vowel");
	}	
	else printf("Consonant");
	return 0;
}