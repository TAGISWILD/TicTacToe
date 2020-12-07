/*
 *AUTHOR: Atharva Chauhan
 */
#include <Astdio.h>
#include <MMsystem.h>
/**************************************************************************/
int a, b, c, d, e, f, g, h, i;
char ync;
char p1[]="p1", p2[]="p2";
char one[]="1";
char two[]="2";
char three[]="3";
char four[]="4";
char five[]="5";
char six[]="6";
char seven[]="7";
char eight[]="8";
char nine[]="9";
char loc1[]="-";
char loc2[]="-";
char loc3[]="-";
char loc4[]="-";
char loc5[]="-";
char loc6[]="-";
char loc7[]="-";
char loc8[]="-";
char loc9[]="-";
/**********************************************************/
char loc[255];
/**************************************************************************/
void wincheck(void);
void UI (void);
void delay(long int msec);
void rout1(void);
void rout2(void);
void XandO(void);
/*************************************************************************/
int main()
{
	xando:
	XandO();
	printf("Do You Want To Play This Game Again?(Y/N)\n");
	scanf("%s",&ync);
	do XandO();
	while(ync=='y'||ync=='Y');
	if(ync=='n'||ync=='N'){printf("See You Soon Again!");}
	else{printf("Plz Answer As Y or N");goto xando;}		
}
/****************************************************************************/
void wincheck(void)
{
	if(a==b && b==c && c==a)
	{
		if(a==1 && b==1 && c==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(a==2 && b==2 && c==2)
		{
			printf("O wins\n");
			abort();
		}
	}
	else if(d==e && e==f && f==d)
	{
		if(d==1 && e==1 && f==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(d==2 && e==2 && f==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(g==h && h==i && i==g)
	{
		if(g==1 && h==1 && i==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(g==2 && h==2 && i==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(g==d && d==a && a==g)
	{
		if(g==1 && d==1 && a==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(g==2 && d==2 && a==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(h==e && e==b && b==h)
	{
		if(h==1 && e==1 && b==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(h==2 && e==2 && b==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(i==f && f==c && c==i)
	{
		if(i==1 && f==1 && c==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(i==2 && f==2 && c==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(g==e && e==c && c==g)
	{
		if(g==1 && e==1 && c==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(g==2 && e==2 && c==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
	else if(i==e && e==a && a==i)
	{
		if(i==1 && e==1 && a==1)
		{
			printf("X wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
		else if(i==2 && e==2 && a==2)
		{
			printf("O wins\n");
			PlaySound(TEXT("Pass2.wav"),NULL,SND_SYNC);
			abort();
		}
	}
}
void UI(void)
{

	system("Cls");
	printf("___________________\n");
	printf("|     |     |     |\n");
	printf("|  %s  |  %s  |  %s  |\n",loc7,loc8,loc9);
	printf("|_____|_____|_____|\n");
	printf("|     |     |     |\n");
	printf("|  %s  |  %s  |  %s  |\n",loc4,loc5,loc6);
	printf("|_____|_____|_____|\n");
	printf("|     |     |     |\n");
	printf("|  %s  |  %s  |  %s  |\n",loc1,loc2,loc3);
	printf("|_____|_____|_____|\n");
}
/***********************************************************************/
void delay(long int msec)
{
	for(int zinge = 0; zinge<=msec; zinge ++)
	{
		for(int binge = 0; binge<=2890; binge++)
		{
			
		}
	}
}
/*************************************************************************/
void rout1(void)
{
	maina:
	printf("X's Turn: ");
	scanf("%s",loc);
	if(!strcmp(loc,one))
	{
		if(a!=2)
		{
			a = 1;
			char loc1[]="X";
		}
		else
		{
			printf("Already Taken\n");
			delay(14000);
		}
	}
	else if(!strcmp(loc,two))
	{
		if(b!=2)
		{
			b = 1;
			char loc2[]="X";
		}
		else if(b==2)
		{
			char loc2[]="O";
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,three))
	{
		if(c!=2)
		{
			c = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,four))
	{
		if(d!=2)
		{
			d = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,five))
	{
		if(e!=2)
		{
			e = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,six))
	{
		if(f!=2)
		{
			f = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,seven))
	{
		if(g!=2)
		{
			g = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,eight))
	{
		if(h!=2)
		{
			h = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,nine))
	{
		if(i!=2)
		{
			i = 1;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else{
		printf("Please Choose From 1-9!\n");
		goto maina;
	}
}
/*************************************************************************/
void rout2(void)
{
	minimain:
	printf("O's Turn: ");
	scanf("%s",loc);
	if(!strcmp(loc,one))
	{
		if(a!=1)
		{
			a = 2;
			char loc1[]="O";
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,two))
	{
		if(b!=1)
		{
			b = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,three))
	{
		if(d!=1)
		{
			c = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,four))
	{
		if(d!=1)
		{
			d = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,five))
	{
		if(e!=1)
		{
			e = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,six))
	{
		if(f!=1)
		{
			f = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,seven))
	{
		if(g!=1)
		{
			g = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,eight))
	{
		if(h!=1)
		{
			h = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else if(!strcmp(loc,nine))
	{
		if(i!=1)
		{
			i = 2;
		}
		else
		{
			printf("Already Taken\n");
		}
	}
	else{
		printf("Please Choose from 1-9!\n");
		goto minimain;
	}
}
void XandO(void)
{
	main:
	rout1();
	system("Cls");
	wincheck();
	rout2();
	system("Cls");
	wincheck();
	goto main;
}
