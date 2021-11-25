#include <stdio.h> //(STandarD Input Output)
#include <conio.h>
#include <iostream> //Input Output STREAM header (cout, cin, endl)
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
COORD k = {x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}
main()
{int p;
goto menu;

// Persegi Panjang //
ppanjang:
char c1;
int ps,lb,kpj;
system("cls");
gotoxy(5,4);printf("=====================================");
gotoxy(5,5);printf(" Menghitung Keliling Persegi Panjang ");
gotoxy(5,6);printf("=====================================");
gotoxy(5,7);printf("Panjang Sisi : ");
gotoxy(5,8);printf("Lebar        : ");
gotoxy(5,9);printf("-------------------------------------");
gotoxy(5,10);printf("Keliling     : ");
gotoxy(5,11);printf("------------------------------------");
gotoxy(22,7);scanf("%i",&ps);
gotoxy(22,8);scanf("%i",&lb);
kpj=2*(ps + lb);
gotoxy(22,10);printf("%i",kpj);
c1=getche();
goto menu;

// Persegi //
persegi:
char c2;
int sisi,lps;
system("cls");
gotoxy(5,4);printf("====================================");
gotoxy(5,5);printf(" Menghitung Keliling Persegi");
gotoxy(5,6);printf("====================================");
gotoxy(5,7);printf("Panjang Sisi : ");
gotoxy(5,8);printf("------------------------------------");
gotoxy(5,9);printf("Keliling     : ");
gotoxy(5,10);printf("-----------------------------------");
gotoxy(22,7);scanf("%i",&sisi);
lps=4*sisi;
gotoxy(22,9);printf("%i",lps);
c2=getche();
goto menu;

// Belah Ketupat //
bketupat:
char c3;
int sbk,kbk;
system("cls");
gotoxy(5,4);printf("====================================");
gotoxy(5,5);printf(" Menghitung Keliling Belah Ketupat ");
gotoxy(5,6);printf("====================================");
gotoxy(5,7);printf("Panjang Sisi : ");
gotoxy(5,8);printf("------------------------------------");
gotoxy(5,9);printf("Keliling     : ");
gotoxy(5,10);printf("-----------------------------------");
gotoxy(22,7);scanf("%i",&sbk);
kbk=4*sbk;
gotoxy(22,9);printf("%i",kbk);
c3=getche();
goto menu;

// Lingkaran //
lingkaran:
char c4;
float jr,kl;
system("cls");
gotoxy(5,4);printf("====================================");
gotoxy(5,5);printf(" Menghitung Keliling Lingkaran");
gotoxy(5,6);printf("====================================");
gotoxy(5,7);printf("Jari - Jari : ");
gotoxy(5,8);printf("------------------------------------");
gotoxy(5,9);printf("Keliling    : ");
gotoxy(5,10);printf("-----------------------------------");
gotoxy(22,7);scanf("%f",&jr);
kl=2*3.14*jr;
gotoxy(20,9);printf("%6.2f",kl);
c4=getche();
goto menu;

// Untuk Menu Utama // 
menu: 
do
{system("cls");
gotoxy(10,4);printf("=============================");
gotoxy(10,5);printf(" MENU UTAMA BANGUN DATAR ");
gotoxy(10,6);printf("=============================");
gotoxy(10,7);printf("[1] Keliling Persegi Panjang");
gotoxy(10,8);printf("[2] Keliling Persegi");
gotoxy(10,9);printf("[3] Keliling Belah Ketupat");
gotoxy(10,10);printf("[4] Keliling Lingkaran");
gotoxy(10,11);printf("[0] Selesai");
gotoxy(10,12);printf("-----------------------------");
p=5;
gotoxy(10,14);printf("-----------------------------");

while (p>4)
{gotoxy(10,13);printf("Pilihan : ");
scanf("%i",&p);
}
if (p==1)
{goto ppanjang;}
else if (p==2)
{goto persegi;}
else if (p==3)
{goto bketupat;} 
else if (p==4)
{goto lingkaran;}
} while (p!=0);
}
