#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double score;

    // Method untuk menampilkan informasi lengkap dari seorang mahasiswa
    void displayInfo() {
        cout << "Nama: " << name << endl;
        cout << "Usia: " << age << " tahun" << endl;
        cout << "Nilai: " << score << endl;
    }
};

int main() {
    // Membuat objek dari kelas Student
    Student myStudent;
    myStudent.name = "Saka Nur Alief";
    myStudent.age = 20;
    myStudent.score = 99.1;

    // Menampilkan informasi lengkap mahasiswa
    myStudent.displayInfo();

    return 0;
}