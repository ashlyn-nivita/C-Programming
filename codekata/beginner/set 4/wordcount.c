#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[100];
	int i,count=0,length,space=0;
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z'))
		{
			count++;
		}
		else
		{
			space++;
		}
	}
	printf("%d",space+1);
}
