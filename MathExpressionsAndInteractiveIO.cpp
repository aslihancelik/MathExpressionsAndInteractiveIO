// MathExpressionsAndInteractiveIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{

    double principal, interestRate, timesCompounded, amountSavings, interestAmount;
    cout << "Please enter the principal amount:";
    cin >> principal;
    cout << "Please enter what percent the interest rate is:";
    cin >> interestRate;
    cout << "Please enter the number of times the interest is compounded:";
    cin >> timesCompounded;
    interestRate /= 100;
    amountSavings = principal * pow((1 + interestRate / timesCompounded), timesCompounded);
    interestAmount = amountSavings - principal;

    // Display the formatted output
    
    cout << left << setw(25) << "Interest Rate:"
        << right << setw(10) << fixed << setprecision(2) << interestRate << "%" << endl;

    cout << left << setw(25) << "Times Compounded:"
        << right << setw(11) << fixed << setprecision(0) << timesCompounded << endl;

    cout << left << setw(25) << "Principal:"
        << right << "$" << setw(10) << fixed << setprecision(2) << principal << endl;

    cout << left << setw(25) << "Interest:"
        << right << "$" << setw(10) << interestAmount << endl; 

    cout << left << setw(25) << "Amount in Savings:"
        << right << "$" << setw(10) << amountSavings << endl;   


}

