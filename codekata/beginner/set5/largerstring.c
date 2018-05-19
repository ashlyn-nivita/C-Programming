#include <stdio.h>
#include<string.h>
int main(void)
{
char s[100],r[100];
int n,i,len1,len2;
scanf("%d",&n);
scanf("%s",s);
scanf("%s",r);
len1=strlen(s);
len2=strlen(r);
if(len1<len2)
{
	printf("%s",r);
}
else if(len1>len2)
{
	printf("%s",s);
}
else
printf("%s",r);
}
