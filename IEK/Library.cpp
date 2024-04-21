#include <iostream>

using namespace std;

class Book{
private:
    string title;
    string author;
public:
    void setTitle(string t)
    {
        title = t;
    }
    string getTitle()
    {
        return title;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    string getAuthor()
    {
        return author;
    }
};

class Library{
public:
    Book b;
    void addBook(string t, string a);
    void getBook();
};

void Library::addBook(string t, string a)
{
    b.setTitle(t);
    b.setAuthor(a);
}
void Library::getBook()
{
    cout << b.getTitle() << " by " << b.getAuthor()<<endl;
}

int main()
{
    Library l;
    l.addBook("The Fellowship of the Ring", " J.R.R.Tolkien");
    l.getBook();
    return 0;
}