#include <iostream>

using namespace std;

int main()

{double netBalance, payment, interestRate, averageDailyBalance, interest;
    int d1, d2;
    // ASKING THE USER TO ENTER INPUTS
     cout << "Enter the net balance: ";
    cin >> netBalance;
    cout << "Enter the payment amount: ";
    cin >> payment;
    cout << "Enter the number of days in the billing cycle (d1): ";
    cin >> d1;
    cout << "Enter the number of days payment is made before the billing cycle (d2): ";
    cin >> d2;
    cout << "Enter the interest rate per month (as a decimal, e.g., 0.0152 for 1.52%): ";
    cin >> interestRate;


    // Calculating  average daily balance using the given formula
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculating interest using the given formula
    interest = averageDailyBalance * interestRate;

    // Set output format to two decimal places
    cout << fixed;

    // Output the interest
    cout << "The interest on the unpaid balance is: $" << interest << endl;

    return 0;
}
