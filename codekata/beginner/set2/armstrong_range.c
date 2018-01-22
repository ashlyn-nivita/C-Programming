#include<stdio.h>
int main(void)
{
	int f,l,i,sum,rem,temp;
	scanf("%d%d",&f,&l);
	for(i=f+1;i<l;i++)
	{
	sum=0;
	temp=i;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==i)
	{
		printf("%d",i);
	}
	}
            return 0;
}
