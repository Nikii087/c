#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,marks;
    printf("Enter age\t");
    scanf("%d",&age);
    printf("Enter Marks\t");
    scanf("%d",&marks);

    if(age>=18)
    {
        if(marks>=9){
            printf("Sufficient age for license...");

        }
        else
        {
           printf("Try again");
        }
    }
    else
    {
       printf("Invalid factor :%d",age);
    }
    return 0;
}
