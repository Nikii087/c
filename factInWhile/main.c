#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1,fact=1,limit;
    printf("Enter limit\n");
    scanf("%d",&limit);

    while(no<=5)
    {
        fact=fact*no;
        printf("factorial-->%d",fact);
        no++;
    }

    return 0;
}
