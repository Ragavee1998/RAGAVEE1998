#include<stdio.h>
int main()
{
int input,fact=1;
scanf("%d",&input);
for(int i=1;i<input+1;i++)
{
fact=fact*i;
}
printf("the factorial is %d",fact);
return 0;
}
