#include <iostream>
using namespace std;

class BankAccount {
public:
    string owner;
    double balance;

    // Method untuk melakukan penyetoran uang
    void deposit(double amount) {
        balance += amount;
        cout << "Berhasil nyetorrrrr " << amount << ". ikii suik em saiki: " << balance << endl;
    }

    // Method untuk melakukan penarikan uang
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "yhahahaha gacor kang." << endl;
        } else {
            balance -= amount;
            cout << "sukses bolo " << amount << ". duik m saiki: " << balance << endl;
        }
    }
};

int main() {
    // Membuat objek dari kelas BankAccount
    BankAccount myAccount;
    myAccount.owner = "Saka Nur Alief";
    myAccount.balance = 1000.0;

    // Melakukan penyetoran dan penarikan uang
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0);

    return 0;
}