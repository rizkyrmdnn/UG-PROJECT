#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
int ilham;
int *raka; //pointer ke variabel
int **amir; // pointer pada pointer
ilham = 75;
cout<<"nilai ilham = "<<ilham<<endl;
//penugasan ke alamat memori
raka = &ilham;
amir = &raka;
cout<<"nilai raka hasil mengakses ilham = ";
cout<<*raka<<endl;
cout<<"nilai amir hasil mengakses ilham = ";
cout<<**amir<<endl;
getch();
}
