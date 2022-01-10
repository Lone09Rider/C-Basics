#include <iostream>

using namespace std;

// New Data type - Class Declaration
class Book
{
    public:
        string title, author;
        int pages;
};

int main()
{

    Book book1; // Object Creation
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl << book1.author << endl << book1.pages <<endl;

    return 0;
}
