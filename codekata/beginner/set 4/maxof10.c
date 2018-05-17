#include <stdio.h>
int main(void) 
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=0;
	for(i=0;i<10;i++)
	{
			if(a[i]>max)
			{
				max=a[i];
			}
 
	}
	printf("%d",max);
}
 
