#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    // Contructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    // Mutators
    void setLength(int l);
    void setBreadth(int b);
    // Accessors
    int getLength();
    int getBreadth();
    // Facilitators
    int area();
    int perimeter();
    // Enquiry
    bool isSquare();
    // Destructor
    ~Rectangle();
};

int main()
{
    Rectangle r1(10,10);
    cout<<"The area of the rectangle is "<<r1.area()<<endl;
    if(r1.isSquare())
    {
        cout<<"The rectangle is actually a square!"<<endl;
    }
    return 0;
}
/*
Scope Resolution ->
Basically writing the body of a function outside of the class while declaring
where this function can be found(Specify class name)
*/
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l=0, int b=0)
{
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}
void Rectangle::setLength(int l)
{
    if(l>=0)
    {
        length = l;
    }else length = 0;
}
void Rectangle::setBreadth(int b)
{
    if(b>=0)
    {
        breadth = b;
    }else breadth = 0;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::perimeter() 
{
    return 2*(length+breadth);
}
int Rectangle::area()
{
    return length*breadth;
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}