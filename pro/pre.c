#include<stdio.h>
int main(void)
{
int n,a[100],i,t,j,limit;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
scanf("%d",&limit);
for(i=0;i<limit;i++)
{
printf("\n%d",a[i]);
}
}

