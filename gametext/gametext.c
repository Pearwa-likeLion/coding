#include<stdio.h>
#include <windows.h>
#include<conio.h>

//วาดยาน
void draw_ship(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE) , c);
    printf("           ________            \n");
    printf(" <|>_______|______|_______ <|> \n");
    printf("<<|>>______|--<>--|_______<<|>>\n");
    printf(" <|>       |______|        <|> \n");
}

void erase_ship(int x,int y){
    COORD c = { x, y };
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE) , c);
    printf("                                \n");
    printf("                                \n");
    printf("                                \n");
    printf("                                \n");
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
if(ch=='d'&& x<100) {draw_ship(++x,y);}
if(ch=='w' && y>0) {erase_ship(x,y);draw_ship(x,--y);}
if(ch=='s' && y<100) {erase_ship(x,y);draw_ship(x,++y);}
fflush(stdin);
}
Sleep(100);
} while (ch!='x');
return 0;
}