#include<stdio.h>
int main()
{
	int arr[50],num,x,y,temp;
	printf("enter the number:");
	scanf("%d",&num);
	for(x=0;x<num;x++)
	scanf("%d",&arr[x]);
	for(x=0;x<num-1;x++)
	{
		for(y=0;y<num-x-1;y++)
		{
			if (arr[y]>arr[y+1])
			{
				temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
	}
	printf("array after implementing the fn is:");
	for(x=0;x<num;x++)
	{
		printf("%d\n",arr[x]);
	}
	return 0;
}
