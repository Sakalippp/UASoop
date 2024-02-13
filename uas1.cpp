#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructor
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    // Method to display book information
    void displayInfo() {
        std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
    }

    // Method to check if the book is "kuno"
    bool isOld() {
        if (year < 2000) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    // Create a new book object
    Book myBook("Bapakku Bukan Bapakmu - Semoga Besan saya", "Saka Nur Alief", 2015);

    // Display book information and "kuno" status
    myBook.displayInfo();
    if (myBook.isOld()) {
        std::cout << "This book is kuno." << std::endl;
    } else {
        std::cout << "This book is not kuno." << std::endl;
    }

    return 0;
}