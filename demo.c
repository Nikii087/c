#include<stdio.h>
#include<conio.h>
int main()
{
	int radius;
	float pie ,volume=0;
	pie=3.14;
	printf("Enter the value of radius:\t");
	scanf("%d",&radius);
	volume=4/3*pie*(radius*radius*radius);
	printf("%f\n",&volume );
	return 0;
}