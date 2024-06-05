#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int line1,line2,line3,max;
    vector<int> numbers = {4,6,9,12,5};
    for(int i=0; i<numbers.size(); i++)
    {
        cout<< i+1 << ") "<< numbers[i]<< endl;
    }
    cout << "Choose three numbers by entering their corresponding lines: " << endl;
    cin >> line1 >> line2 >> line3;
    max = numbers[line1-1];
    if(numbers[line2-1]>max && numbers[line2-1]>numbers[line3-1])
    {
        max = numbers[line2-1];
    }else if (numbers[line3-1]>max && numbers[line3-1]>numbers[line2-1])
    {
        max = numbers[line3-1];
    }
    cout<< "Max is " << max << endl;
    cout << "MO is " << (numbers[line1-1]+numbers[line2-1]+numbers[line3-1])/3 << endl;
    return 0;
}