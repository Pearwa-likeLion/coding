#include <stdio.h>
#include <limits.h>

int main(){
    int x=2,num,n[100],f;
    scanf("%d",&num);
    int i =0;
    while(num != 1){
        while(num % x == 0){
            num = num / x;
            i++;
            n[i] = num;

        }
        x++;
        
    }
    f=i;
    for(int j =1;j<=i;j++){
        printf("%d",n[j]);
        if(j==f){
            continue;
        }
        printf(" x ");
    }
} 