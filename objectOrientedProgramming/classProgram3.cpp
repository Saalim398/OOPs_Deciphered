#include <iostream>
using namespace std;

class Triangle
{
private:
    float base, height;

public:
    Triangle(float b = 0, float h = 0)
    {
        base = b;
        height = h;
    }

    ~Triangle()
    {
        cout << "Object destroyed\n";
    }

    void setBase(float base)
    {
        this->base = base;
    }

    float getBase()
    {
        return base;
    }

    void setHeight(float height)
    {
        this->height = height;
    }

    float getHeight()
    {
        return height;
    }

    float calculateArea()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t1(2, 3);
    Triangle t2(4, 5);

    cout << "Area of t1: " << t1.calculateArea() << endl;
    cout << "Area of t2: " << t2.calculateArea() << endl;

    return 0;
}
