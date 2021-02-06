#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a \t");
    scanf("%d",&a);
    printf("Enter b \t");
    scanf("%d",&b);

    //(a>b)?printf("%d is greater",a):printf("%d is greater",b);
    if(a>b)
    {
       printf("%d is greater",a);
    }
    else
    {
        printf("%d is greater",b);
    }
    return 0;

}
