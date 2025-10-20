#include <iostream>
#include <string>
#include <windows.h> 
#include <limits> // Для numeric_limits

using namespace std;

int getCurrentYear();

class Book {
private:
    string title;
    string author;
    int year;

public:
    // Конструктор с параметрами
    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    // Конструктор по умолчанию
    Book() {
        title = "empty";
        author = "empty";
        year = 0;
    }

    void inputAndPrint() {
        cin.ignore(256, '\n'); // Очистка буфера перед getline
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter year: ";
        cin >> year;
        

        if (cin.fail()) {
            cout << "Invalid input for year." << endl;
            cin.clear();
            cin.ignore( 256, '\n');
            return;
        }

        if (year <= 1975) {
            cout << "Book is too old" << endl;
        }
        else {
            cout << "Title = " << title << endl;
            cout << "Author = " << author << endl;
            cout << "Year = " << year << endl;
        }
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Book book1;
    book1.inputAndPrint();

    Book book2;
    book2.inputAndPrint();

    cout << "Current year is: " << getCurrentYear() << endl;

    return 0;
}

int getCurrentYear() {
    SYSTEMTIME tm;
    GetLocalTime(&tm);
    return tm.wYear;
}
