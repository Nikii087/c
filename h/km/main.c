#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmph,miph=0;

    printf("Enter number of kilometers\n");
    scanf("%f",&kmph);
    miph=(kmph*0.6213712);
    printf("miph are %f",miph);
    return 0;
}

