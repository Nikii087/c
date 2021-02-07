#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter year\t");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf ("%d  is a leap yr",year);
    }
    else if(year%100==0)
    {
        printf("%d  is not leap yr",year);
    }
    else if(year%4==0)
    {
        printf("%d year is leap yr",year);
    }
    else{
        printf(" %d Year is not leap yr",year);
    }
    return 0;
}
