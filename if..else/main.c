#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your Age\t");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You are eligible for voating",age);
    }
    else
    {
        printf("Sry ur voat is invalid",age);
    }
    return 0;
}
