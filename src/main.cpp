#include<conio.h>
#include<string.h>
#include<stdio.h>

void main()
{
	char ch = 240;
	char menu[11][11] = {{ch},"File","Edit","Search","Run","Compile","Debug","Project","Options","Window","Help"};
	char fmenu[9][12] = {"New","Update","Save","Save As","Save all","Change dir","Print","Dos shell","Quit"};
	char emenu[8][15] = {"Undo","Redo","Cut","Copy","Paste","Clear","Copy example","Show clipboard"};
	char smenu[8][24] = {"Find...","Replace...","Search again","Go to line number...","Previous error","Next error","Locate function.."};
	char rmenu[6][26] = {"Run","Program reset","Go to Cursor","Trace into","Step over","Arugments..."};
	char cmenu[6][26] = {"Compile","Make","Link","Build all","Information...","Remove messages"};
	char dmenu[6][26] = {"Inspect...","Evaluate/modify...","Call stack...","Watches","Toggle breakpoint...","Breakpoints..."};
	char pmenu[6][26] = {"Open project...","Close project","Add item...","Delete item","Local options...","Include files..."};
	char omenu[10][28] = {"Application...","Compiler","Transfer...","Make...","Linker","Librarian...","Debugger...","Directories...","Environment","Save..."};
	char wmenu[15][30] = {"Size/Move","Zoom","Tile","Cascade","Next","Close","Close all","Message","Output","Watch","User screen","Register","Project","Project notes","List all..."};
	char hmenu[6][26] = {"Contents","Index","Topic search","Previous topic","Help on help","About..."};


	int i,c,r;
	window(1,1,80,1); /* TOP WINDOW */
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();

	/* PRINTING ELEMENTS IN THE TOP WINDOW */
	c=2;
	for(i=0;i<11;i++)
	{
		gotoxy(c,1);
		textcolor(BLACK);
		cprintf("%s",menu[i]);
		c = c + strlen(menu[i]) + 2;
	}
	c=2;
	for(i=0;i<11;i++)
	{
		gotoxy(c,1);
		textcolor(RED);
		cprintf("%c",menu[i][0]);
		textcolor(BLACK);
		c = c + strlen(menu[i]) + 2;
	}

	/*slideshow */

	i=0;
	c=2;
	do
	{

		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(c,1);
		cprintf("%s",menu[i]);
		gotoxy(c,1);
		textcolor(RED);
		cprintf("%c",menu[i][0]);
		textcolor(BLACK);



		ch=getch();
		if(ch==0)
		{
			ch=getch();
		}
		if(ch==77||ch==75)
		{
			if(ch==77)
			{
				textbackground(WHITE);
				textcolor(BLACK);
				gotoxy(c,1);
				cprintf("%s",menu[i]);
				gotoxy(c,1);
				textcolor(RED);
				cprintf("%c",menu[i][0]);
				textcolor(BLACK);

				c = c + strlen(menu[i]) + 2;
				i++;
				if(i>10)
				{
					i=0;
					c=2;
				}
			}

			if(ch==75)
			{
				textbackground(WHITE);
				textcolor(BLACK);
				gotoxy(c,1);
				cprintf("%s",menu[i]);
				gotoxy(c,1);
				textcolor(RED);
				cprintf("%c",menu[i][0]);
				textcolor(BLACK);

				i--;
				if(i<0)
				{
					i=10;
					c=78;
				}
				c = c - strlen(menu[i]) - 2;
			}
		}

		if(ch==33)   /* for file window */
		{
			window(4,2,23,14);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<19;i++)
			{
				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,13);
				putch(196);
			}

			for(i=2;i<19;i++)
			{
				gotoxy(i,7);
				putch(196);       /* horizontal line
							in between */
				gotoxy(i,11);
				putch(196);
			}


			for(i=2;i<13;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(19,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(19,1);
			putch(191);

			gotoxy(2,13);
			putch(192);     /* for bottom corners */
			gotoxy(19,13);
			putch(217);

			gotoxy(2,7);
			putch(195);   /* middle corner 1 */
			gotoxy(19,7);
			putch(180);

			gotoxy(2,11);
			putch(195);    /* middle corner 2 */
			gotoxy(19,11);
			putch(180);



			/* for menu print */
			r=2;
			for(i=0;i<9;i++)
			{
				if(i==5 || i==8)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",fmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",fmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",fmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",fmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",fmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",fmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>8)
						{
							i=0;
							r=2;
						}
						if(i==5)
						{
							r++;
							r--;						      r=r+1;
						}
						if(i==8)
						{
							r=r+1;
						}

					}

					if(ch==72)   /* for up arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",fmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",fmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=8;
							r=13;
						}
						r--;
						if(r==11||r==7)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /*File Menu Closing Tag */

		if(ch==18)  /* for Edit window */
		{
			window(10,2,38,13);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<28;i++)
			{
				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,12);
				putch(196);
			}

			for(i=2;i<28;i++)
			{
				gotoxy(i,4);
				putch(196);       /* horizontal line
							in between */
				gotoxy(i,10);
				putch(196);
			}


			for(i=2;i<12;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(28,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(28,1);
			putch(191);

			gotoxy(2,12);
			putch(192);     /* for bottom corners */
			gotoxy(28,12);
			putch(217);

			gotoxy(2,4);
			putch(195);   /* middle corner 1 */
			gotoxy(28,4);
			putch(180);

			gotoxy(2,10);
			putch(195);    /* middle corner 2 */
			gotoxy(28,10);
			putch(180);



			/* for menu print */
			r=2;
			for(i=0;i<8;i++)
			{
				if(i==2 || i==7)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",emenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",emenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",emenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",emenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",emenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",emenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>7)
						{
							i=0;
							r=2;
						}
						if(i==2)
						{
							r++;
							r--;						      r=r+1;
						}
						if(i==7)
						{
							r=r+1;
						}

					}

					if(ch==72)   /* for up arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",emenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",emenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=7;
							r=12;
						}
						r--;
						if(r==10|r==4)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /* Edit Menu Closing Tag */


		if(ch==31)  /* for Search window */
		{
			window(16,2,45,11);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<29;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,10);
				putch(196);
			}

			for(i=2;i<29;i++)
			{
				gotoxy(i,5);
				putch(196);       /* horizontal line in between */

			}


			for(i=2;i<10;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(29,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(29,1);
			putch(191);

			gotoxy(2,10);
			putch(192);     /* for bottom corners */
			gotoxy(29,10);
			putch(217);

			gotoxy(2,5);
			putch(195);   /* middle corner 1 */
			gotoxy(29,5);
			putch(180);


			/* for menu print */
			r=2;
			for(i=0;i<7;i++)
			{
				if(i==3)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",smenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",smenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",smenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",smenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",smenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",smenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>6)
						{
							i=0;
							r=2;
						}
						if(i==3)
						{
							r++;
							r--;						      r=r+1;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",smenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",smenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=6;
							r=10;
						}
						r--;
						if(r==5)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /* Search Menu Closing Tag */

		if(ch==19)  /* for Run window */
		{
			window(24,2,51,9);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<27;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,8);
				putch(196);
			}


			for(i=2;i<8;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(27,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(27,1);
			putch(191);

			gotoxy(2,8);
			putch(192);     /* for bottom corners */
			gotoxy(27,8);
			putch(217);

			/* for Search print */
			r=2;
			for(i=0;i<6;i++)
			{

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",rmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",rmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",rmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",rmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",rmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",rmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>5)
						{
							i=0;
							r=2;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",rmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",rmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=5;
							r=8;
						}
						r--;

					}

				}

			}while(ch!=27);

		} /* Run Menu Closing Tag */

		if(ch==46)  /* for Compile window */
		{
			window(28,2,55,10);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<27;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,9);
				putch(196);
			}

			for(i=2;i<27;i++)
			{
				gotoxy(i,6);
				putch(196);       /* horizontal line in between */

			}


			for(i=2;i<9;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(27,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(27,1);
			putch(191);

			gotoxy(2,9);
			putch(192);     /* for bottom corners */
			gotoxy(27,9);
			putch(217);

			gotoxy(2,6);
			putch(195);   /* middle corner 1 */
			gotoxy(27,6);
			putch(180);


			/* for menu print */
			r=2;
			for(i=0;i<6;i++)
			{
				if(i==4)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",cmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",cmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",cmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",cmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",cmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",cmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>5)
						{
							i=0;
							r=2;
						}
						if(i==4)
						{
							r++;
							r--;						      r=r+1;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",cmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",cmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=5;
							r=9;
						}
						r--;
						if(r==6)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /* Compiler Menu Closing Tag */


		if(ch==32)  /* for Debug window */
		{
			window(38,2,69,9);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<31;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,8);
				putch(196);
			}

			for(i=2;i<31;i++)
			{
				gotoxy(i,8);
				putch(196);       /* horizontal line in between */

			}


			for(i=2;i<8;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(31,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(31,1);
			putch(191);

			gotoxy(2,8);
			putch(192);     /* for bottom corners */
			gotoxy(31,8);
			putch(217);


			/* for menu print */
			r=2;
			for(i=0;i<6;i++)
			{

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",dmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",dmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",dmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",dmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",dmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",dmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>5)
						{
							i=0;
							r=2;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",dmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",dmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=5;
							r=8;
						}
						r--;

					}

				}

			}while(ch!=27);

		} /* Debug Menu Closing Tag */


		if(ch==25)  /* for Project window */
		{
			window(41,2,64,10);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<23;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,9);
				putch(196);
			}

			for(i=2;i<23;i++)
			{
				gotoxy(i,4);
				putch(196);       /* horizontal line in between */

			}


			for(i=2;i<9;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(23,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(23,1);
			putch(191);

			gotoxy(2,9);
			putch(192);     /* for bottom corners */
			gotoxy(23,9);
			putch(217);

			gotoxy(2,4);
			putch(195);   /* middle corner 1 */
			gotoxy(23,4);
			putch(180);


			/* for menu print */
			r=2;
			for(i=0;i<6;i++)
			{
				if(i==2)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",pmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",pmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",pmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",pmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",pmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",pmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>5)
						{
							i=0;
							r=2;
						}
						if(i==2)
						{
							r++;
							r--;						      r=r+1;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",pmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",pmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=5;
							r=9;
						}
						r--;
						if(r==4)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /* Project Menu Closing Tag */

		if(ch==24)   /* for Options window */
		{
			window(53,2,75,15);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<22;i++)
			{
				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,14);
				putch(196);
			}

			for(i=2;i<22;i++)
			{
				gotoxy(i,10);
				putch(196);       /* horizontal line
							in between */
				gotoxy(i,12);
				putch(196);
			}


			for(i=2;i<14;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(22,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(22,1);
			putch(191);

			gotoxy(2,14);
			putch(192);     /* for bottom corners */
			gotoxy(22,14);
			putch(217);

			gotoxy(2,10);
			putch(195);   /* middle corner 1 */
			gotoxy(22,10);
			putch(180);

			gotoxy(2,12);
			putch(195);    /* middle corner 2 */
			gotoxy(22,12);
			putch(180);



			/* for menu print */
			r=2;
			for(i=0;i<10;i++)
			{
				if(i==8 || i==9)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",omenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",omenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",omenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",omenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",omenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",omenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>9)
						{
							i=0;
							r=2;
						}
						if(i==8)
						{
							r++;
							r--;						      r=r+1;
						}
						if(i==9)
						{
							r=r+1;
						}

					}

					if(ch==72)   /* for up arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",omenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",omenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=9;
							r=14;
						}
						r--;
						if(r==12||r==10)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /*Options Menu Closing Tag */

		if(ch==17)   /* for Windows window */
		{
			window(52,2,80,20);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<28;i++)
			{
				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,19);
				putch(196);
			}

			for(i=2;i<28;i++)
			{
				gotoxy(i,9);
				putch(196);       /* horizontal line
							in between */
				gotoxy(i,17);
				putch(196);

			}

			for(i=2;i<19;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(28,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(28,1);
			putch(191);

			gotoxy(2,19);
			putch(192);     /* for bottom corners */
			gotoxy(28,19);
			putch(217);

			gotoxy(2,9);
			putch(195);   /* middle corner 1 */
			gotoxy(28,9);
			putch(180);

			gotoxy(2,17);
			putch(195);    /* middle corner 2 */
			gotoxy(28,17);
			putch(180);


			/* for menu print */
			r=2;
			for(i=0;i<15;i++)
			{
				if(i==7||i==14)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",wmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",wmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",wmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",wmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",wmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",wmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>14)
						{
							i=0;
							r=2;
						}
						if(i==7)
						{
							r++;
							r--;						      r=r+1;
						}
						if(i==14)
						{
							r=r+1;
						}

					}

					if(ch==72)   /* for up arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",wmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",wmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=14;
							r=19;
						}
						r--;
						if(r==17||r==9)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /*Windows Menu Closing Tag */

		if(ch==35)  /* for Help window */
		{
			window(50,2,80,10);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<30;i++)
			{

				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,9);
				putch(196);
			}

			for(i=2;i<30;i++)
			{
				gotoxy(i,7);
				putch(196);       /* horizontal line in between */

			}


			for(i=2;i<9;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(30,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(30,1);
			putch(191);

			gotoxy(2,9);
			putch(192);     /* for bottom corners */
			gotoxy(30,9);
			putch(217);

			gotoxy(2,7);
			putch(195);   /* middle corner 1 */
			gotoxy(30,7);
			putch(180);


			/* for menu print */
			r=2;
			for(i=0;i<6;i++)
			{
				if(i==5)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",hmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",hmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",hmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",hmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",hmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",hmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>5)
						{
							i=0;
							r=2;
						}
						if(i==5)
						{
							r++;
							r--;						      r=r+1;
						}

					}

					if(ch==72)   /* for up arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",hmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",hmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=5;
							r=9;
						}
						r--;
						if(r==7)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);

		} /* Help Menu Closing Tag */







	}while(ch!=27);




	window(1,2,80,24);  /* MIDDLE WINDOW */
	textbackground(BLUE);
	textcolor(WHITE);
	clrscr();

	for(i=3;i<=78;i++)
	{
	    gotoxy(i,1);
	    putch(205);
	    gotoxy(i,23);
	    putch(205);
	}

	for(i=2;i<23;i++)
	{
	    gotoxy(2,i);
	    putch(186);
	    gotoxy(79,i);
	    putch(186);
	}



	gotoxy(2,1);
	putch(201);
	gotoxy(79,1);
	putch(187);

	gotoxy(2,23);
	putch(200);
	gotoxy(79,23);
	putch(188);

	window(1,25,80,25); /* BOTTOM WINDOW */
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();

	gotoxy(2,1); /* 1 */
	textcolor(RED);
	cprintf("F1");

	gotoxy(5,1);
	textcolor(BLACK);
	cprintf("Help");


	gotoxy(11,1); /* 2 */
	textcolor(RED);
	cprintf("ALT-F8");

	gotoxy(18,1);
	textcolor(BLACK);
	cprintf("Next Msg");

	gotoxy(28,1); /* 3 */
	textcolor(RED);
	cprintf("Alt-F7");

	gotoxy(35,1);
	textcolor(BLACK);
	cprintf("Prev Msg");

	gotoxy(45,1); /* 4 */
	textcolor(RED);
	cprintf("Alt-F9");

	gotoxy(52,1);
	textcolor(BLACK);
	cprintf("Compile");

	gotoxy(61,1); /* 5 */
	textcolor(RED);
	cprintf("F9");

	gotoxy(64,1);
	textcolor(BLACK);
	cprintf("Make");

	gotoxy(70,1); /* 6 */
	textcolor(RED);
	cprintf("F10");

	gotoxy(74,1);
	textcolor(BLACK);
	cprintf("Menu");

}
