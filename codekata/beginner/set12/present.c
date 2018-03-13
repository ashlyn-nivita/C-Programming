#include<stdio.h>
int main(void)
{
	int N,K,n[100],i,count=0;
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<N;i++)
	{
		if(n[i]==K)
		{
			printf("Yes");
			count=1;
		}
	}
	if(count==0)
	{
		printf("No");
	}
}
