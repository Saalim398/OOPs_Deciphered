#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14
class Area
{
private:
    int radius;

public:
    int area(int rad)
    {
        return PI * pow(rad, 2);
    }
};

int main(int argc, char const *argv[])
{
    Area Area;
    int ans;
    ans = Area.area(5);
    cout << "The area of this circle is : " << ans << endl;

    return 0;
}
