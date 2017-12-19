#include<stdio.h>
int main(void)
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a:%d is the largest",a);
}
else if(b>c)
{
printf("b:%d is the largest",b);
}
else
printf("c:%d is the largest",c);
return 0;
}
