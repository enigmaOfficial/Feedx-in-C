int end1()
{
	clrscr(); gotoxy(0,20);
	delline();
	gotoxy(0,21)          ;
	delline();
	gotoxy(0,22)           ;
	delline();
	gotoxy(0,23)            ;
	delline();
	gotoxy(0,24)             ;
	delline();
	gotoxy(0,25)              ;
	delline();
	cleardevice();
	setcolor(4);
	settextstyle(1,0,6);
	outtextxy(215,150,"Thank YOU");
	delay(1000);
	setcolor(4);
	settextstyle(1,0,6);
	outtextxy(300,200,"for");
	delay(1000);
	setcolor(4);
	settextstyle(1,0,6);
	outtextxy(260,250,"Ordering");
return 0;
}