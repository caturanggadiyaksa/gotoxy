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
			panjang:
			char c1;
			int pj, lb, lpj;
		
			system ("cls");
		
			gotoxy(5,4);printf("================================");
			gotoxy(5,5);printf(" Menghitung Luas Persegi Panjang");
			gotoxy(5,6);printf("================================");
			gotoxy(5,7);printf("Panjang		:");
			gotoxy(5,8);printf("Lebar		:");
			gotoxy(5,9);printf("Luas		:");
			gotoxy(5,10);printf("===============================");
			gotoxy(26,7);scanf("%i", &pj);
			gotoxy(26,8);scanf("%i",&lb);
			lpj=pj*lb;
			gotoxy(26,9);printf("%i",lpj);
			c1=getche();
			goto menu;
			
		//persegi
		persegi:
		char c2;
		int sisi,lps;
	
		system ("cls");
	
		gotoxy(5,4);printf("================================");
		gotoxy(5,5);printf(" Menghitung Luas Persegi");
		gotoxy(5,6);printf("================================");
		gotoxy(5,7);printf("Panjang	sisi	:");
		gotoxy(5,8);printf("Luas	:");
		gotoxy(5,10);printf("===============================");
		gotoxy(26,7);scanf("%i", &sisi);
		lps=sisi*sisi;
		gotoxy(26,8);printf("%i",lps);
		c2=getche();
		goto menu;
		
		//lingkaran
		lingkaran:
		char c3;
		float ls, jr;
	
		system ("cls");
	
		gotoxy(5,4);printf("================================");
		gotoxy(5,5);printf(" Menghitung Luas Lingkaran");
		gotoxy(5,6);printf("================================");
		gotoxy(5,7);printf("jari jari	:");
		gotoxy(5,8);printf("Luas	:");
		gotoxy(5,10);printf("===============================");
		gotoxy(26,7);scanf("%f", &jr);
		ls=3.14*jr*jr;
		gotoxy(26,8);printf("%6.2f",ls);
		c3=getche();
		goto menu;
		//menu utama
		menu:
		do
		{
			system("cls");
			
			gotoxy(10,4);printf("===================================================");
			gotoxy(10,5);printf("menu utama program");
			gotoxy(10,6);printf("===================================================");
			gotoxy(10,7);printf("[1] Luas Persegi Panjang");
			gotoxy(10,8);printf("[2] Luas Persegi");
			gotoxy(10,9);printf("[3] Luas Lingkaran");
			gotoxy(10,10);printf("[0] Selesai");
			gotoxy(10,11);printf("----------------------------");
			p = 4;
			gotoxy(10,13);printf("----------------------------");
			
			while (p>3)
		{
			gotoxy(22,12);printf("Pilihian :");
			scanf("%i", &p);
		}
	if(p==1)
	{
		goto panjang;
	}
	else if(p == 2)
	{
		goto persegi;
	}
	else if(p == 3)
	{
		goto lingkaran;
	}
		}
			while(p!=0);
}
