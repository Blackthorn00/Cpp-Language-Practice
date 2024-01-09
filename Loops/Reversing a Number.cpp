#include <iostream>

using namespace std;
int main()
{
    int n, r, rev=0, m;

    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10 + r;
    }
    cout<<rev<<endl;
    if(rev==m)
    {
        cout<<"This is a palindrome number"<<endl;
    }
    else cout<<"This is not a palindrome number"<<endl;

    system("pause");
    return 0;
}