#include<stdio.h>
int main()
{
	int i,j,k,t,range;
	printf("enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=i+1;j<=range;j++)
		{
			t=(i*i)+(j*j);
			for(k=i+2;k<=range;k++)
			{
				if(t==k*k)
				printf("the pythagorean triplet is= %d,%d,%d\n",i,j,k);
				//printf("\n");
			}
		
		}
	}
	return 0;
}

