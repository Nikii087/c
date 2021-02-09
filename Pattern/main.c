#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, space, MAX;
    //get data form user
    printf("\nEnter MAX : ");
    scanf("%d",&MAX);
    /*
    *** kite logic is  here
    */

    //here is pyramid logic
    //run how many lines are to be printed
    for(i = 0, space = MAX - 1; i < MAX ; i++, space--){
        //run for before stars spaces
        for(j = 0; j < space; j++)
            printf(" ");
        //run for print start
        for(j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    //here is reverse pyramid logic
     for(i = MAX, space = 0; i > 0 ; i--, space++){
        //run for before stars spaces
        for(j = 0; j < space; j++)
            printf(" ");
        //run for print start
        for(j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
