#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int pil;
	cout<<"========MENU========"<<endl;
	cout<<"1. MAKANAN"<<endl;
	cout<<"2. MINUMAN"<<endl;
	cout<<"Input Pilihan [1..2] : ";
	cin>>pil;
	if(pil==1)
	{
		cout<<"MENU MAKANAN"<<endl;
		cout<<"1. Nasi Goreng Special " <<endl;
		cout<<"1. Nasi Goreng Seafood " <<endl;
		cout<<"1. Nasi Campur " <<endl;
		cout<<"Masukan Inputan [1..3] : ";
		cin>>pil;
			if (pil==1)
			{
				cout<<"1. Nasi Goreng Special";
			}
			else if (pil==2)
			{
				cout<<"2. Nasi Goreng Seafood";
			}
			else if(pil==3)
			{
				cout<<"3. Nasi Campur";
			}
			else
			{
				cout<<"Pilihan hanya ada sampai 3";
			}
	}
	else if (pil==2)
	{
		cout<<"MENU MINUMAN";
	}
	else
	{
		cout<<"Pilihan anda salah!";
	}
return 0;
}
