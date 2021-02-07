#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height,width,length, volume=0;
    printf("Enter the height ,width and length of cuboid\n");
    scanf("%f%f%f",&height,&width,&length);
    volume=width*height*length;
    printf("volume of cuboid %f",volume);


    return 0;
}
