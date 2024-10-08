#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan input
    int n, d;

    // Meminta pengguna untuk memasukkan angka
    cout << "Masukkan bil. pertama: ";
    cin >> n;
    
    cout << "Masukkan bil. kedua: ";
    cin >> d;
    
    if(n%d==0){
    	cout<< n <<" habis dibagi oleh " <<d<<endl;
	}
   
    return 0;
}

