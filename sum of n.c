#include<stdio.h>
int main()
{
int input,sum=0;
scanf("%d",&input);
for(int i=1;i<input+1;i++)
{
sum=sum+i;
}
printf("the sum of n numbers is %d",sum);
return 0;
}
