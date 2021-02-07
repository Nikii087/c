#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr,min;
    printf("Enter hours\n");
    scanf("%d",&hr);
    printf("Enter minutes\n");
    scanf("%d",&min);
    printf("%d%d%d",hr,min,(hr*60)+min);

    return 0;
}
