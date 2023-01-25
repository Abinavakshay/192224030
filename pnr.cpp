#include<stdio.h>
int main()
{
	int age;
	float pr,yr,rt,si;
	printf("enter the prin.amt");
	scanf("%f",&pr);
	printf("enter the year:");
	scanf("%f",&yr);
	printf("enter the roi:");
	scanf("%f",&rt);
	si=(pr*yr*rt/100);
	printf("the total amt of intresrt=%f",si);
	return 0;
}
