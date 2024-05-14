#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    int l=0;
    int r = s.length() -1;
    while (l<r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }else
        {
            return false;
        }
    }
    return true;
}


int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if (isPalindrome(s))
    {
        cout<< "The string is Palindrome"<< endl;
    }else {cout<< "The string is not Palindrome"<< endl;}
    return 0;
}