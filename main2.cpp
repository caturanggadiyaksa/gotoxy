#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD k = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}

int main()
{
	int p;
	goto menu;
	
	//persegi panjang
	char c1;
	int panjang, lebar,KelilingPP;
	persegipanjang:
		
		system("cls");
		
		gotoxy(6,4);printf("--------------------------------------------");
		gotoxy(6,5);printf("|		Keliling Persegi Panjang	|");
		gotoxy(6,6);printf("------------------------------------------");
		gotoxy(6,7);printf("| Panjang	:					|");
		gotoxy(6,8);printf("| Lebar	:				|");
		gotoxy(6,9);printf("------------------------------------------");
		gotoxy(6,10);printf("| Keliling	:			|");
		gotoxy(23,7);scanf("%i",&panjang);
		gotoxy(23,8);scanf("%i",&lebar);
		KelilingPP= 2*(panjang+lebar);
		gotoxy(26,10);printf("%i",KelilingPP);
		c1=getche();
		goto menu;
	// persegi
	char c2;
	int sisi, kp;
	persegi:
		
		system("cls");
		
		gotoxy(6,4);printf("-----------------------------------");
		gotoxy(6,5);printf("|		Keliling Persegi 	|");
		gotoxy(6,6);printf("-----------------------------------");
		gotoxy(6,7);printf("| sisi	:			|");
		gotoxy(6,10);printf("| Keliling	:		|");
		gotoxy(23,7);scanf("%i",&sisi);
		kp = sisi*sisi;
		gotoxy(26,10);printf("%i",kp);
		c2=getche();
		goto menu;
		
	//Belah Ketupat
	char c3;
	int psisi, kbh;
	belahketupat:
		system("cls");
		
		gotoxy(6,4);printf("-------------------------------------------");
		gotoxy(6,5);printf("|		KELILING BELAH KETUPAT		|");
		gotoxy(6,6);printf("------------------------------------------");
		gotoxy(6,7);printf("| Panjang sisi	:			|");
		gotoxy(6,9);printf("------------------------------------------");
		gotoxy(6,10);printf("| Keliling	:			|");
		gotoxy(26,7);scanf("%i",&psisi);
		kbh=4*psisi;
		gotoxy(26,10);printf("%i",kbh);
		c3=getche();
		goto menu;
	//Lingkaran
	lingkaran:
	char c4;
	float jr,kelilinglingkaran;
	system("cls");
		
		gotoxy(6,4);printf("--------------------------------------------");
		gotoxy(6,5);printf("|		Keliling Persegi Panjang	|");
		gotoxy(6,6);printf("------------------------------------------");
		gotoxy(6,7);printf("| jari-jari	:			|");
		gotoxy(6,9);printf("------------------------------------------");
		gotoxy(6,10);printf("| Keliling	:			|");
		gotoxy(26,7);scanf("%f",&jr);
		kelilinglingkaran =2*3.14*jr;
		gotoxy(26,10);printf("%6.2f",kelilinglingkaran);
		c4=getche();
		goto menu;
	
	//menu utama
	menu:
		
		do
		{
			system("cls");
			
			gotoxy(11,4);printf("--------------------------------------");
			gotoxy(11,5);printf("|	Menu Utama Bangun Datar		|");
			gotoxy(11,6);printf("--------------------------------------");
			gotoxy(11,7);printf("| [1] Keliling Persegi Panjang	|");
			gotoxy(11,8);printf("| [2] Keliling Persegi		|");
			gotoxy(11,9);printf("| [3] Keliling Belah Ketupat		|");
			gotoxy(11,10);printf("| [4] Keliling Lingkaran		|");
			gotoxy(11,11);printf("| [0] Selesai			|");
			gotoxy(11,12);printf("-------------------------------------");
			p=5;
			gotoxy(11,14);printf("-------------------------------------");
			
			while (p>4)
			{
				gotoxy(11,13);printf("Pilihan :   ");
				scanf("%i",&p);
			}
			
			if (p == 1)
			{
				goto persegipanjang;
			}
			else if(p == 2)
			{
				goto persegi;
			}
			else if(p == 3)
			{
				goto belahketupat;
			}
			else if(p == 4)
			{
				goto lingkaran;
			}
		}
		while (p!=0);
}
