#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    printf("Enter: ");
    scanf("%s",c);
    for(int i =0;i<strlen(c);i++){
        if(c[i] >= 'A' && c[i] <= 'Z'){
            printf("%c",c[i]);
       }
    }
}

