#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("Enter No\t");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d is an Even no",no);
    }
    else
    {
        printf("%d is an odd no",no);
    }

    return 0;
}
