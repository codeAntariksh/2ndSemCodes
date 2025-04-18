// REVERSING A STRING
#include <stdio.h>
#include <string.h>
void swap(char *s1,char *s2)
{
    char temp=*s1;
    *s1=*s2;
    *s2=temp;
}

void reverse(char s[])
{
    int size=strlen(s);
    int i=0;
    while(i<size/2)
    {
        swap(&s[i],&s[size-i-1]);
        i++;
    }
}

int main()
{
    char s[200];
    fgets(s,200,stdin);
    reverse(s);
    printf("Reversed String:%s\n",s);
    return 0;
}
