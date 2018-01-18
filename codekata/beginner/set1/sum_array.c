#include<stdio.h>
int main(void)
{
    int n,i,a[100],num,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
