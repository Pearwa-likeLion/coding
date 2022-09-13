#include<stdio.h>
#include<windows.h>
#include<conio.h>
    void gotoxy(int x, int y)
    {
        COORD c = { x, y };
        SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);
    }
    
    void draw_ship(int x,int y)
    {
        gotoxy(x,y); printf(" <-0-> ");
    }

    void setcursor(boolean visible)
    {
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO lpCursor;
        lpCursor.bVisible = visible;
        lpCursor.dwSize = 20;
        SetConsoleCursorInfo(console,&lpCursor);
    }
    
    int main()
    {
        char ch='.';
        int x=38,y=20;
        draw_ship(x,y);
        do {
                if (kbhit()){
                ch=getch();
                if(ch=='a') {draw_ship(--x,y);}
                if(ch=='s') {draw_ship(++x,y);}
                fflush(stdin);
            }
            Sleep(100);
            setcursor(0);
        } while (ch!='x');
        return 0;
}