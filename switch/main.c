#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    char data;
    printf("Enter choice:[+,-,*,/]\t");
    scanf("%c",&data);

    printf("Enter no1 and no2\t");
    scanf("%d%d",&no1,&no2);

    switch(data)
    {
        case '+':
        printf("%d",(no1+no2));
        break;
        case '-':
        printf("%d",(no1-no2));
        break;
        case '*':
        printf("%d",(no1*no2));
        break;
        case '/':
        printf("%d",(no1/no2));
        break;
        default:
        printf("invalid");

    }
    return 0;
}
