#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void RegisterBook(string author, string title, int year);
int main()
{
    string Author, Title;
    int pubYear, choice;
    do
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Register a new book.\n2. Exit." << endl;
        cin >> choice;
        
        if(choice==1)
        {
            cout<< "Enter author's name: ";
            cin >> Author;
            cout << "Enter book title: ";
            cin >> Title;
            cout << "Enter publication year: ";
            cin >> pubYear;
            RegisterBook(Author, Title, pubYear);
            
        }
        else if (choice==2)
        {
            exit(0);
        }
        
    } while (choice!=1 && choice!=2);
    
    
    return 0;
}

void RegisterBook(string author, string title, int year)
{
    ofstream outputFile("Library.txt");
    
    outputFile << author << endl;
    outputFile << title << endl;
    outputFile << year << endl;

    outputFile.close();
}