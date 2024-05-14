#include <iostream>

using namespace std;

float add(float x, float y);
float sub(float x, float y);
float divis(float x, float y);
float multi(float x, float y);
float mod(int x, int y);

int main()
{
    int a,b;
    char choice;
    cout<<"Enter first number: ";
    cin>> a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<< "Enter operation symbol: ";
    cin>> choice;
    switch (choice)
    {
    case '+':
        cout<< add(a,b)<<endl;
        break;
    default:
        cout<< "Invalid operation"<<endl;
        break;
    }
    return 0;
}

float add(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x - y;
}
float divis(float x, float y)
{
    if (y == 0) {
        cout << "Division by 0 is not allowed" << endl;
    }  
    else{
        return x / y;
    }
        
}
float multi(float x, float y)
{
    return x * y;
}
float mod(int x, int y)
{
    return (int)x % y;
}