#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=153,rem,res=0,temp;
    temp=no;
    while(no>0)
    {
        rem=no%10;
        res+=rem*rem*rem;
        no/=10;

    }
    if(res==temp)
    {
        printf("No is armstrong");
    }
    else
    {
        printf("Given no is not armstrong no");
    }
    return 0;



}
