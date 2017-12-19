#include<stdio.h>
int main(void)
{
int sum=0,i,n;
printf("Enter the limit");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
