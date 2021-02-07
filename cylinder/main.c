#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius;
    float pi=3.14,height,volume=0;
    printf("Enter the radius and height of cylinder\t");
    scanf("%d%f",&radius,&height);
    volume=pi*(radius*radius)*height;
    printf("Volume of cylinder %f",volume);
    return 0;
}
