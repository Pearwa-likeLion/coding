#include <stdio.h>

int main(){
    int x=2,num,n[100],f;
    printf("Enter number : ");
    scanf("%d",&num);
    int i =0;
    while(num != 1){
        while(num % x == 0){
            num = num / x;
            i++;
            n[i] = x;

        }
        x++;
        
    }
    f=i;
    printf("Factoring Result : ");
    for(int j =1;j<=i;j++){
        printf("%d",n[j]);
        if(j==f){
            continue;
        }
        printf(" x ");
    }
} 