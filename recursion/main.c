#include<stdio.h>
int main(){
   int num,rev;

   //User input the number
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Calling user defined function to perform reverse
   rev=rev_function(num);
   printf("\nAfter reverse the no is :%d",rev);
   return 0;
}
int sum=0,rem;
rev_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      rev_function(num/10);
   }
   else
      return sum;

}
