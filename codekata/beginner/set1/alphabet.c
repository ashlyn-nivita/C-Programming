#include<stdio.h>
int main(void)
{
char ch;
scanf("%c",&ch);
if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
{
printf("Alphabet");
}
else
printf("Not an alphabet");
}
