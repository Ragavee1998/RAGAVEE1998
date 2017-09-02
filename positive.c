#include<stdio.h>
#include<conio.h>
void main()
{
int number;
printf("enter the number:");
scanf("%d",&number);
if(number==0)
printf("the number is 0");
else if(number<0)
printf("the number is negative);
else
printf("the number is positive");
return 0;
}
