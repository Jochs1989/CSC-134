#include <iostream>
#include <iomanip>
/*
CSC 134
M1HW1
Jeffrey Ochs
01/28/2020
*/
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(2);

    string name = "The Other Guys";
    int year = 2010;
    float gross = 170.4;


    cout << "The movie '" << name << "' came out in "<< year << " and had a worldwide gross around $" << gross << " billion dollars."<< endl << endl;

    cout << "Quotes"<< endl;
    cout << "---------------"<< endl;
    cout << "\"I'm like a peacock, you gotta let me fly!\""<< endl;
    cout << "\"Your farts aren't manly. They sound like a baby blowing out birthday candles.\""<< endl;
    cout << "\"Yeah. I say you can do it. I mean, I don't want you to jump, I'm saying you have the capability. Oh look, he's flying!\"";
    cout << "\"I don't like you. If I were a lion, and you were a tuna, I'd swim out to the middle ";
    cout << "of the ocean and freaking eat you! Then I'd bang your tuna girlfriend.\""<< endl;

    return 0;
}
