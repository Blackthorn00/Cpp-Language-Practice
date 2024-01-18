#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string::iterator it;
    string str = "WeLcOMe";
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122) //change only lowercase to uppercase
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    system("pause");
    return 0;
}