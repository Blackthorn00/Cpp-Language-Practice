#include <iostream>
using namespace std;

int main()
{
    int a, b, c=3, d=5, e=4;

    a = b = c;

    cout<< "a= "<< a << " b= "<< b <<endl;
    cout<< "c= "<< c <<endl;

    c= (d>e) ? 1 : 2;
    cout<< "Now c= "<<c<<endl;
    // a=3 b=3 c=3 -- c=1
    return 0;
}