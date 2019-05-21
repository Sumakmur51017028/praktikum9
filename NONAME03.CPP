#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

double getradius();
double square(double);
int main()
{
const double PI=3.14159;
double rad;
cout<<"program ini untuk menghitung luas ingkaran.\n";
rad=getradius();
cout<<"luasnya adalah: "<<PI*square(rad)<<endl;
getch();return 0;
}
double getradius()
{
double radius;
cout<<"masukkan jarijari lingkaran: ";cin>>radius;
return radius;
}
double square(double number)
{
return number*number;
}

