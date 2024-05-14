#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("in.txt");
    
    int x;
    int sum=0;
    while(fin)
    {
        fin >> x;
        sum=sum+x;
    }
    cout << sum;
    fin.close();

    return 0;
}