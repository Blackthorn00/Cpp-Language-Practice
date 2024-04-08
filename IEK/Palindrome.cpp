#include <iostream>
#include <string>

using namespace std;

bool checkIfPalindrome(string s)
{
    int l = 0;
    int r = s.length()-1;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }else {return false;}
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter a String: " << endl;
    cin >> str;
    if(checkIfPalindrome(str))
    {
        cout<< "The string is Palindrome" << endl;
    }else cout<< "The string is not Palindrome" << endl;
    return 0;
}