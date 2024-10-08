#include<iostream>
using namespace std;
int main()
{
    int i;
    int nilai[5];
    int *ptrnilai;
    ptrnilai = nilai;

    for (i = 0; i < 5; i++)
    {
        cout << "Masukan Nilai Pertama = ";
        cin >> nilai[i];
    }

    cout << std::endl;
    cout << "Hasil Pengaksesan Elemen Array Lewat Pointer" << std::endl << std::endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Elemen " << i + 1 << ". Nilai " << nilai[i];
        cout << ", Menempati Alamat Memori = ";
        cout << &ptrnilai[i];
        cout << std::endl;
    }

    getchar();

    return 0;
}

