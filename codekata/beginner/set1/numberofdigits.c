#include<stdio.h>
int main(void)
{
int num,i,rem,count=0;
printf("Enter a number:");
scanf("%d",&num);
while(num!=0)
{
count++;
num=num/10;
}
printf("%d",count);
}
