#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;
// 1. Δημιουργεί μια βασική κλάση Shape που αντιπροσωπεύει μια γεωμετρική μορφή.
/* 2. Η κλάση Shape πρέπει να έχει μια δημόσια καθαρά εικονική συνάρτηση μέλους με όνομα area,
η οποία να επιστρέφει την επιφάνεια της γεωμετρικής μορφής.*/ 
class Shape{ 
public:
    virtual float area() const = 0;
};

// 3. Δημιουργήστε τουλάχιστον δύο παράγωγες κλάσεις Circle και Rectangle που κληρονομούν από την κλάση Shape.
// 4. Υλοποιήστε την καθαρά εικονική συνάρτηση area στις παράγωγες κλάσεις για να υπολογίζει την επιφάνεια ενός κύκλου και ενός ορθογώνιου αντίστοιχα
class Circle: public Shape{
private:
    float radius;
public:
    Circle(float r): radius(r) {}
    void setRadius(float r);
    virtual float area() const override;
};

class Rectangle: public Shape{
private:
    float height, width;
public:
    Rectangle(float h, float w): height(h), width(w) {}
    void setHeight(float h);
    void setWidth(float w);
    virtual float area() const override; 
};

void Circle::setRadius(float r)
{
    radius = r;
}
float Circle::area() const
{
    return M_PI*radius*radius;
}

void Rectangle::setHeight(float h)
{
    height = h;
}
void Rectangle::setWidth(float w)
{
    width = w;
}
float Rectangle::area() const
{
    return height*width;
} 


/*5. Στο κύριο πρόγραμμα, δημιουργήστε αντικείμενα των κλάσεων Circle και Rectangle,
ζητήστε από τον χρήστη τα απαραίτητα στοιχεία (ακτίνα για τον κύκλο, μήκος και πλάτος για το ορθογώνιο)
και εμφανίστε την επιφάνεια κάθε σχήματος.*/
int main()
{
    float height, width, radius;
    
    cout << "Enter height for the rectangle: ";
    cin >> height;
    cout << "Enter width for the rectangle: ";
    cin >> width;
    cout << "Enter the circle radius: ";
    cin >> radius;

    Rectangle rec(height, width);
    Circle c(radius);
    Shape* shape1=&rec;
    Shape* shape2=&c;

    cout << "The area of the rectangle is " << shape1->area() << endl;
    cout << "The area of the circle is " << shape2->area() << endl;
    system("pause");
    return 0;
}