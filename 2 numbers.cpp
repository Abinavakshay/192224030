#include <stdio.h>
#include<conio.h>
int main()
{
   int first, second,third,fourth,fifth, *p, *q,*r,*s,*t, sum;

   printf("Enter five integers to add\n");
   scanf("%d%d%d%d%d", &first, &second,&third,&fourth,&fifth);

   p = &first;
   q = &second;
   r = &third;
   s = &fourth;
   t = &fifth;

   sum = *p + *q+*r+*s+*t;

   printf("Sum of the array = %d\n", sum);

   return 0;
}
