#include <stdio.h>
int main(void)
{
	int num,i,rem,temp;
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
	 rem=rem*10;
	 rem=rem+temp%10;
	 temp=temp/10;
	}
	if(rem==num)
	{
		printf("Yes");
	}
	else
	printf("No");
	return 0;
}
