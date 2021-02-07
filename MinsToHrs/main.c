#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs,min,newmin;
    printf("Enter minutes");
    scanf("%d",&min);
    hrs=min/60;
    newmin=min%60;
    printf("Result::%d minutes is equivalent to %d hours & %d minutes",hrs ,min,newmin);

    return 0;
}
