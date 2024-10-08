#include<stdio.h> 
#include<conio.h> 
#include<iostream> 
using namespace std;

//deklarasi struktur 
struct koordinat{
	int x, y;
};
void ubah_posisi(koordinat *posisi); //prototipe 
main(){
	koordinat posisi; //definisi variabel struktur 
	posisi.x = 10;
	posisi.y = 30;
	cout<<"isi semula : x = "<<posisi.x<<"y = "<<posisi.y<<endl; 
	ubah_posisi(&posisi); //parameter berupa alamat
	cout<<"isi sekarang : x = "<<posisi.x<<"y = "<<posisi.y<<endl;
}
//definisi fungsi
void ubah_posisi(koordinat *posisi){ 
	(*posisi).x = 100;
	(*posisi).y = 300;
}


