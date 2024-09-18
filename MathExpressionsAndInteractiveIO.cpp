// MathExpressionsAndInteractiveIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream> // Include for std::ostringstream
using namespace std;


// Function to check if a floating-point number is effectively an integer
bool isInteger(double value, double difference = 1e-6) {
    return abs(value - round(value)) < difference;
}


// Function to print value with appropriate formatting
void printValue(double value) {
    ostringstream oss;

    // Format output based on whether the value is effectively an integer
    if (isInteger(value)) {
        oss << fixed << setprecision(0) << value;
    }
    else {
        oss << fixed << setprecision(2) << value;
    }

    // Output the formatted value
    cout << oss.str();
}

int main()
{
    const double SUGAR_MULTIPLIER = 1.5, BUTTER_MULTIPLIER = 1, FLOUR_MULTIPLIER = 2.75;
    const int NUMBER_OF_COOKIES = 48;
    double numberOfCookies;
    double ingredientMultiplier;

    cout << "Please enter the number of cookies you would like to make. \n";
    cin >> numberOfCookies;
    ingredientMultiplier = numberOfCookies/ NUMBER_OF_COOKIES;

    double sugarNeeded = SUGAR_MULTIPLIER * ingredientMultiplier;
    double butterNeeded = BUTTER_MULTIPLIER * ingredientMultiplier;
    double flourNeeded = FLOUR_MULTIPLIER * ingredientMultiplier;


    //round to the nearest quarter : two decimal and quarter multipliers

    //CONDITIONAL YAP PRINTI CUP VE CUPS  & YUVARLAAAAA
    /*
    cout << fixed << setprecision(2);
    cout << "For the number of cookies you entered you need the following amount of each ingredient:" << endl;
    cout << setw(10) << sugarNeeded << left << setw(20) << (sugarNeeded != 1 ? " cups of sugar" : " cup of sugar") << endl;
    cout << right << setw(10) << butterNeeded << left << setw(20) << (butterNeeded != 1 ? " cups of butter" : " cup of butter") << endl;
    cout << right << setw(10) << flourNeeded << left << setw(20) << (flourNeeded != 1 ? " cups of flour" : " cup of flour") << endl;
    */

    /*
    cout << fixed << setprecision(2);
    cout << "For the number of cookies you entered you need the following amount of each ingredient:" << endl;
    cout << setw(10) << sugarNeeded << left << setw(20) << (sugarNeeded != 1 ? " cups of sugar" : " cup of sugar") << endl;
    cout << right << setw(10) << butterNeeded << left << setw(20) << (butterNeeded != 1 ? " cups of butter" : " cup of butter") << endl;
    cout << right << setw(10) << flourNeeded << left << setw(20) << (flourNeeded != 1 ? " cups of flour" : " cup of flour") << endl;
    */


    cout << "For the number of cookies you entered, you need the following amount of each ingredient:" << endl;

    // Print each ingredient
    cout << right << setw(10);
    printValue(sugarNeeded);
    cout << left << setw(20)
        << (sugarNeeded != 1 ? " cups of sugar" : " cup of sugar") << endl;

    cout << right << setw(10);
    printValue(butterNeeded);
    cout << left << setw(20)
        << (butterNeeded != 1 ? " cups of butter" : " cup of butter") << endl;

    cout << right << setw(10);
    printValue(flourNeeded);
    cout << left << setw(20)
        << (flourNeeded != 1 ? " cups of flour" : " cup of flour") << endl;



    return 0;

}

