#include<iostream>
using namespace std;
int main()
{
    int ilham, amir, *raka;
    ilham = 75;
    amir = ilham;
    raka = &ilham;
    
    cout << "Nilai ILHAM = " << ilham << std::endl;
    cout << "Nilai AMIR = " << amir << std::endl;
    cout << "Nilai RAKA = " << *raka << std::endl;

    return 0;
}

