#include <stdio.h>
#include<conio.h>
int main() 
{
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows;++i, k = 0) 
   {
      for (space = 1; space <= rows - i; ++space) 
	  {
         printf("  ");
      }
      while (k != 2 * i - 1) 
	  {
         printf("1 ");
         printf("1\2");
         printf("1\2\3");
         printf("1\2\3\4");
         printf("1\2\3\4\5");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

