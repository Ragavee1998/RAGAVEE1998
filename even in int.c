#include<stdio.h>
int main()
{
int interval1,interval2;
scanf("%d %d",&interval1,&interval2);
for(int i=interval1;i<interval2+1;i++)
{
if(i%2==0)
printf("%d\n",i);
}
return 0;
}
