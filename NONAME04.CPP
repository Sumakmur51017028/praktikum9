#include <iostream.h>
#include <conio.h>
#include <math.h>

int panjang, lebar; //llaklarasi variabel global Void input 0 ; I / deklataal prototipe fungal

void Luas()

{ int ls; //ll deklarasi variabol lokal

ls= panjang * lebar;
 cout<<"Luasnya adalah : "<<ls; }

void Keliling()
{
int kl; // deklaraai variabel lokal
kl = (2*panjang) + (2*lebar);
cout<<"Kelilingnya adalah : "<<kl;
}
void Diagonal()

{float dg; // deklarasi variabel lokal

dg = sqrt((panjang*panjang)+(lebar*lebar));
cout<<"Diagonalnya adalah : "<<dg;
}
void main()
{
int pilih;
do
{
clrscr();
cout<<"Pilihlah -----> "<<endl;
cout<<"1. Luas Persegi Panjang \n";
cout<<"2. Keliling Persegi Panjang \n";
cout<<"3. Diagonal Persegi Panjang \n";
cout<<"4. SELESAI \n";
cout<<"Hasukkan Pilihan Anda 2 "; cin>>pilih;

if (pilih!=4)
input(); //pemanggilan fungal Input:
switch (pilih) {

case 1 : Luas(); //penngqi1an fungu’. luas
break;

case 2 : Keliling(); //pemangqnan tungu kouung
break;

case 3 : Diagonal(); //pemnggnan fungal diagonal
break;

case 4 : cout<<"terima Kasih ";
getch();
} while (pilih !=4); }

void input()

{

cout<<"Masukkan Nilai Panjang : ";
cin>>panjang;
cout<<"Masukkan Nilai Lebar : ";
cin>>lebar;
return;
}
}