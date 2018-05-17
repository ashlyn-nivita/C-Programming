#include <stdio.h>
int main(void) 
{
	int n,i,c=0,a=0,b=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n%d",c);
	}

}
