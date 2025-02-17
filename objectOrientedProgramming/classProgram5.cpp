/*5. Class with Multiple Objects - Volume Calculation of Cubes
• Define a Cube class with an attribute side.
• Implement a function calculateVolume() using the formula:
Volume=side3
• Create multiple objects with different side values and display their volumes.*/
#include <iostream>
#include <math.h>
using namespace std;

class Cube
{
private:
    int side;

public:
    Cube() : side(0) {}
    Cube(int side) : side(side) {}
    int calculateVolume()
    {
        return pow(side, 3);
    }
    ~Cube()
    {
        cout << "Cube was destroyed" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Cube c1(3), c2(5), c3(8);
    cout << "Volume of cube is: " << c1.calculateVolume() << endl;
    cout << "Volume of cube is: " << c2.calculateVolume() << endl;
    cout << "Volume of cube is: " << c3.calculateVolume() << endl;

    return 0;
}
