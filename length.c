#include<stdio.h>
int main()
{
int input,sum=0,rem=0,count=0;
printf("enter the input:");
scanf("%d",&input);
while(input!=0)
{
rem=input%10;
input=input/10;
count=count+1;
}
printf("length of input is %d",count);
return 0;
}
