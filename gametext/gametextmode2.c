#include<stdio.h>
#include<windows.h>
#include<conio.h>
    void setcolor(int fg,int bg)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, bg*16 +fg);
    }
    //การเคลื่อนที่
    void gotoxy(int x, int y)
    {
        COORD c = { x, y };
        SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);
    }
    
    //สร้างยาน
    void draw_ship(int x,int y)
    {   
        setcolor(2,4);
        gotoxy(x,y); 
        printf(" <-0-> ");
        
    }

    //การลบเคอเซอร์
    void setcursor(boolean visible)
    {       
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO lpCursor;
        lpCursor.bVisible = visible;
        lpCursor.dwSize = 20;
        SetConsoleCursorInfo(console,&lpCursor);
    }

    //เปลี่ยนสี text


    //เมื่อยานเคลื่อนที่จะไม่ทิ้งรอยของ background
    void erase_color(int x,int y)
    {   
        setcolor(0,0); 
        gotoxy(x,y);  
        printf("       ");
             
    }

    //เมนฟังก์ชัน
    int main()
    {
        boolean move = FALSE;
        boolean left = FALSE;
        boolean right = FALSE;
        char ch='.';
        int x=18,y=20;
        setcursor(0);
        draw_ship(x,y);

        do {
                if (kbhit()){ 
                ch=getch();
                if(ch=='a' && x > 0 ) {
                    while (x>0)
                    {
                        erase_color(x,y);
                        draw_ship(--x,y);
                        Sleep(50);
                    }
                    }
                if(ch=='d' && x < 70) {
                    
                    while (x<70)
                    {
                        erase_color(x,y);
                        draw_ship(++x,y);
                        Sleep(50);

                    }
                }
                if(ch == 's'){
                    draw_ship(x,y);
                }
                fflush(stdin);
                
            }
            
            Sleep(100);
            
        } while (ch!='x');
        return 0;
}