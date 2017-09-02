#include<stdio.h>
int main()
{
int number,power,result=0,temp;
scanf("%d %d",&number,&power);
temp=number;
for(int i=1;i<power;i++)
{
number=number*temp;
}
printf("the power of %d is %d:",temp,number);
return 0;
}
