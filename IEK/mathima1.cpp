// This file is my first C++ program
#include <iostream>
using namespace std;

int main()
{
    int a(5); //initial value is 5
    long b(3); // initial value is 3
    auto result = a+b;
    cout << "sizeof(result): " << sizeof(result)<< endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(long): " << sizeof(long) << endl;
    cout << &result <<endl;
    return 0;
}

/*
    And this is another comment area.
*/