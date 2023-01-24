#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10]={10,20,30,40,50},i;
	int length=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	for(i=0;i<length;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("the largest element in the array is:%d",max);
    getch();
}
	
