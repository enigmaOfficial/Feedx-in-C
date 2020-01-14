
#include<iostream.h>
#include<string.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

struct acc
{
  char userid[40];
  char userpass[9];
  char name[200];
  char contactNo[11];
  char email[50];
  char address[300];
  long int pincode;
  int member;
};

void NextNewUser(acc &a)
{
 union REGS in,out;
 int mousex,mousey;
 char username[40],pass1[9],pass2[9];
 FILE *fp;
 fp = fopen("ACC.DAT","ab");
 cleardevice();
   fflush(stdin);
   setcolor(4);
   rectangle(250,30,387,48);//Privacy
   gotoxy(37,3);
   setcolor(15);
   printf("Privacy");

   setcolor(4);
   rectangle(100,110,230,130);//user name
   gotoxy(15,8)  ;
   setcolor(15);
   printf("User Name") ;

   setcolor(4);
   rectangle(100,140,230,160);//password
   gotoxy(15,10)  ;
   setcolor(15);
   printf("Password") ;

   setcolor(4);
   rectangle(100,170,230,195);//re enter pass
   gotoxy(15,12)  ;
   setcolor(15);
   printf("RE enter Pass") ;


   setcolor(1);
   rectangle(390,250,450,275); //submit
   gotoxy(51,17)  ;
   setcolor(15);
   printf("Submit");

   setcolor(2);
   rectangle(280,110,450,130); //input username
   gotoxy(37,8)  ;
   setcolor(15);
   fflush(stdin);
   gets(username);
   setcolor(1);
   rectangle(280,110,450,130);

   alpha:
   setcolor(2);
   rectangle(280,140,450,160);

   gotoxy(49,14);
   setcolor(6);
   printf("passward length should be of 8 "); //input pass1

   gotoxy(37,10)  ;
   setcolor(15);
   gets(pass1);
   setcolor(1);
   rectangle(280,140,450,160);

   setcolor(2);
   rectangle(280,170,450,195); //input pass2
   gotoxy(37,12)  ;
   setcolor(15);
   gets(pass2);
   setcolor(1);
   rectangle(280,170,450,195);


       while( !kbhit())
	     {
	       in.x.ax=3;
	       int86 (0x33,&in,&out);
	       mousex=out.x.cx;
	       mousey=out.x.dx;
	       if((out.x.bx==1)&&(mousex>=390 && mousex<=450) && (mousey>=250 && mousey<=275))
		  {
		    if(strcmp(pass1,pass2)==0)
		    {
		       strcpy(a.userid,username);
		       strcpy(a.userpass,pass1);
		       setcolor(1);
		       rectangle(390,250,450,275);
		       gotoxy(40,20); //submit
		       printf("SUCCESSFULLY REGISTERED");
		       fwrite(&a,sizeof(acc),1,fp);
		       break;
		      }
		      else
		      {
		      setcolor(2);
		       rectangle(390,250,450,275);
		       gotoxy(40,20); //submit
		       printf("Password not matched.");

		       goto alpha; //submit
		      }
		   }

	     }


  }


void New()
{
 acc a;
 union REGS in,out;
 int mousex,mousey;

 char name[80],id[30],add[200],cno[11];
 long int pcode;
 int mem=5;

  int gdriver = DETECT,gmode,i;
  initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");

   in.x.ax=1;
   int86 (0X33,&in,&out);

  setcolor(4);
  rectangle(250,30,387,48);//new user
  gotoxy(37,3);
  setcolor(15);
  printf("New User");

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
   printf("Next");



  setcolor(2);
  rectangle(250,110,450,130);//nameInput
  gotoxy(33,8);
  setcolor(15);
  gets(name);
  setcolor(1);
  rectangle(250,110,450,130);

   setcolor(2);
   rectangle(250,140,450,160);//contact no input
   gotoxy(33,10);
   setcolor(15);
   gets(cno);
   setcolor(1);
   rectangle(250,140,450,160);

  setcolor(2);
  rectangle(250,175,450,195);//id input
  gotoxy(33,12);
  setcolor(15);
  fflush(stdin);
  gets(id);
  setcolor(1);
  rectangle(250,175,450,195);

   setcolor(2);
   rectangle(250,205,450,225);//address input
   gotoxy(33,14);
   setcolor(15);
   gets(add);
   setcolor(1);
   rectangle(250,205,450,225);

  setcolor(2);
  rectangle(250,235,400,257);//pincode input
  gotoxy(33,16);
  setcolor(15);
  scanf("%ld",&pcode);
  setcolor(1);
  rectangle(250,235,400,257);

   setcolor(2);
   rectangle(270,285,370,305);//prime input
   rectangle(390,285,490,305);//platinum input



	    int ff=0,fff=7;

	    while( !kbhit())
	     {
	       in.x.ax=3;
	       int86 (0x33,&in,&out);
	       mousex=out.x.cx;
	       mousey=out.x.dx;
	       if((out.x.bx==1)&&(ff==0)&&(mousex>=270 && mousex<=370) && (mousey>=285 && mousey<=305))
		  {
		   mem=0;
		   ff=1;  fff=1;                     //prime selected
		   setcolor(1);
		   rectangle(390,285,490,305);
		   }

		   if((out.x.bx==1)&&(ff==0)&&(mousex>=390 && mousex<=490) && (mousey>=285 && mousey<=305))
		   {
		   mem=1;
		   ff=1;       fff=1;               //platinum selected
		   setcolor(1);
		   rectangle(270,285,370,305);
		   }

		if((out.x.bx==1)&&(fff==1)&&(mousex>=400 && mousex<=500) && (mousey>=350 && mousey<=370))
		   {
		   setcolor(2);
		   rectangle(400,350,500,370);
		   strcpy(a.name, name);
		   strcpy(a.contactNo, cno);
		   strcpy(a.email, id);
		   strcpy(a.address, add);
		   a.pincode = pcode;
		   a.member = mem;
		   NextNewUser(a);
		   break;
		   }
	     }

  getch();
  cleardevice();
  closegraph();

}

