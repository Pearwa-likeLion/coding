#include <stdio.h>

int main(){
    int n1 , n2,x;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    if(n1<n2){
        x = n1;
    }
    else{
        x = n2;
    }
    while (x >1)
    {
        if(n1%x==0 && n2%x==0)
        {
            printf("Greatest common divisor = %d",x);
            break;
        }
        x--;
    }
    

}