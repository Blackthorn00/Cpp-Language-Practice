#include <iostream>

using namespace std;

float add(float x, float y);
float sub(float x, float y);
float divis(float x, float y);
float multi(float x, float y);
int mod(int x, int y);
int menu();
void enterNum(float *x, float *y);

int main()
{
    float a, b;
    int flag = 0;
    cout << "Welcome to my calculator." << endl;
    enterNum(&a,&b);
    cout<<a<<b<<endl;
    do
    {
        flag = 0;
        switch (menu())
        {
        case 1:
            cout << "Result is: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result is: " << sub(a, b) << endl;
            break;
        case 3:
            cout << "Result is: " << multi(a, b) << endl;
            break;
        case 4:
            cout << "Result is: " << divis(a, b) << endl;
            break;
        case 5:
            cout << "Result is: " << mod(a, b) << endl;
            break;
        case 6:
            enterNum(&a,&b);
            // cout<<a<<b;
            break;
        case 7:
            exit(0);
            flag = 1;
            break;
        default:
            flag = 1;
            break;
        }
    } while (flag == 0);

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
int mod(int x, int y)
{
    return (int)x % y;
}
int menu()
{
    int choice;
    cout << "Choose: " << endl;
    cout << "1. Addition." << endl;
    cout << "2. Subtraction." << endl;
    cout << "3. Multiplication." << endl;
    cout << "4. Division." << endl;
    cout << "5. Modulus." << endl;
    cout << "6. Enter different numbers." << endl;
    cout << "7. Exit." << endl;
    cin >> choice;
    return choice;
}
void enterNum(float *x, float *y)
{
    float a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    *x=a;
    *y=b;
}