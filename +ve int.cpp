#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sum=0;
	printf("enter an positive integer:");
	scanf("%d",&a);
	while(a>0)
	{
		//a=a%10;
		sum=sum+a%10;
		a=a/10;
	}
	printf("the output of the following integer is =%d",sum);
	return 0;

}
