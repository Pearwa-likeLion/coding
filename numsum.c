//ให้เขียนการทํางานของการหาผลบวกของตัวเลขโดดที่ไม่ใช่ 0 ทุกตัวในตัวเลขที่ป้อน ไปเรื่อยๆ
//จนกว่าจะเป็นเลขหลักเดียวเช่นเมื่อป้อน input เป็น 123456 จะได้ผลลัพธ์คือ 123456 -> 21-> 3
#include <stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d",&a);
    while ( a > 10)
    {    
        while (a>0)
        {
            b = a%10;
            sum = sum + b;
            a = a/10;
        }
        if(sum>10){
            a = sum;
            sum = 0;            
        }
    }
    printf("%d",sum);

    return 0;

}