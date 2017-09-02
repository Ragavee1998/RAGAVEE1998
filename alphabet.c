#include<stdio.h>
int main()
{
char input;
printf("enter the input:");
scanf("%s",&input);
if(((input>='a')&&(input<='z'))||((input>='A')&&(input<='Z')))
printf("the input is an alphabet");
else
printf("the input is not an alphabet");
return 0;
}
