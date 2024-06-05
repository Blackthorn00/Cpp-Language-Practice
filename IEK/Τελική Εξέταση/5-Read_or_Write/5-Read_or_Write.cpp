#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
/* Γράψε ένα πρόγραμμα σε C++ το οποίο θα ρωτάει αν θέλετε να διαβάσετε ή να γράψετε σε ένα αρχείο. Στη συνέχεια,
ανάλογα με την επιλογή σας, θα σας ζητήσει να εισάγετε το όνομα του αρχείου και θα εκτελέσει την ανάγνωση ή την εγγραφή αντίστοιχα. */
class Files{
public:
    void readFile();
    void writeFile();
};


void Files::readFile()
{
    ifstream readFile("Hello.txt");
    string line;
    while (getline(readFile, line))
    {
        cout << line << endl;
    }
}

void Files::writeFile()
{
    string name;
    cout << "Enter the name of the file you want to create: ";
    cin >> name;
    ofstream writeFile(name+".txt");
}

int main()
{
    int choice;
    Files file;
    Files* f=&file;
    do
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Read 'Hello.txt'" << endl;
        cout << "2. Write to a file of my choosing" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 3)
        {
            cout << "Goodbye" << endl;
            exit(0);
        }
        else if (choice != 1 && choice != 2)
        {
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 1 && choice != 2);

    if (choice == 1)
    {
        f->readFile();
    }
    else if (choice == 2)
    {
        f->writeFile();
    }
    system("pause");
    return 0;
}

