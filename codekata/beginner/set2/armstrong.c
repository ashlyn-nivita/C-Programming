#include<stdio.h>
int main(void)
{
	int num,i,sum=0,rem,temp;
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==num)
	{
		printf("Yes");
	}
	else
	printf("No");
	return 0;
}
