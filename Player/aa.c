#include<stdio.h>
int main()
{
int a,i,sum,temp,tot=0;
printf("Enter a number:");
scanf("%d",&a);
temp=a;
for(i=0;i<3;i++)
{
a=(a*10)+temp;
tot=tot+a;
}
sum=tot+temp;
printf("%d",sum);
}
