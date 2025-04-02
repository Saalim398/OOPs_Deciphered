#include <iostream>
#include <cmath>

class Point
{
private:
    double x, y;

public:
    Point(double x_val = 0, double y_val = 0)
    {
        x = x_val;
        y = y_val;
    }

    Point(Point &p)
    {
        x = p.x;
        y = p.y;
    }

    double calculateDistance(Point p2)
    {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }

    void display()
    {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    Point p1(3, 4);
    Point p2(6, 8);

    Point p3 = p1;

    std::cout << "Copied Point p3: ";
    p3.display();
    std::cout << std::endl;

    double distance = p1.calculateDistance(p2);
    std::cout << "Distance between ";
    p1.display();
    std::cout << " and ";
    p2.display();
    std::cout << " is: " << distance << std::endl;

    return 0;
}
