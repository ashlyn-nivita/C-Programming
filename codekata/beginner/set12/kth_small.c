#include <stdio.h>
int main(void)
{
	int N,K,n[100],i,j,t,count=0;
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(n[i]>n[j])
			{
			t=n[i];
			n[i]=n[j];
			n[j]=t;
			}
		
		}
	}
	for(i=0;i<N;i++)
	{
		count++;
		if(count==K)
		{
			printf("%d",n[i]);
		}
	}
}
	
	
