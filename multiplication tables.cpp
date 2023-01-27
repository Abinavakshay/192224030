#include<stdio.h>
int main()
{
	int m,i,j,n;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=100;j++)
		{
			m=i*j;
			printf("%d*%d=%d\n",i,j,m);
		}
	}
	return 0;
}
