#include <iostream>

using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"The sum of all natural numbers up to number "<<n<<" is: "<<sum<<endl;

    system("pause");
    return 0;
}