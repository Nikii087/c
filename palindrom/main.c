#include <stdio.h>
#include <stdlib.h>

int main()
{

    int no=121,res=0,rem,temp;
    temp=no;
    while(no>0)
    {
        rem=no%10;
        res=(res*10)+rem;
        no=no/10;

    }
    if(res==temp)
    {
        printf("No is pallindrom");
    }
    else
    {
          printf("No is not pallindrom");

    }





    return 0;
}
