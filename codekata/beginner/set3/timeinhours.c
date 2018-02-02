#include<stdio.h>
int main(void)
{
    int time,hour,min;
    scanf("%d",&time);
    hour=time/60;
    min=time-(hour*60);
    printf("%d\t",hour);
    printf("%d",min);
}
