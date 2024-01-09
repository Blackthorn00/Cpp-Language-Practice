#include <iostream>

using namespace std;
int main()
{
    int n, r, temp, sum=0;

    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        temp=temp/10;
        sum+=(r*r*r);
    }
    if(sum==n)
    {   
        cout<<"This is an Armstrong number, because the sum of the cubic values of each of its digits add up to the number itself "<<endl;
    }else
    {
        cout<<"This is not an Armstrong number"<<endl;
    }

    system("pause");
    return 0;
}