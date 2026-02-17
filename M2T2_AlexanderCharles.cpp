/*
CSC 134 
M2T2 Receipt calculator
Alexander Charles
2/16/26
Goal: a good looking receipt that handles sales tax
assume that tax is 8%
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Declare all variables
    string meal_name = "Sliver Dollar Pancakes";  
    double meal_price = 5.99;    // $5.99
    int num_meals;
    double tax_rate = 0.08;      // 8%
    double tip_amount;
    double tax_amount;
    double sub_total;           // tax before tips
    double total_price;         // tax with tips
    
    // user input
    cout << "Welcome to IHOP!" << endl;
    cout << "Here is today's special!" << meal_name << endl;
    cout << endl;
    cout << "How Many would you like?";
    cin >> num_meals;

    // calculate the output

    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate;
    // add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // Output 
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "YOUR ORDER" << endl << "---------------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal:  \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax  \t\t\t$" << tax_amount << endl; 
    cout << "---------------------------------" << endl;
    cout << "Total \t\t$" << total_price << endl;

}