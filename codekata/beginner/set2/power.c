#include <stdio.h>
int main(void)
{
int n,i,pow,res=1;
scanf("%d",&n);
scanf("%d",&pow);
for(i=0;i<pow;i++)
{
	res=res*n;
}
printf("%d",res);
	return 0;
}
