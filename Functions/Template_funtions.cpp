#include <iostream>
using namespace std;

template <class T>
T Maxim(T x, T y)
{
    return x>y? x:y;
}
int main ()
{
    cout<<Maxim(56,98)<<endl;
    cout<<Maxim(4.5f, 7.8f)<<endl;
    system("pause");
    return 0;
}