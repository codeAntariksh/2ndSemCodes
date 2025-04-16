// CORRECT DATE
#include<stdio.h>
#include<stdbool.h>

bool leap(int yyyy)
{
	if((yyyy%100!=0 && yyyy%4==0) || yyyy%400==0)
		return true;
	else return false;
}

int main()
{
	int dd,mm,yyyy;
	scanf("%d %d %d",&dd,&mm,&yyyy);
	if(dd<1 || dd>31 || mm<1 || mm>12 || yyyy<1)
	{
		printf("Invalid Date");
		return 0;
	}
	if(mm==2)
	{
		if(leap(yyyy)==true)
		{
			if(dd>=1 && dd<=29)
				printf("Valid Date");
			else
			{
				printf("Invalid Date");
				return 0;
			}
		}
		if(leap(yyyy)==false)
		{
			if(dd>=1 && dd<=28)
				printf("Valid Date");
			else
			{
				printf("Invalid Date");
				return 0;
			}
		}
	}
	if(mm==4 || mm==6 || mm==9 || mm==11)
	{
		if(dd>=1 && dd<=30)
		{
			printf("Valid Date");
			return 0;
		}
		else
		{
			printf("Invalid Date");
			return 0;
		}
	}
	if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
	{
		if(dd>=1 && dd<=31)
		{
			printf("Valid Date");
			return 0;
		}
		else
		{
			printf("Invalid Date");
			return 0;
		}
	}
	return 0;
}