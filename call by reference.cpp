#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,result;
	printf("enter the numbers:");
	scanf("%d %d",&n1,&n2);
	result=n1+n2;
	printf("\n addition of %d and %d is=%d",n1,n2,result);
	//return 0;
}
	int add(int*n1,int*n2)
	{
		int res;
		res=*n1+*n2;
		return res;
	}
