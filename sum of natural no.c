#include<stdio.h>
int main()
{
int input,sum=0,rem=0;
printf("enter the input:");
scanf("%d",&input);
while(input!=0)
{
rem=input%10;
sum=sum+rem;
input=input/10;
}
printf("sum of input is %d",sum);
return 0;
}
