#include <stdio.h>

int main()
{
   int a,c,j,n;

   printf("Enter the number of star");
   scanf("%d",&n);

   j=n;

   for(a=1;a<=n;a++)
   {
      for(c =1;c<j;c++)
         printf(" ");

      j--;

      for(c=1;c<=2*a-1;c++)
         printf("*");

      printf("\n");
   }

   return 0;
}
