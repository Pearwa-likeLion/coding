#include<stdio.h>
#include<windows.h>
#include<conio.h>

    //เว็ตสีกับพื้นหลัง
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

        boolean left = FALSE;
        boolean right = FALSE;
        char ch='.';
        int x=18,y=20;
        setcursor(0);
        draw_ship(x,y);
        int direction;

        do {
                
                if (kbhit()){ 
                ch=getch();
                if(ch=='a') {
                    direction = 1; // move to left
                    }
                if(ch=='d') {
                    direction = 2; // move to right
                }
                if(ch == 's'){
                    direction = 0; // not move
                }
                if(direction){

                   //condition to move to left
                    if (direction == 1){
                        while (x>0)
                        {   
                            if(direction != 1){
                                break;
                            }
                            erase_color(x,y);
                            draw_ship(--x,y);
                            Sleep(50);
                            if(kbhit()){
                                ch=getch();
                                if(ch=='d') {
                                    direction = 2; // change direction to right
                                }
                                }
                                if(ch == 's'){
                                    direction = 0; // not move
                                }  
                            }
                        }
                    }
                   
                   //condition to move to right
                    if(direction == 2){
                       while (x<70)
                        {   
                            if(direction != 2){
                                break;
                            }
                            erase_color(x,y);
                            draw_ship(++x,y);
                            Sleep(50);
                            if(kbhit()){
                                ch=getch();
                                if(ch =='a') {
                                    direction = 1; //change direction to left
                                }
                                }
                                if(ch == 's'){
                                    direction = 0; // not move
                                }  
                            }

                    }

                   //condition to stop move
                    if(direction == 0 ){
                            if(direction != 0){
                                break;
                            }
                            draw_ship(x,y);
                            Sleep(50);
                            if(kbhit()){
                                ch=getch();
                                if(ch=='a') {
                                    direction = 1;  // change direction to left
                                }
                                }
                                if(ch == 'd'){
                                    direction = 2; // change direction to right
                                }                      
                        }
                
                fflush(stdin);

            }
            
            Sleep(100);
            
        } while (ch!='x');
        return 0;
}





/*
//code for loop build ship and move to left

//code for loop build ship and move to left 
                    while (x<70)
                    {


                    }

 //code for loop build ship and not move                  
                        draw_ship(x,y);




*/