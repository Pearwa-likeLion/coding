//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร
//ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด
#include <stdio.h>

int main(){
    int num[3];
    char ch;
    scanf("%d %c %d",&num[0],&ch,&num[1]);
    if(ch == '+'){
        num[2] = num[0] + num[1];
        printf("%d",num[2]);
    }
    
    else if(ch == '-'){
        num[2] = num[0] - num[1];
        printf("%d",num[2]);        
    }

    else if(ch == '*'){
        num[2] = num[0] * num[1];
        printf("%d",num[2]);        
    }

    else if(ch == '/'){
        num[2] = num[0] / num[1];
        printf("%d",num[2]);
    }

}