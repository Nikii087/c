#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no=54678,rem;
   while(no>0)
   {
       rem=no%10;
       printf("%d",rem);
       no=no/10;
   }
   return 0;

}
