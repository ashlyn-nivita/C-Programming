#include<stdio.h>
int main(int argc,char *argv[])
{
if(argc==2)
{
printf("the arguments supplied are:);
printf("%s",argv[1]);
}
else if(argc>2)
{
printf("too many arguments");
}
else
{
printf("two arguments expected");
}
}
