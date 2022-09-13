#include <stdio.h>
int main(){
    char str[100],*p;
    p = str;
    scanf("%s",str);

    while (*p != '\0')
    {
        // printf("%c \n",*p);
        if((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')){
            if(*p >= 'A' && *p <= 'Z'){
                *p = *p + 32;
                printf("%c",*p);
            }
            else if(*p >= 'a' && *p <= 'z'){
                *p = *p - 32;
                printf("%c",*p);
            }
        }
        p++;
    }
}