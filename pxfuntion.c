#include <stdio.h>
#include <limits.h>

int main(){
    int sum=0,x=10000;
    for(int i =2;i<=10000;i++){
        sum=0;
        for(int j =1;j<=i/2;j++)
        {
            if (i%j==0){
                sum += j;
            }
        }
        if(sum==i){
            printf("P(%d) : %d \n",i,sum);
        }


    }
} 
