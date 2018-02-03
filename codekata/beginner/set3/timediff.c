#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int hour1,min1,hour2,min2,diff_hour,diff_min;
    scanf("%d%d",&hour1,&min1);
    scanf("%d%d",&hour2,&min2);
    diff_hour=abs(hour1-hour2);
    diff_min=abs(min1-min2);
    printf("%d:%d",diff_hour,diff_min);
}
