// ให้นักศึกษาเขียนโปรแกรมรับ string 1 ชุด แล้วแสดงผลชุดตัวอักษร โดยถ้ามีตัวเลขหน้าตัวอักษรใด
// ให้แสดงผลตัวอักษรนั้นซ้ําเท่ากับจํานวนตัวเลข เช่น
// Input : a2Bc4d11Eg0Nk
// Output : aBBcddddEEEEEEEEEEEgk
#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Your name is %c.", *(str));
    for(int i=0;i<strlen(str);i++){
        printf("str(%d) : %c \n",i,*(str+i));

    }
}