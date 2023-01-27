#include<stdio.h>
int main()
{
	int arr[]={12,13,14,15,67},i,max;
	int length=sizeof(arr)/sizeof(arr[0]);
	//int max=arr[0];
	for(i=0;i<length;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("the largest number is=%d",max);
	return 0;
}
