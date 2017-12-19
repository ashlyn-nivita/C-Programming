#include<stdio.h>
int main()
{
int b;
printf("Enter a value:");
scanf("%d", &b);
if(b<0)
{
printf("The value is negative");
}
else
printf("The value is positive");
return 0;
}
