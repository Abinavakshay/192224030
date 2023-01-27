#include<stdio.h>
int main()
{
	int a,primecount=0,i,j,prime=1;
	printf("enter the num:");
	scanf("%d",&a);
	while(a!=primecount)
	{
      {
		j=0;
		prime++;
	  }
	for(i=2;i<=(prime/2);i++)
	{
		if(prime%i==0)
		j=1;
	}
	if(j==0)
	{
		primecount++;
	}
}
printf("the next prime number after %d is %d",a,prime);
return 0;
}
