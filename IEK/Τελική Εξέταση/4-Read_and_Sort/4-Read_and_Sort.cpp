#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
/*Γράψε ένα πρόγραμμα σε C++ που διαβάζει αριθμούς από ένα αρχείο κειμένου "input.txt",
τους ταξινομεί και τους εγγράφει σε ένα νέο αρχείο κειμένου "output.txt"*/
int main()
{
    vector<int> inputVec; //Αρχικοποίηση Vector για αποθήκευση των στοιχείων του input.txt
    ifstream inputFile("input.txt");
    int num;
    while (inputFile >> num) //Aποθήκευση των στοιχείων στο vector
    {
        inputVec.push_back(num);
    }
    sort(inputVec.begin(), inputVec.end()); // Ταξινόμηση των στοιχείων του vector

    ofstream outputFile("output.txt");
    for(int i=0; i<inputVec.size(); i++) // Εγγραφή των στοιχείων στο output.txt
    {
        outputFile << inputVec[i] << endl;
    }

    inputFile.close();
    outputFile.close();
    system("pause");
    return 0;
}