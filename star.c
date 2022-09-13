#include <stdio.h>

int main(){
    int num,s;
    scanf("%d",&num);
    s = (num*2)-1;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=s;j++){
            if(j<=i || j>=(2*num)-i){                
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(int i=num;i>=1;i--)
    {
        if(i==num){
            continue;
        }
        for(int j=s;j>=1;j--){
            if(j<=i || j>=(2*num)-i){                
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}