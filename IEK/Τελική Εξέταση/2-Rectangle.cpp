#include <iostream>

using namespace std;
// 1. Δημιουργεί μια κλάση Rectangle που αντιπροσωπεύει ένα ορθογώνιο.
class Rectangle
{
private:
// 2. Η κλάση πρέπει να έχει ιδιωτικά μέλη δεδομένων για το μήκος και το πλάτος του ορθογωνίου
    float height, width;

public:
// 3. Η κλάση πρέπει να έχει δημόσιες συναρτήσεις μέλους για να ορίσει και να πάρει τις τιμές του μήκους και του πλάτους.
    Rectangle(float h, float w) : height(h), width(w) {}
    void setHeight(float h);
    void setWidth(float w);
    float getHeight();
    float getWidth();
// 4. Η κλάση πρέπει να έχει μια δημόσια συνάρτηση μέλους που υπολογίζει και επιστρέφει την επιφάνεια του ορθογωνίου
    float area();
};

void Rectangle::setHeight(float h)
{
    if (h > 0)
    {
        height = h;
    }
    else
    {
        cout << "Length must be positive" << endl;
        height = 0;
    }
}

void Rectangle::setWidth(float w)
{
    if (w > 0)
    {
        width = w;
    }
    else
    {
        cout << "Width must be positive" << endl;
        width = 0;
    }
}

float Rectangle::getHeight()
{
    return height;
}

float Rectangle::getWidth()
{
    return width;
}

float Rectangle::area()
{
    return height*width;
}

int main()
{
    /*5. Στο κύριο πρόγραμμα, δημιούργησε ένα αντικείμενο της κλάσης Rectangle,
    ζήτησε από τον χρήστη να εισάγει το μήκος και το πλάτος, και εμφάνισε την επιφάνεια του ορθογωνίου.*/
    float height, width;

    cout << "Enter the length of the rectangle: ";
    cin >> height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rectangle(height,width);
    rectangle.setHeight(height);
    rectangle.setWidth(width);
    cout << "The area of your rectangle is " << rectangle.area() << endl;
    system("pause");
    return 0;
}