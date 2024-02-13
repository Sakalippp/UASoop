#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    double hourlyRate;
    double hoursWorked;

    // Method untuk menghitung gaji total
    double hitungGajiTotal() {
        return hourlyRate * hoursWorked;
    }

    // Method untuk menampilkan informasi lengkap dan gaji total
    void displayInfo() {
        cout << "Nama: " << name << endl;
        cout << "Gaji per jam: " << hourlyRate << endl;
        cout << "Jumlah jam kerja: " << hoursWorked << endl;
        cout << "Gaji total: " << hitungGajiTotal() << endl;
    }
};

int main() {
    // Membuat objek dari kelas Employee
    Employee myEmployee;
    myEmployee.name = "Saka Alief";
    myEmployee.hourlyRate = 15.0;
    myEmployee.hoursWorked = 40.0;

    // Menampilkan informasi lengkap dan gaji total
    myEmployee.displayInfo();

    return 0;
}