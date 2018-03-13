#include<stdio.h>
int main(void)
{
	int N,K,i,n[100],count=0;
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<N;i++)
	{
		if(n[i]%2!=0)
		{
			count++;
			if(count==K)
			{
				printf("%d",n[i]);
			}
		}
	}
}
