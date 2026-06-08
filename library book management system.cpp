#include <iostream>
using namespace std;

class Book
{
public:
    string title, author;
    int copies;

    void inputDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author: ";
        cin >> author;

        cout << "Enter number of copies: ";
        cin >> copies;
    }

    void borrowBook()
    {
        copies = copies - 1;
    }

    void displayDetails()
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main()
{
    Book b;

    b.inputDetails();
    b.borrowBook();
    b.displayDetails();

    return 0;
}
