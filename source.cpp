#include <iostream>
#include <string>
#include <map>
using namespace std;

void add_book(map<string, string>& books) {
    string title;
    cout << "Enter the title of the book to add: ";
    cin >> title;
    books[title] = title;
}

void display_book(map<string, string>& books) {
    string title;
    cout << "Enter the title of the book to display: ";
    cin >> title;
    if (books.find(title) != books.end()) {
        cout << "The book \"" << title << "\" has been found." << endl;
    }
    else {
        cout << "The book \"" << title << "\" was not found." << endl;
    }
}

void find_book(map<string, string>& books) {
    string title;
    cout << "Enter the title of the book to find: ";
    cin >> title;
    if (books.find(title) != books.end()) {
        cout << "The book \"" << title << "\" has been found." << endl;
    }
    else {
        cout << "The book \"" << title << "\" was not found." << endl;
    }
}

int main() {
    map<string, string> books;
    char choice;

    while (true) {
        cout << "WELCOME TO PSU LIBRARY" << endl;
        cout << "PLEASE SELECT ONE OF THE FOLLOWING OPTIONS:" << endl;
        cout << "A. Add a book" << endl;
        cout << "D. Display a book" << endl;
        cout << "F. Find a book" << endl;
        cout << "E. Exit" << endl;
        cout << "Enter your choice HERE => ";
        cin >> choice;

        switch (choice) {
        case 'A':
        case 'a':
            add_book(books);
            break;
        case 'D':
        case 'd':
            display_book(books);
            break;
        case 'F':
        case 'f':
            find_book(books);
            break;
        case 'E':
        case 'e':
            return 0;
        default:
            cout << "Please enter a valid choice." << endl;
            break;
        }
    }
    return 0;
}
