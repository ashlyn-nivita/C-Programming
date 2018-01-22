#include<stdio.h>
int main(void)
{
	int f,l,i;
	scanf("%d\t%d",&f,&l);
	for(i=f+1;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
