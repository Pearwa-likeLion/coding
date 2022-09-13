#include<stdio.h>
#include <windows.h>
#include<conio.h>

//วาดยาน
void draw_ship(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE) , c);
    printf(" |--<>--| ");
}

void erase_ship(int x,int y){
    COORD c = { x, y };
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE) , c);
    printf("           ");
}

int main()
{
char ch=' ';
int x=18,y=20;
draw_ship(x,y);
do {
if (_kbhit()){
ch=_getch();
if(ch=='a' && x>0) {draw_ship(--x,y);}
if(ch=='d'&& x<73) {draw_ship(++x,y);}
if(ch=='w' && x>0) {erase_ship(x,y);draw_ship(x,--y);}
if(ch=='s' && x<80) {erase_ship(x,y);draw_ship(x,++y);}
fflush(stdin);
}
Sleep(100);
} while (ch!='x');
return 0;
}

//bg set white black before go
//กดซ้ายไปซ้ายสุด กดขวาไปขวาสุด กด space bar กระสุนออก ออกได้แค่ 5 นัด ต่อ 1 จอ