#include<string.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>

#include<end.h>
#include<newuser.h>
#include<login.h>
#include<welcome.h>

void main()
{
clrscr();
int gdriver = DETECT,gmode,i;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
welcome();
delay(2000);
login();
closegraph();
}


