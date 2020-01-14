/*
struct acc
{
  int uni_id;
  char name[200];
  long int contactNo;
  char email[30];
  char address[300];
  int pincode;
  int member;
};
 */
#include<rest.h>
void sho(char* name, char* id, char* add, long int pcode, char* cno, int mem)
{
 union REGS in,out;
 int mousex,mousey;

  int gdriver = DETECT,gmode,i;
  initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");

   in.x.ax=1;
   int86 (0X33,&in,&out);

  setcolor(4);
  rectangle(250,30,387,48);//new user
  gotoxy(37,3);
  setcolor(15);
  printf("Details");

   setcolor(4);
   rectangle(100,110,200,130);//name
   gotoxy(18,8)  ;
   setcolor(15);
   printf("Name") ;

  setcolor(4);
  rectangle(100,140,200,160);//contact no
  gotoxy(15,10)  ;
  setcolor(15);
  printf("Contact no") ;

   setcolor(4);
   rectangle(100,175,200,195);//email id
   gotoxy(16,12)  ;
   setcolor(15);
   printf("Email id") ;

  setcolor(4);
  rectangle(100,205,200,225);//address
  gotoxy(16,14)  ;
  setcolor(15);
  printf("Address") ;

   setcolor(4);
   rectangle(100,235,200,257);//Pincode
   gotoxy(16,16)  ;
   setcolor(15);
   printf("Pin Code") ;

  setcolor(4);
  rectangle(100,285,200,305);//Member
  gotoxy(17,19)  ;
  setcolor(15);
  printf("Member");

   setcolor(4);
   rectangle(270,285,370,305);//prime
   gotoxy(38,19);
   setcolor(15);
   printf("Prime") ;

  setcolor(4);
  rectangle(390,285,490,305);//platinum
  gotoxy(52,19)  ;
  setcolor(15);
  printf("Platinum") ;
  gotoxy(48,19);
  printf("|");

   setcolor(4);
   rectangle(400,350,500,370);//next
   gotoxy(55,23);
   setcolor(15);
   printf("Go");



  setcolor(2);
  rectangle(250,110,500,130);//name
  gotoxy(33,8);
  setcolor(15);
  puts(name);
  setcolor(1);
  rectangle(250,110,500,130);

   setcolor(2);
   rectangle(250,140,500,160);//contact no
   gotoxy(33,10);
   setcolor(15);
   puts(cno);
   setcolor(1);
   rectangle(250,140,500,160);

  setcolor(2);
  rectangle(250,175,500,195);//id
  gotoxy(33,12);
  setcolor(15);
  puts(id);
  setcolor(1);
  rectangle(250,175,500,195);

   setcolor(2);
   rectangle(250,205,500,225);//address
   gotoxy(33,14);
   setcolor(15);
   puts(add);
   setcolor(1);
   rectangle(250,205,500,225);

  setcolor(2);
  rectangle(250,235,400,257);//picode
  gotoxy(33,16);
  setcolor(15);
  printf("%ld", pcode);
  setcolor(1);
  rectangle(250,235,400,257);
 if(mem==0){
   setcolor(4);
   rectangle(270,285,370,305);//prime
   setcolor(2);
   rectangle(390,285,490,305);//platinum
   }
   else
   {
   setcolor(2);
   rectangle(270,285,370,305);//prime
   setcolor(4);
   rectangle(390,285,490,305);//platinum
   }



	    while( !kbhit())
	     {
	       in.x.ax=3;
	       int86 (0x33,&in,&out);
	       mousex=out.x.cx;
	       mousey=out.x.dx;
	       if((out.x.bx==1)&&(mem==0)&&(mousex>=270 && mousex<=370) && (mousey>=285 && mousey<=305))
		  {
			 //prime selected
		   setcolor(2);
		   rectangle(390,285,490,305);
		   }

		   if((out.x.bx==1)&&(mem==1)&&(mousex>=390 && mousex<=490) && (mousey>=285 && mousey<=305))
		   {
		   //platinum selected
		   setcolor(2);
		   rectangle(270,285,370,305);
		   }

		if((out.x.bx==1)&&(mousex>=400 && mousex<=500) && (mousey>=350 && mousey<=370))
		   {
		   setcolor(2);
		   rectangle(400,350,500,370);
		   res();
		   break;
		  }
	     }

  getch();
  cleardevice();
  closegraph();

}

