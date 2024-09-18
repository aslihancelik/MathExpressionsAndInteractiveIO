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

    amountSavings = principal * pow((1 + interestRate / timesCompounded), timesCompounded);
    interestAmount = amountSavings - principal;

    //interest rate turn into %

    /*
    cout << left << setw(20) << "Interest Rate: " << fixed << setprecision(2) << right << setw(10) << interestRate << "%" << endl;
    cout << left << setw(20) << "Times Compounded: " << fixed << setprecision(0) << right << setw(10) << timesCompounded << endl;
    cout << left << setw(20) << "Principal: " << right << setw(10) << "$" << fixed << setprecision(2)  << principal << endl;
    cout << left << setw(20) << "Interest: " << right << setw(10) << "$" << amountSavings << endl;
    */

    // Display the formatted output
    
    cout << left << setw(25) << "Interest Rate:"
        << right << setw(10) << fixed << setprecision(2) << interestRate << "%" << endl;

    cout << left << setw(25) << "Times Compounded:"
        << right << setw(10) << fixed << setprecision(0) << timesCompounded << endl;

    cout << left << setw(25) << "Principal:"
        << right << "$" << setw(10) << fixed << setprecision(2) << principal << endl;

    cout << left << setw(25) << "Interest:"
        << right << "$" << setw(10) << fixed << setprecision(2) << interestAmount << endl;

    cout << left << setw(25) << "Amount in Savings:"
        << right << "$" << setw(10) << fixed << setprecision(2) << amountSavings << endl;


}

