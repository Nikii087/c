#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, no;
    //get input form user
    printf("Enter Number : \t");
    scanf("%d",&no);
    // print even odd in tabular formate
    printf("Even\tOdd");
    for(i = 0; i <= no; i++){
        if(i % 2)
            printf("\t%d", i);
        else
            printf("\n%d", i);
    }
    return 0;
}
