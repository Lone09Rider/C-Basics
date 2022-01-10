#include <iostream>

using namespace std;

class Book
{
    public:
        string title, author;
        int pages;

        Book(string atitle, string aauthor, int apages)
        {
            cout << "New Book : ==>>"<<endl;
            title = atitle;
            author = aauthor;
            pages = apages;
            cout << title << endl <<author<<endl<<pages<<endl;
        }
};

int main()
{

    Book book1("Harry Potter", "JK Rowlling", 500);

    Book book2("Lord of Rings", "Tolkein", 700);

    return 0;
}
