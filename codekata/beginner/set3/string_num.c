#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int len,i,count=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
        {
            count++;
        }
        
    }
    if(count>1)
    {
        printf("No");
    }
    else
    printf("Yes");
}
