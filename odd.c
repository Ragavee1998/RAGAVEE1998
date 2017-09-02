#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0)
printf("the num is even");
else if(num==0)
printf("the num is 0");
else
printf("the num is odd");
return 0;
}
