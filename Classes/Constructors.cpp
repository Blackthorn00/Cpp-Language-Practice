#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l)
    {
        if(l>=0)
        {
            length = l;
        }else
        {
            length = 0;
        }
    }

    void setBreadth(int b)
    {
        if (b>=0)
        {
            breadth = b; 
        }else
        {
            breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle (int l=0, int b=0)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
};

int main()
{
    Rectangle r();
    Rectangle r2(10,5);
    Rectangle r3(r2);
    return 0;
}