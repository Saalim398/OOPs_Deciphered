/*2. Class with Private Data Members and Getter/Setter Functions - Rectangle
Area Calculation
• Create a Rectangle class with private attributes length and width.
• Implement setter and getter functions.
• Calculate and display the area using calculateArea().*/
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void setLength(int len)
    {
        this->length = len;
    }

    int getLength()
    {
        return length;
    }

    void setWidth(int wid)
    {
        this->width = wid;
    }
    int getWidth()
    {
        return width;
    }
    int claculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect;
    rect.setLength(5);
    rect.setWidth(5);
    int ans;
    ans = rect.claculateArea();
    cout << ans << endl;
    return 0;
}
