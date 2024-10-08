#include<iostream>
#include<conio.h>
using namespace std;
main()
{
char band_metal[] = "SEPULTURA";
char *band_punk = "RANCID";
cout<<"Nama Band Metal = "<<band_metal<<endl;
cout<<"Nama Band Punk = "<<band_punk<<endl;
band_punk+=3; //menambah nilai penunjuk / pointer
cout<<"Nama Band Metal = "<<band_metal<<endl;
cout<<"Nama Band Punk = "<<band_punk;
getche();
}
