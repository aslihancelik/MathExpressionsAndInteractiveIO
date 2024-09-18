//Programmer: Aslihan Celik
//
//
// MathExpressionsAndInteractiveIO.cpp : 
// This program calculates the interest earned on a principal investment after one year.
// It asks for the principal, interest rate, and number of times the interest is compounded.
// The program then displays a formatted report of the interest rate, times compounded,
// principal, interest earned, and total amount in savings.


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    // Declare variables to hold user inputs and calculated values
    double principal, interestRate, timesCompounded, amountSavings, interestAmount;

    // Get user input for the principal amount
    cout << "Please enter the principal amount: ";
    cin >> principal;
    // Get user input for the interest rate as a percentage (e.g., enter 5 for 5%)
    cout << "Please enter what percent the interest rate is: ";
    cin >> interestRate;
    // Get user input for the number of times the interest is compounded annually
    cout << "Please enter the number of times the interest is compounded: ";
    cin >> timesCompounded;

    // Convert the interest rate from percentage to a decimal value (e.g., 5% becomes 0.05)
    interestRate /= 100;

    // Calculate the total amount of savings using the compound interest formula
    amountSavings = principal * pow((1 + interestRate / timesCompounded), timesCompounded);

    // Calculate the amount of interest earned
    interestAmount = amountSavings - principal;

    // Display the formatted output
    
    //Display the interest rate in percentage by multiplying the interestRate in decimal with 100
    cout << left << setw(25) << "Interest Rate: "
        << right << setw(10) << fixed << setprecision(2) << interestRate * 100 << "%" << endl;

    cout << left << setw(25) << "Times Compounded: "
        << right << setw(11) << fixed << setprecision(0) << timesCompounded << endl;

    cout << left << setw(25) << "Principal: "
        << right << "$" << setw(10) << fixed << setprecision(2) << principal << endl;

    cout << left << setw(25) << "Interest: "
        << right << "$" << setw(10) << interestAmount << endl; 

    cout << left << setw(25) << "Amount in Savings: "
        << right << "$" << setw(10) << amountSavings << endl;   


    return 0;
}

