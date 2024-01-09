#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to recieve its multiplication table: ";
    cin>>n;
    for(int i=0; i<10; i++)
    {
        cout<<n<<"x"<<i+1<<"="<<n*(i+1)<<endl;
    }
    system("pause");
    return 0;
}