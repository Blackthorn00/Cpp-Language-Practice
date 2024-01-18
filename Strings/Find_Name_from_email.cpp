#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string email = "";
    cout<<"Please type in your email address: ";
    getline(cin, email);
    cout<<email;

    system("pause");
    return 0;
}