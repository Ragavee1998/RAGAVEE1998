#include<stdio.h>
int main()
{
int number,upto,temp;
scanf("%d %d",&number,&upto);
temp=number;
for(int i=1;i<upto+1;i++)
{
number=i*temp;
printf("%d * %d = %d",i,temp,number);
}
return 0;
}
