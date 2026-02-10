//CSC 134
// M1LAB
// Alexander Charles
//2/3/2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Set up variables
    string first_name, last_name, full_name;
    string product = "apples";
    int amount_purchased;
    double cost_each_apple = 0.99;
    double total_cost;

    cout << "Welcome to " << product << "store" << endl; 

    cout << "What's your first name?";
    cin >> first_name;
    cout << "What's your last name?"; 
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you! " << full_name << "!" << endl;

    // Ask how much do they want to buy?
    cout << "How many " << product << " do you want to buy?";
    cin >> amount_purchased; 

    // formatting
    cout << setprecision(2) << fixed;

    // caluclate total price
    total_cost = amount_purchased * cost_each_apple;
    // give the result
    cout << "For " << amount_purchased << " " << product;
    cout << " your total is " << total_cost << " dollars." << endl;
    cout << "thank you for shopping with us!" << endl;

}