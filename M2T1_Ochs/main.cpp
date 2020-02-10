#include <iostream>
/*
CSC 1234
M2T1 - Rectangle
Jeffrey Ochs
02/04/2019
*/

using namespace std;

int main()
{
    // declare variables
    int length, width, area;
    // Gets length and width from user
    cout << "This program finds the area of a rectangle." << endl;
    cout << "What's the length? > ";
    cin >> length;

    cout << "What's the width?  > ";
    cin >> width;

    area = length * width;
    // Displays results
    cout << "The area of a rectangle " << length << " by " << width << " is: " << area << endl;

    return 0;
}
