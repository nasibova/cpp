
 
#include <iostream>
#include<stdlib.h>
using namespace std;
 
double Topla(double s1,double s2)
{
	return s1+s2;
}
double Cikar(double s1,double s2)
{
	return s1-s2;
}
double Carp(double s1,double s2)
{
	return s1*s2;
}
double Bol(double s1,double s2)
{
	return s1/s2;
}
 
int main()
{
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	double sayi1,sayi2;;
	cout<<"Sayi 1 : ";
	cin>>sayi1;
	cout<<"Sayi 2 : ";
	cin>>sayi2;
	
	cout<<"Toplam : "<<Topla(sayi1,sayi2)<<endl;
	cout<<"Fark : "<<Cikar(sayi1,sayi2)<<endl;
	cout<<"�arpim : "<<Carp(sayi1,sayi2)<<endl;
	cout<<"B�l�m : "<<Bol(sayi1,sayi2)<<endl;
	
}
