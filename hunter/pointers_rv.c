#include <stdio.h>

int main()
{
    char str[1000], *ptr;
    int i, len;
    printf("Enter a string: ");
    gets(str);
    ptr = str;
    for(i=0;i<1000;i++){
        if(*ptr == '\0')  break;
        ptr++;
    }
    len = i;
    ptr--;
    printf("Reversed String: ");
    for(i=len; i>0; i--){
        printf("%c",*ptr--);
    }
    return 0;
}
