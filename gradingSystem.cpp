#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter the student's score (out of 100): ";
    cin >> score;

    if (score >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}