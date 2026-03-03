/*
CSC 134
M2HW1 - Silver
Alexander Charles
3/2/2020
*/

// question 1
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Set up variables
    string full_name;
    double account_balance;
    double account_number;
    double deposit;
    double withdrawal;

// code

    cout << "Enter your name." << endl;
    cin >> full_name;    
    cout << "Enter your account number" << endl;
    cin >> account_number;
    cout << "Enter your account balance" << endl;
    cin >> account_balance;

    cout << "Enter your withdrawal" << endl;
    cin >> withdrawal;
    cout << "Enter your deposit" << endl;
    cin >> deposit;
    // calculate new balance
    account_balance = account_balance - withdrawal + deposit;
    // output
    cout << setprecision(2) << fixed;
    cout << full_name;
    cout << account_balance;
    cout << account_number;
// question 2 


    
    


}
