#include<stdio.h>

//binary to decimal
int BinToDec(int num){
    int rem, dec, mul = 1;
    while(num > 0){
        rem = num % 10;
        dec += rem * mul;
        mul *= 2;
        num /= 10;
    }
    return dec;
}

//decimal to binary
int DecToBin(int num){
    int rem = 0, mul = 1;
    while(num > 0){
        rem += (num % 2) * mul;
        mul *= 10;
        num /= 2;
    }
    return rem;
}

int main(){
   int num;

   //User input the number
   printf("\nEnter Binary number:");
   scanf("%d",&num);

   //Calling Binary to decimal
   printf("\n Decimal No  : \t %d" ,BinToDec(num));

   //User input the number
   printf("\nEnter Decimal number:");
   scanf("%d",&num);

   //Calling  decimal Binary
   printf("\n Decimal No  : \t %d" ,DecToBin(num));
   return 0;
}
