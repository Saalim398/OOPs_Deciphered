/*4. Parameterized Constructor and Default Constructor - Perimeter of a
Rectangle
• Create a Rectangle class with attributes length and width.
• Implement a default constructor that initializes values to zero.
• Implement a parameterized constructor to accept values.
• Calculate and display the perimeter using calculatePerimeter().
*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    Rectangle() : length(0), width(0) {}             // defaut constructor
    Rectangle(int l, int w) : length(l), width(w) {} // parameer constructor
    int calculatePerimeter()
    {
        return length * width;
    }

    ~Rectangle()
    {
        cout << "Rectangle destroyed";
    };
};

int main(int argc, char const *argv[])
{
    Rectangle rect(2, 4);
    cout << "The perimeter of rectangle is : " << rect.calculatePerimeter() << endl;
    return 0;
}
