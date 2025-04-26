// Number and Base Conversions
#include<stdio.h>
void Bin(int num) 
{
    int binary[32];
    int index=0;

    if(num==0) 
    {
        printf("0\n");
        return;
    }
    while(num>0) 
    {
        binary[index++]=num%2;
        num/=2;
    }
    // Print binary number in reverse
    for(int i=index-1;i>=0;i--) 
    {
        printf("%d",binary[i]);
    }
    printf("\n");
}
void Oct(int num)
{
	int oct[32];
    int index=0;
    if(num==0) 
    {
        printf("0\n");
        return;
    }
    while(num>0) 
    {
        oct[index++]=num%8;
        num/=8;
    }
    // Print octal number in reverse
    for(int i=index-1;i>=0;i--) 
    {
        printf("%d",oct[i]);
    }
    printf("\n");
}
void Hex(int num)
{
	char hex[32];
    int index=0;
    if(num==0) 
    {
        printf("0\n");
        return;
    }
    while(num>0) 
    {
        int remainder=num % 16;
        if (remainder<10)
            hex[index++]=remainder+'0'; // Convert to character '0'-'9'
        else
            hex[index++]=remainder-10+'A'; // Convert to character 'A'-'F'
        num/=16;
    }
    // Print hexadecimal number in reverse
    for(int i=index-1;i>=0;i--) 
    {
        printf("%c",hex[i]);
    }
    printf("\n");
}
int main()
{
	int n;
	int base; 
	scanf("%d %d",&n,&base);
	if(base==2)
	{
		Bin(n);
	}
	else if(base==8)
	{
		Oct(n);
	}
	else if(base==16)
	{
		Hex(n);
	}
	else 
	{
		printf("Wrong Base");
	}
	return 0;
}