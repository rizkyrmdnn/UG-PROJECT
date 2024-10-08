#include <iostream>
using namespace std;

int main() {
    int gol = 2;
    switch (gol) {
        case 1:
            cout << "Gaji = 100";
            break;
        case 2:
            cout << "Gaji = 200";
            break;
        case 3:
            cout << "Gaji = 300";
            break;
        default:
            cout << "Golongan salah";
            break;
    }

    return 0;
}

