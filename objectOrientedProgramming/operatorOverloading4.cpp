/*
Assignment 5: Overloading Type Conversion (Basic Type to Class Type)
Modify the Time class so that it can accept an integer representing total minutes and convert
it into a Time object using a constructor.
*/
#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    // Constructor to initialize Time from total minutes
    Time(int totalMinutes)
    {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    // Default constructor
    Time() : hours(0), minutes(0) {}

    // Function to display time
    void display() const
    {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    int totalMinutes;
    cout << "Enter total minutes: ";
    cin >> totalMinutes;

    Time t = totalMinutes; // Implicit conversion using constructor
    t.display();

    return 0;
}
