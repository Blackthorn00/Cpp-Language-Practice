#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string::iterator it;
    int count=0;
    string str = "Hello World";
    for(it=str.begin(); it!=str.end(); it++)
    {
        count++;
    }
    cout<<"Length of string is "<<count<<"\n";
    system("pause");
    return 0;
}