#include<stdio.h>
int main()
{
int input1,input2,input3;
scanf("%d %d %d",&input1,&input2,&input3);
if(input1>input2)&&(input1>input3)
printf("%d is largest",&input1);
else if(input2>input1)&&(input2>input3)
printf("%d is largest",&input2);
else
printf("%d is largest",&input3);
return 0;
}
