//Reverse every Word of Given String 
#include<stdio.h>
#include<stdlib.h>
void reverse(char *start,char *end)
{
    while(start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
void reverse_str(char str[])
{
    char *word_start=NULL;
    char *temp=str;
    while (*temp)
    {
        if((word_start==NULL)&&(*temp!=' '))
        {
            word_start=temp;
        }
        if (word_start&&(*(temp+1)==' '||*(temp+1)=='\0'))
        {
            reverse(word_start,temp);
            word_start=NULL;
        }
        temp++;
    }
}
int main()
{
	char s1[100];
	fgets(s1,100,stdin);
	reverse_str(s1);
	printf("Output=%s",s1);
	return 0;
}