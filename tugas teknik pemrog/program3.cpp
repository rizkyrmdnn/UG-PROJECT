#include <iostream>

int main() {
    int gol = 2;

    if (gol == 1) {
        std::cout << "Gaji = 100";
    }
    else if (gol == 2) {
        std::cout << "Gaji = 200";
    }
    else if (gol == 3) {
        std::cout << "Gaji = 300";
    }
    else {
        std::cout << "Golongan salah";
    }

    return 0;
}

