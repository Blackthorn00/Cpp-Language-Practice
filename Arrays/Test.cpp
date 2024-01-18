#include <iostream>


// F = (9/5 * C) + 32
using namespace std;
int main()
{
    int choice;
    double Farenheit=0, Celsius=0;


    cout<<"********** TEMPERATURE CONVERSION **********"<<endl;
    cout<<"1. Farenheit to Celsius."<<endl<<"2. Celsius to Farenheit.\n\n"<<endl;
    do
    {
        cout<<"Please select a choice, typing in the coresponding number: ";
        cin>>choice;
    } while (choice != 1 && choice != 2);
    
     switch (choice)
    {
    case 1:
    {
        cout<<"Enter the temperature in Farenheit: ";
        cin>>Farenheit;
        Celsius =(Farenheit -32.00) * (1.80);
        cout<<"The temperature in Celsius is "<<Celsius<<"C"<<endl;
        break;
    }
    case 2:
    {
        cout<<"Enter the temperature in Celsius: ";
        cin>>Celsius;
        Farenheit =(1.80 *Celsius) +32.00;
        cout<<"The temperature in Farenheit is "<<Farenheit<<"F"<<endl;
        break;
    }    
    }
	system("pause");
	return 0;
}
