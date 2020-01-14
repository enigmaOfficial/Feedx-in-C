/*#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
*/
//#include<newuser.h>
#include<show.h>
  void logo()
   {
     rectangle(250,30,387,48);
     rectangle(275,143,398,160);
     rectangle(275,175,398,192);
     rectangle(326,205,401,224);
     rectangle(410,205,500,224);
   }
void login()
{
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
      FILE *fp;
      fp = fopen("ACC.DAT","rb");
      union REGS in,out;
      int mousex,mousey;
      int MatchFlag = 0;
    cleardevice();
      in.x.ax =1;
      int86 (0X33,&in,&out);
      char u[40],p[9];
      logo();
      gotoxy(34,3);
      printf("feedX");
      gotoxy(25,10);
      printf("USERNAME");
      gotoxy(25,12);
      printf("PASSWORD");
      gotoxy(51,10);
      printf("(press enter after entering)");
      gotoxy(51,12);
      printf("(8 characters only)");
      gotoxy(44,14);
      printf("Login");
      gotoxy(54,14);
      printf("New User");


while(!kbhit())
	  {
	    setcolor(2);
	 rectangle(410,205,500,224);
	    in.x.ax=3;
	    int86 (0x33,&in,&out);
	    mousex=out.x.cx;
	    mousey=out.x.dx;

	    if((out.x.bx==1)&&(mousex>=410&&mousex<=500)&&(mousey>=205&&mousey<=224))
	     New();
	  }


	   setcolor(4);
	 rectangle(410,205,500,224);

    fflush(stdin);
    gotoxy(36,10);
    gets(u);
    gotoxy(36,12);
      for(int i=0;i<8;i++)
       {
	p[i]=getch();
	printf("*");
       }
       p[i] = '\0';
	 setcolor(2);
	// rectangle(410,205,500,224);
	 rectangle(326,205,401,224);
	 p[i] = '\0';
       delay(1500);
       while(!kbhit())
	{
	   in.x.ax=3;
	   int86 (0x33,&in,&out);
	   mousex=out.x.cx;
	   mousey=out.x.dx;

	   if((out.x.bx==1)&&(mousex>=326&&mousex<=401)&&(mousey>=205&&mousey<=224)) //326,401,205,224
	   {      // again:
		fseek(fp, 0, 0);
		acc a;
		while(fread(&a,sizeof(acc),1,fp))
		{
			if ((strcmp(a.userid, u) == 0) && (strcmp(a.userpass, p) == 0))
			{
				MatchFlag = 1;
			}
		}
		if(MatchFlag == 1)
		{
		gotoxy(20,20);
		printf("Please wait redirecting");
		for(int j=0;j<4;j++)
		{
		delay(1000);
		printf(".");
		}
		sho(a.name, a.email, a.address, a.pincode, a.contactNo, a.member);
		}
		else
		{
		gotoxy(20,20);
		printf("Wrong password!");
		delay(1500);
		}
		login();
	   }
	   if((out.x.bx==1)&&(mousex>=410&&mousex<=500)&&(mousey>=205&&mousey<=224))
	   {
	      New();
		break;
	   }
	}

}