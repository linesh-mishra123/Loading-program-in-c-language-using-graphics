#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
   int gd=DETECT,gm,i,j;
   initgraph(&gd,&gm,"C://TC/BGI");

   setcolor(YELLOW);
   rectangle(10,10,615,300);
   rectangle(11,9,616,299);
   setcolor(WHITE);
   settextstyle(10,0,1);
   outtextxy(120,15,"<<< CONTACT MANAGER >>> ");
   setcolor(YELLOW);
   line(12,65,614,65);
   rectangle(50,80,570,120);
   setcolor(WHITE);
   settextstyle(1,0,2);
   outtextxy(210,87,"*** VERSION - 1.0 ***");
   settextstyle(8,0,1);
   outtextxy(50,130,"DEVELOPED BY :   LINESH K. MISHRA");
   outtextxy(50,170,"E-MAIL ID     :   abc@gmail.com");

   gotoxy(25,22);
   printf("LOADING PLEASE WAIT !...");
   for(i=1,j=1;i<=400,j<=100;i+=4,j++)
   {
       setfillstyle(SOLID_FILL,5);
       bar(100,370,115+i,390);
       delay(70);
       gotoxy(50,22);
       printf("[%d%]",j);
   }
   closegraph();
   getch();
}