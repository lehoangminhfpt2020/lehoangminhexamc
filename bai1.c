#include <stdio.h>
#include <stdlib.h>

int main()
{
   int b, t, sum = 0, a;
   printf("Enter an integer\n");
   scanf("%d", &b);
   t = b;
   while (t != 0)
   {
      a         = t % 10;
      sum       = sum + a;
      t         = t / 10;
   }

   printf("Sum of the digits of %d = %d\n", b, sum);
   return 0;
}
