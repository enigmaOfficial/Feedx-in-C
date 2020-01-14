//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<string.h>
#include<MENUE1.h>
#include<MENUE2.h>
#include<MENUE3.h>
#include<MENUE4.h>

void res()
 { union REGS in,out;
 int mousex,mousey;
clrscr();
   in.x.ax=1;
   int86 (0X33,&in,&out);


char resrev1[400],resrev2[400],resrev3[400],resrev4[400];
strcpy(resrev1,"Best restaurant  ");
strcpy(resrev2,"fantastic service  ");
strcpy(resrev3,"superfast service ");
strcpy(resrev4,"excellent  ");

char res1[30],res2[30],res3[30],res4[30];
strcpy(res1,"jbr ");
strcpy(res2,"Domino's");
strcpy(res3,"pizza Hut");
strcpy(res4,"Burger king");

int gdriver = DETECT,gmode,i;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");

 in.x.ax=1;
   int86 (0X33,&in,&out);


setcolor(2);
rectangle(250,30,387,48);
gotoxy(36,3);
printf("RESTAURANTS");
rectangle(200,79,350,96);
gotoxy(27,6);
printf("Pin code:- 123456");
//gotoxy()
//res1
gotoxy(3,9);
printf("1%c",26);
setcolor(4);
settextstyle(1,0,1);
outtextxy(40,120,res1);
gotoxy(6,11);
printf("review");
setcolor(1);
rectangle(200,127,253,144);//menu for res1
gotoxy(27,9);
printf("Menu");
setcolor(1);
settextstyle(3,0,1);
gotoxy(6,13);
printf("%c",26);
outtextxy(60,185,resrev1);
setcolor(1);
settextstyle(3,0,1);
gotoxy(6,14);
printf("%c",26);
outtextxy(60,206,resrev2);

//res2
gotoxy(3,18);
printf("2%c",26);
setcolor(4);
settextstyle(1,0,1);
outtextxy(40,265,res2);
gotoxy(6,20);
printf("review");
setcolor(1);
rectangle(200,269,253,288);//menu for res2
gotoxy(27,18);
printf("Menu");
setcolor(1);
settextstyle(3,0,1);
gotoxy(6,22);
printf("%c",26);
outtextxy(60,328,resrev3);
setcolor(1);
settextstyle(3,0,1);
gotoxy(6,23);
printf("%c",26);
outtextxy(60,349,resrev4);
//res3
gotoxy(40,9);
printf("3%c",26);
setcolor(4);
settextstyle(1,0,1);
outtextxy(335,120,res3);
gotoxy(43,11);
printf("review");
setcolor(1);
rectangle(500,127,553,144);//menu for res3
gotoxy(65,9);
printf("Menu");
setcolor(1);
settextstyle(3,0,1);
gotoxy(43,13);
printf("%c",26);
outtextxy(355,185,resrev2);
setcolor(1);
settextstyle(3,0,1);
gotoxy(43,14);
printf("%c",26);
outtextxy(355,206,resrev4);

//res4
gotoxy(40,18);
printf("4%c",26);
setcolor(4);
settextstyle(1,0,1);
outtextxy(335,265,res2);
gotoxy(43,20);
printf("review");
setcolor(1);
rectangle(500,269,553,288);//menu for res4
gotoxy(65,18);
printf("Menu");
setcolor(1);
settextstyle(3,0,1);
gotoxy(43,22);
printf("%c",26);
outtextxy(355,328,resrev1);
setcolor(1);
settextstyle(3,0,1);
gotoxy(43,23);
printf("%c",26);
outtextxy(355,349,resrev3);


	    while( !kbhit())
	     {
	       in.x.ax=3;
	       int86 (0x33,&in,&out);
	       mousex=out.x.cx;
	       mousey=out.x.dx;
	       if((out.x.bx==1)&&(mousex>=200 && mousex<=253) && (mousey>=127 && mousey<=144))
		   {
		   men1();
		   }

	       if((out.x.bx==1)&&(mousex>=200 && mousex<=254) && (mousey>=269 && mousey<=288))
		   {
		    men2();
		   }

	       if((out.x.bx==1)&&(mousex>=500 && mousex<=553) && (mousey>=127 && mousey<=144))
		   {
		    men3();
		   }
	       if((out.x.bx==1)&&(mousex>=500 && mousex<=553) && (mousey>=269 &&mousey<=288))
		   {
		    men4();
		   }


	     }


//rectangle(326,205,401,224);
//rectangle(410,205,500,224);
getch();
cleardevice();
closegraph();


  }