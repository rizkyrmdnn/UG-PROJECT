#include <iostream>
using namespace std;

struct data_tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

class Event : public data_tanggal {
public:
    Event(string eventName) : eventName(eventName) {}

    void displayEventDetails() {
        cout << "Event: " << eventName << endl;
        cout << "Date: " << tanggal << '/' << bulan << '/' << tahun << endl;
    }

private:
    string eventName;
};

int main() {
    // Create an instance of the Event class
    Event birthday("Birthday Party");

    // Set the date for the event
    birthday.tanggal = 10;
    birthday.bulan = 5;
    birthday.tahun = 2023;

    // Display event details
    birthday.displayEventDetails();

    return 0;
}

