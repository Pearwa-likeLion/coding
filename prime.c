#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int x;
    while (n != 1)
    {
        if(n % 2 == 0 && n != 2)
        {
            return 0;
            break;
        }
        else{
            for(x = 3; x < sqrt(n); x += 2){
                if(n % x == 0){
                    return 0;
                    break;
                }
            }
        return 1;
        break;
    }
    }
}
int main(){
    int num;
        printf("Enter number to check : "); 
        scanf("%d", &num);
        if(isPrime(num)==0){
            printf("Not Prime Number");
        }
        else if(isPrime(num)==1){
            printf("Prime Number");
        }
        else{
            printf("Error");
        }
}