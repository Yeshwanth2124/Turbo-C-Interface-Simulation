#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	do
	{
		ch=getch();
		printf("\n%d",ch);
		if(ch==0)
		{
			ch=getch();
			printf("n%d",ch);
		}

	}while(ch!=27);
}