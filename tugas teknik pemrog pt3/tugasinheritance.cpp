#include <iostream>
using namespace std;

class Laptop {
	protected:
	string processor = "AMD Ryzen 7";
	string merk = "Lenovo";
	string memory = "8 GB";
	
	public:
		string cekLaptop() {
			return "Ini berasal dari class Laptop";
		}
};

class Smartphone {
	protected:
		string jaringan = "3G/4G";
		
		public:
			string cekSmartphone() {
				return "Ini berasal dari class Smartphone";
			}
};

class SmartLaptop: public Laptop, public Smartphone{
	public:
		string lihatSpec() {
			return "Merk: " + merk + ", processor: " + processor + 
					", jumlah memory: " + memory + ", jaringan" + jaringan;
		}
		string cekSmartLaptop() {
			return "Ini berasal dari class SmartLaptop";
		}
};

int main()
{
	SmartLaptop smartLaptopAndi;
	
	cout << smartLaptopAndi.lihatSpec() << endl;
	cout << smartLaptopAndi.cekLaptop() << endl;
	cout << smartLaptopAndi.cekSmartphone() << endl;
	cout << smartLaptopAndi.cekSmartLaptop() << endl;
	
	return 0;
}
