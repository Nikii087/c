#include <stdio.h>
#include <stdlib.h>


int main()
{
    int radius;
    float pi=3.14f, volume=0;
    printf("Enter the radius\n");
    scanf("%d",&radius);
    volume=(4/3)*pi*(radius*radius*radius);
   printf("Volume of sphere  %f",volume);

    return 0;
}
