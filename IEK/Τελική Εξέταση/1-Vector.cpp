#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    /*1. Δημιουργεί έναν δισδιάστατο πίνακα δυναμικά με δεδομένο αριθμό γραμμών και στηλών από τον χρήστη.*/
    int row, col, num_to_find;
    bool found = false;
    cout << "How many rows would you like your table to have? Type in your answer: ";
    cin >> row;
    cout << "How many columns would you like your table to have? Type in your answer: ";
    cin >> col;
    int** arr = new int*[row]; // Αρχικοποίηση δυναμικού πίνακα
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    
    /*2. Ζητά από τον χρήστη να εισάγει στοιχεία στον πίνακα*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter table element [" << i << "]" << "[" << j << "]:";
            cin >> arr[i][j];
        }
    }

    /*3. Εμφανίζει τα στοιχεία του πίνακα.*/
    cout << "This is your table: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    /*4. Δημιουργεί έναν Vector και κάνει εμφάνιση των αρχικών στοιχείων του*/
    vector<int> v;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            v.push_back(arr[i][j]);
        }
    }
    cout << "Here is a vector containing all table elements: " << endl;
    for (const int &num : v)
    {
        cout << num << ' ';
    }
    cout << endl;

    /*5. Ταξινόμηση των στοιχείων του vector και εμφάνιση των ταξινομημένων στοιχείων.*/
    sort(v.begin(), v.end());
    cout << "Here is the sorted Vector: " << endl;
    for(const int &num : v){
        cout << num << " ";
    }
    cout << endl;

    /*6. Αναζήτηση ενός συγκεκριμένου στοιχείου μέσα στον vector και εμφάνιση της θέσης του αν βρεθεί.*/
    cout << "Enter a number to search in Vector: ";
    cin >> num_to_find;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==num_to_find)
        {  
            found = true;
            cout << "Element found at position " << i+1 << endl;
            break;
            
        }
    }
    if(!found)
    {
        cout << "Element was not found." << endl;
    }

    /*7. Διαγραφή όλων των στοιχείων του vector.*/
    v.clear();

    /*8. Έλεγχος και εμφάνιση μηνύματος για το αν ο vector είναι κενός*/
    if(v.empty())
    {
        cout << "The Vector is now empty." << endl;
    }

    system("pause");
    return 0;
}