#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0))
	{
		printf("%d is a leap year:");
	}
	else if((year%100==0))
	{
		printf("%d is not a leap year:");
	}
	else
	{
			printf("%d is not a leap year:");
			printf("\n the next leap year is %d",year+4);
	}
	return 0;
}
