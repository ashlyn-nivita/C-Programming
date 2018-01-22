#include<stdio.h>
int main(void)
{
	int num,i,flag;
	scanf("%d",&num);
	flag=0;
	for(i=1;i<=num;i++)
	{
	if(num%i==0)
	{
		flag++;
	}
	}

if(flag==2)
{
	printf("Yes");
}
else
printf("No");
return 0;
}
