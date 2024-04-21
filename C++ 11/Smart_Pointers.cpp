#include <iostream>
#include <memory>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b);
    int area();
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

Rectangle::area()
{
    return length*breadth;
}

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;

    unique_ptr<Rectangle> ptr2;
    ptr2= move(ptr);
    cout<<ptr2->area()<<endl; //Now ptr does not point anywhere. ptr2 is now pointing to the Rectangle Object.
    // If the pointer was shared, both pointers would be able to point to the same Object.
    return 0;
}