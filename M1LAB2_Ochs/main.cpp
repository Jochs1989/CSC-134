#include <iostream>
#include <math.h>
#include <iomanip>
/*
CSC 134
M1LAB2
Jeffrey Ochs
01/28/2020
*/
using namespace std;


int main()
{
    //M1 Lab 2 - Word Problems

    cout << fixed;
    cout << setprecision(2);

    // 1. Given a rectangle with height 8 and width 10, calculate and print the area.
    int height = 8;
    int width = 10;
    int area = height * width;

    cout << "The height of the rectangle is: " << height << "\nThe width of the rectangle is: " << width << "\nThe area of the rectangle is: " << area << endl << endl;

    // 2. Assume a product is sold for $99.99, and sales tax is 8%. Display the product price, the amount of sales tax, and then the final cost including sales tax.

    float product = 99.99;
    float salesTaxRate = .08;
    float salesTaxAmount = product * salesTaxRate;
    float total = product + salesTaxAmount;

    cout << "The product's price is: $" << product << "\nThe sales tax is: $" << salesTaxAmount << "\nThe final cost is: $" << total << endl << endl;

    // 3. Assume a pizza is 12 inches in diameter. Using the standard formula, calculate and display the area of that pizza.
    int diameter = 12;
    float radius = diameter / 2;
    area = 3.14 * pow(radius, 2);

    cout << "The area of the pizza is: $" << area << endl << endl;

    // 4. If the pizza from question 3 is cut into 8 pieces, what is the area of each piece?
    float slice = area / 8;

    cout << "The area of a single slice is: $" << slice <<  endl << endl;

}


