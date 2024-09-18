// MathExpressionsAndInteractiveIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream> // Include for std::ostringstream
using namespace std;

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

    cout << fixed << setprecision(2);
    cout << "For the number of cookies you entered you need the following amount of each ingredient:" << endl;
    cout << setw(10) << sugarNeeded << left << setw(20) << (sugarNeeded != 1 ? " cups of sugar" : " cup of sugar") << endl;
    cout << right << setw(10) << butterNeeded << left << setw(20) << (butterNeeded != 1 ? " cups of butter" : " cup of butter") << endl;
    cout << right << setw(10) << flourNeeded << left << setw(20) << (flourNeeded != 1 ? " cups of flour" : " cup of flour") << endl;

    return 0;

}

