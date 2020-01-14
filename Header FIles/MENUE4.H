

void men4()
{

 char dish1[80],dish2[80],dish3[80],dish4[80],dish5[80],dish6[80],dish7[80],dish8[80];
  int m1=00,m2=00,m3=00,m4=00,m5=00,m6=00,m7=00,m8=00;
  int p1=80,p2=65,p3=74,p4=30,p5=257,p6=44,p7=35,p8=43;
  int sr=0,ff=5,c[8],r[8]={0,0,0,0,0,0,0,0},t[8]={0,0,0,0,0,0,0,0};

  int pr[8],tota=00;


 union REGS in,out;
 int mousex,mousey;
 int res_id,price;
  strcpy(dish1,"paneer");
  strcpy(dish2,"Cheese");
  strcpy(dish3,"pasta");
  strcpy(dish4,"corn");
  strcpy(dish5,"pizza");
  strcpy(dish6,"coke");
  strcpy(dish7,"float");
  strcpy(dish8," fries");

  int gdriver = DETECT,gmode,i;
  initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");

  line(300,40,300,400);
   in.x.ax=1;
   int86 (0X33,&in,&out);

       rectangle(450,404,580,420);
    outtextxy(485,410,"ORDER");



  setcolor(4);
  rectangle(150,30,210,48);//Menu
  gotoxy(22,3);
  setcolor(15);
  printf("Menu");

  setcolor(4);
  rectangle(400,30,450,48);//Menu
  gotoxy(52,3);
  setcolor(15);
  printf("Bill");


    gotoxy(55,25);
    printf("Total-");
   setcolor(15);
   rectangle(40,20,600,430);//boundry
   rectangle(38,18,602,432);
   setcolor(15);
   //  rectangle(50,63,67,78); //-
      gotoxy(8,5);
      printf("-");
      rectangle(70,63,89,80);//quantity
      gotoxy(10,5);
      printf("%d",m1);
      gotoxy(19,5);
      printf("%s",dish1);
      gotoxy(28,5);
      printf("Rs%d",p1);
   //   rectangle(90,63,110,80);//+      m1
      gotoxy(13,5);
      printf("+");

  //  rectangle(50,95,67,112); //-
      gotoxy(8,7);
      printf("-");
      rectangle(70,95,89,112);//quantity
      gotoxy(10,7);
      printf("%d",m2);
      gotoxy(19,7);
      printf("%s",dish2);
      gotoxy(28,7);
      printf("Rs%d",p2);
 //  rectangle(90,95,110,112);//+          m2
      gotoxy(13,7);
      printf("+");

 //  rectangle(50,127,67,144); //-
      gotoxy(8,9);
      printf("-");
      rectangle(70,127,89,144);//quantity
      gotoxy(10,9);
      printf("%d",m3);
      gotoxy(19,9);
      printf("%s",dish3);
      gotoxy(28,9);
      printf("Rs%d",p3);
      //  rectangle(90,127,110,144);//+           m3
      gotoxy(13,9);
      printf("+");

       //  rectangle(50,159,67,176); //-
      gotoxy(8,11);
      printf("-");
      rectangle(70,159,89,176);//quantity
      gotoxy(10,11);
      printf("%d",m4);
	 gotoxy(19,11);
      printf("%s",dish4);
      gotoxy(28,11);
      printf("Rs%d",p4);
 //  rectangle(90,159,110,176);//+             m4
      gotoxy(13,11);
      printf("+");

      //  rectangle(50,191,67,208); //-
      gotoxy(8,13);
      printf("-");
      rectangle(70,191,89,208);//quantity
      gotoxy(10,13);
      printf("%d",m5);
	 gotoxy(19,13);
      printf("%s",dish5);
      gotoxy(28,13);
      printf("Rs%d",p5);
   //   rectangle(90,191,110,208);//+              m5
      gotoxy(13,13);
      printf("+");

  //  rectangle(50,223,67,240); //-
      gotoxy(8,15);
      printf("-");
      rectangle(70,223,89,240);//quantity
      gotoxy(10,15);
      printf("%d",m6);
      gotoxy(19,15);
      printf("%s",dish6);
      gotoxy(28,15);
      printf("Rs%d",p6);
 //  rectangle(90,223,110,240);//+                  m6
      gotoxy(13,15);
      printf("+");

 //  rectangle(50,255,67,272); //-
      gotoxy(8,17);
      printf("-");
      rectangle(70,255,89,272);//quantity
      gotoxy(10,17);
      printf("%d",m7);
      gotoxy(19,17);
      printf("%s",dish7);
      gotoxy(28,17);
      printf("Rs%d",p7);
 //  rectangle(90,255,110,272);//+                   m7
      gotoxy(13,17);
      printf("+");

       //  rectangle(50,287,67,304); //-
      gotoxy(8,19);
      printf("-");
      rectangle(70,287,89,304);//quantity
      gotoxy(10,19);
      printf("%d",m8);
	 gotoxy(19,19);
      printf("%s",dish8);
      gotoxy(28,19);
      printf("Rs%d",p8);
 //  rectangle(90,287,110,304);//+                   m8
      gotoxy(13,19);
      printf("+");

 while(!kbhit())
	  {
	    in.x.ax=3;
	    int86 (0x33,&in,&out);
	    mousex=out.x.cx;
	    mousey=out.x.dx;

	    if((m1>=1)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=63&&mousey<=78))
	    { m1--;
	    gotoxy(10,5);
	    printf("%d",m1);
	    gotoxy(45,c[0]);
	    printf("%s",dish1);
	    printf(" *");
	    printf(" %d  =  ",m1);
	    t[0]=p1*m1;
	    gotoxy(58,c[0]);
	    printf("     ");
	    gotoxy(58,c[0]);
	    printf("%d",t[0]);
	    delay(400);
	     }                    //m1
	    if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=63&&mousey<=80))
	    {   if((m1==0)&&(r[0]==0))
	      { sr++;c[0]=ff;
	      ff=ff+2; r[0]++;
	      pr[0]=sr;
	       }
	     m1++;
	     gotoxy(10,5);
	     printf("%d",m1);
	     gotoxy(40,c[0]);
	    printf("%d)",pr[0]);
	    gotoxy(45,c[0]);
	    printf("%s",dish1);
	    printf(" *");
	    printf(" %d  =  ",m1);
	    t[0]=p1*m1;
	    gotoxy(58,c[0]);
	    printf("     ");
	    gotoxy(58,c[0]);
	    printf("%d",t[0]);
	     delay(400);
	    }

	     if((m2>=1)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=95&&mousey<=112))
	    {
	    m2--;
	    gotoxy(10,7);
	    printf("%d",m2);
	    gotoxy(45,c[1]);
	    printf("%s",dish2);
	    printf(" *");
	    printf(" %d  =  ",m2);
	    t[1]=p2*m2;
	    gotoxy(58,c[1]);
	    printf("     ");
	    gotoxy(58,c[1]);
	    printf("%d",t[1]);


	     delay(400);
	     }             //m2
	     if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=95&&mousey<=112))
	     {
	      if((m2==0)&&(r[1]==0))
	      { sr++;c[1]=ff;
	      ff=ff+2; r[1]++;
	      pr[1]=sr;
	       }

	     m2++;
	     gotoxy(10,7);
	     printf("%d",m2);
	     gotoxy(40,c[1]);
	    printf("%d)",pr[1]);
	    gotoxy(45,c[1]);
	    printf("%s",dish2);
	    printf(" *");
	    printf(" %d  =  ",m2);
	    t[1]=p2*m2;
	    gotoxy(58,c[1]);
	    printf("     ");
	    gotoxy(58,c[1]);
	    printf("%d",t[1]);

	     delay(400);
	    }

	     if((m3!=0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=127&&mousey<=144))
	    { m3--;
	    gotoxy(10,9);
	     printf("%d",m3);
	     gotoxy(45,c[2]);
	    printf("%s",dish3);
	    printf(" *");
	    printf(" %d  =  ",m3);
	    t[2]=p3*m3;
	    gotoxy(58,c[2]);
	    printf("     ");
	    gotoxy(58,c[2]);
	    printf("%d",t[2]);

	     delay(300);
	    }			  //m3
	     if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=127&&mousey<=144))
	     {
	      if((m3==0)&&(r[2]==0))
	      { sr++;c[2]=ff;
	      ff=ff+2; r[2]++;
	      pr[2]=sr;
	       }

	     m3++;
	     gotoxy(10,9);
	     printf("%d",m3);
	     gotoxy(40,c[2]);
	    printf("%d)",pr[2]);
	    gotoxy(45,c[2]);
	    printf("%s",dish3);
	    printf(" *");
	    printf(" %d  =  ",m3);
	    t[2]=p3*m3;
	    gotoxy(58,c[2]);
	    printf("     ");
	    gotoxy(58,c[2]);
	    printf("%d",t[2]);


	     delay(400);
	    }


	     if((m4!=0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=159&&mousey<=176))
	    { m4--;
	    gotoxy(10,11);
	     printf("%d",m4);

	    gotoxy(45,c[3]);
	    printf("%s",dish4);
	    printf(" *");
	    printf(" %d  =  ",m4);
	    t[3]=p4*m4;
	    gotoxy(58,c[3]);
	    printf("     ");
	    gotoxy(58,c[3]);
	    printf("%d",t[3]);

	     delay(400);
	    }			  //m4
	    if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=159&&mousey<=176))
	     {

	       if((m4==0)&&(r[3]==0))
	      { sr++;c[3]=ff;
	      ff=ff+2; r[3]++;
	      pr[3]=sr;
	       }

	     m4++;
	     gotoxy(10,11);
	     printf("%d",m4);

	     gotoxy(40,c[3]);
	    printf("%d)",pr[3]);
	    gotoxy(45,c[3]);
	    printf("%s",dish4);
	    printf(" *");
	    printf(" %d  =  ",m4);
	    t[3]=p4*m4;
	    gotoxy(58,c[3]);
	    printf("     ");
	    gotoxy(58,c[3]);
	    printf("%d",t[3]);


	     delay(400);
	    }

	    if((m5>0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=191&&mousey<=208))
	    { m5--;
	    gotoxy(10,13);
	     printf("%d",m5);

	    gotoxy(45,c[4]);
	    printf("%s",dish5);
	    printf(" *");
	    printf(" %d  =  ",m5);
	    t[4]=p5*m5;
	    gotoxy(58,c[4]);
	    printf("     ");
	    gotoxy(58,c[4]);
	    printf("%d",t[4]);

	     delay(400);
	    }			  //m5
	    if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=191&&mousey<=208))
	     {
	       if((m5==0)&&(r[4]==0))
	      { sr++;c[4]=ff;
	      ff=ff+2; r[4]++;
	      pr[4]=sr;
	       }

	     m5++;
	     gotoxy(10,13);
	     printf("%d",m5);

	     gotoxy(40,c[4]);
	    printf("%d)",pr[4]);
	    gotoxy(45,c[4]);
	    printf("%s",dish5);
	    printf(" *");
	    printf(" %d  =  ",m5);
	    t[4]=p5*m5;
	    gotoxy(58,c[4]);
	    printf("     ");
	    gotoxy(58,c[4]);
	    printf("%d",t[4]);
	    delay(400);
	    }


	    if((m6!=0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=223&&mousey<=240))
	    { m6--;
	    gotoxy(10,15);
	     printf("%d",m6);

	    gotoxy(45,c[5]);
	    printf("%s",dish6);
	    printf(" *");
	    printf(" %d  =  ",m6);
	    t[5]=p6*m6;
	    gotoxy(58,c[5]);
	    printf("     ");
	    gotoxy(58,c[5]);
	    printf("%d",t[5]);
	     delay(400);
	    }			  //m6
	    if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=223&&mousey<=240))
	     {
	       if((m6==0)&&(r[5]==0))
	      { sr++;c[5]=ff;
	      ff=ff+2; r[5]++;
	      pr[5]=sr;
	       }

	     m6++;
	     gotoxy(10,15);
	     printf("%d",m6);

	     gotoxy(40,c[5]);
	    printf("%d)",pr[5]);
	    gotoxy(45,c[5]);
	    printf("%s",dish6);
	    printf(" *");
	    printf(" %d  =  ",m6);
	    t[5]=p6*m6;
	    gotoxy(58,c[5]);
	    printf("     ");
	    gotoxy(58,c[5]);
	    printf("%d",t[5]);

	     delay(400);
	    }

	    if((m7!=0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=225&&mousey<=272))
	    { m7--;
	    gotoxy(10,17);
	     printf("%d",m7);

	    gotoxy(45,c[6]);
	    printf("%s",dish7);
	    printf(" *");
	    printf(" %d  =  ",m7);
	    t[6]=p7*m7;
	    gotoxy(58,c[6]);
	    printf("     ");
	    gotoxy(58,c[6]);
	    printf("%d",t[6]);


	     delay(400);
	    }			  //m7

	     if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=255&&mousey<=272))
	     {



	       if((m7==0)&&(r[6]==0))
	      { sr++;c[6]=ff;
	      ff=ff+2; r[6]++;
	      pr[6]=sr;
	       }

	     m7++;
	     gotoxy(10,17);
	     printf("%d",m7);

	     gotoxy(40,c[6]);
	    printf("%d)",pr[6]);
	    gotoxy(45,c[6]);
	    printf("%s",dish7);
	    printf(" *");
	    printf(" %d  = ",m7);
	    t[6]=p7*m7;
	    gotoxy(59,c[6]);
	    printf("     ");
	    gotoxy(59,c[6]);
	    printf("%d",t[6]);


	     delay(400);
	    }




	    if((m8!=0)&&(out.x.bx==1)&&(mousex>=50&&mousex<=67)&&(mousey>=287&&mousey<=304))
	    { m8--;
	    gotoxy(10,19);
	     printf("%d",m8);

	    gotoxy(45,c[7]);
	    printf("%s",dish8);
	    printf(" *");
	    printf(" %d  =  ",m8);
	    t[7]=p8*m8;
	    gotoxy(58,c[7]);
	    printf("     ");
	    gotoxy(58,c[7]);
	    printf("%d",t[7]);


	     delay(400);
	    }			  //m8

	     if((out.x.bx==1)&&(mousex>=90&&mousex<=110)&&(mousey>=287&&mousey<=304))
	     {

	    if((m8==0)&&(r[7]==0))
	      { sr++;c[7]=ff;
	      ff=ff+2; r[7]++;
	      pr[7]=sr;
	       }

	     m8++;
	     gotoxy(10,19);
	     printf("%d",m8);

	     gotoxy(40,c[7]);
	    printf("%d)",pr[7]);
	    gotoxy(45,c[7]);
	    printf("%s",dish8);
	    printf(" *");
	    printf(" %d  =  ",m8);
	    t[7]=p8*m8;
	    gotoxy(58,c[7]);
	    printf("     ");
	    gotoxy(58,c[7]);
	    printf("%d",t[7]);

	     delay(400);
	    }
 if((out.x.bx==1)&&(mousex>=450&&mousex<=580)&&(mousey>=404&&mousey<=420))
	   {
	    end1();
	   }


	//  gotoxy(67,25);
	  //printf("     ");
	  gotoxy(65,25);
	  printf("%d   ",tota);
	  tota=(m1*p1)+(m2*p2)+(m3*p3)+(m4*p4)+(m5*p5)+(m6*p6)+(m7*p7)+(m8*p8);
	  }



  getch();
  cleardevice();
 closegraph();

}

