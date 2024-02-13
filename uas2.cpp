#include <iostream>
using namespace std;

class Mobil {
public:
    string merk;
    int tahun;
    double kecepatan;

    // Method untuk menghitung waktu yang dibutuhkan untuk menempuh jarak tertentu
    double hitungWaktu(double jarak) {
        return jarak / kecepatan;
    }
};

int main() {
    // Membuat objek dari kelas Mobil
    Mobil mobilSaya;
    mobilSaya.merk = "Toyota";
    mobilSaya.tahun = 2020;
    mobilSaya.kecepatan = 60.0;

    // Menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km
    double waktu = mobilSaya.hitungWaktu(100.0);
    cout << "Waktu yang dibutuhkan untuk menempuh 100 km dengan kecepatan " << mobilSaya.kecepatan << " km/jam adalah " << waktu << " jam." << endl;

    return 0;
}