#include <iostream>
#include <cstdarg>

using namespace std;

int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int x;
    int s = 0;
    for(int i=0; i<n; i++)
    {
        x = va_arg(list, int);
        s+=x;
    }
    // va_end(list);
    return s;
}

int main()
{
    cout<<sum(7,8)<<endl;
    return 0;
}