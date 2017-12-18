#include <stdio.h>
int count=20;
int main()
{
int count=10;
printf("Local value is %d\n,count);
printf("Block scope value is %d\n",count);
func();
}
func()
{
printf("Global value is %d\n",count);
}
