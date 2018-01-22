#include<stdio.h>
int main(void)
{
	int f,l,i,flag;
	scanf("%d\t%d",&f,&l);
	while(f<l)
	{
	flag=0;
	for(i=1;i<l;i++)
	{
	if(f%i==0)
	{
		flag++;
	}
	}

if(flag==2)
{
printf("%d\t",f);
}
f++;
}
return 0;
}
