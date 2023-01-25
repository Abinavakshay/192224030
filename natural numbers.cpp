#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	printf("the natural numbers between %d and %d are:",a,b);
	while(a<=b)
	{
		printf("%d\n");
		a++;
	}
	}
