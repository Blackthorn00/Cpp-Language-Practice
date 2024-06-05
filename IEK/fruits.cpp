#include <iostream>
#include <vector>

using namespace std;
class Fruit
{
public:
    string name;
};
int main()
{
    Fruit f;
    vector<Fruit> fruit;
    int spot, choice;
    string fname;

    f.name = "Orange";
    fruit.push_back(f);
    f.name = "Kiwi";
    fruit.push_back(f);
    f.name = "Strawberry";
    fruit.push_back(f);
    f.name = "Pineapple";
    fruit.push_back(f);
    f.name = "Banana";
    fruit.push_back(f);

    
    for(int i=0; i<fruit.size(); i++)
    {
        cout<< fruit[i].name << endl;
    }

    cout<< "At which spot would you like to insert your fruit?" << endl;
    cin >> spot;
    cout << "Enter the name of your fruit: ";
    cin >> fname;
    f.name = fname;
    fruit.insert(fruit.begin()+(spot-1), f);

    for(int i=0; i<fruit.size(); i++)
    {
        cout<< fruit[i].name << endl;
    }
    cout<< "Would you like to erase all elements?" << endl;
    cout<< "1) Yes\n2) No"<< endl;
    cin >> choice;
    if(choice==1)
    {
        fruit.clear();
        if(fruit.empty())
        {
            cout<< "Vector is empty" << endl;
        }

    }
    
  
    return 0;
}