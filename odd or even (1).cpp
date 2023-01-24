#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values between a and b");
	scanf("%d%d",&a,&b);
	printf("\n odd numbers between %d and %d are:%d\n");
	while(a<=b)
	{
		if(a%2!=0)
	{
		printf("%d\n",a);
	}
	a++;
	}
	return 0;
}
