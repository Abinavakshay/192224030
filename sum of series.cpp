#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	if(a%2!=0)
	{
		printf("%d\n",a);
	}
	return 0;
}
