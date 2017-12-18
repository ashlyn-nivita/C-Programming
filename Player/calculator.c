#include<stdio.h>
int main(void)
{
int a,b,sum,diff,div,mul,rem;
printf("Enter two values:");
scanf("%d%d",&a,&b);
sum=a+b;
diff=a-b;
mul=a*b;
div=a/b;
rem=a%b;
printf("%d,%d,%d,%d,%d",sum,diff,mul,div,rem);
}
