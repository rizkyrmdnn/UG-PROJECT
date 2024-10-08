#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//deklarasikan variable
	int AngkaHari;
	//input angka hari
	cout<<"Input Angka Hari : ";
	cin>> AngkaHari;
	switch (AngkaHari)
		{
			case 1 : cout<<"MONDAY";
				break;
			case 2 : cout<<"TUESDAY";
				break;
			case 3 : cout<<"WEDNESDAY";
				break;
			case 4 : cout<<"THURSDAY";
				break;
			case 5 : cout<<"FRIDAY";
				break;
			case 6 : cout<<"SATURDAY";
				break;
			case 7 : cout<<"SUNDAY";
				break;
			case 8 : cout<<"WRONG DAY";
				break;
		}
	return 0;
}
