#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//deklarasikan variable
	int bil;
	//input bilangan
	cout<<"Input Bilangan : ";
	
	//merespon proses inputan
	
	cin>>bil;
	if (bil ==1) //pengkondisian bilangan = 1
		{
			cout<< "Anda menginput bilangan 1";
		}
		else if (bil ==2) //pengkondisian bilangan = 2
		{
				cout<< "Anda menginput bilangan 2";
		}
		else if (bil ==3) //pengkondisian bilangan = 3
		{
				cout<< "Anda menginput bilangan 3";
		}
		else
		{
			cout<< "Hanya menghasilkan output 1..3 saja";
		}
	return 0;
}
		
			
