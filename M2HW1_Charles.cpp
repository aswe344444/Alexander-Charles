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
    cout << full_name << endl;
    cout << account_balance << endl;
    cout << account_number << endl;
// question 2 

    // Constants for cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.3; 
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    // Variables
    double length,width,cost,height,charge,volume,profit;
    // Set the desired output formatting for numbers. 
    cout << setprecision (2) << fixed << showpoint;
    // Prompt the user for the crate's length, width, and height cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    // Calculate the crate's volume, the cost to produce it, // the charge to the customer, and the profit. 
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT; 
    charge = volume * CHARGE_PER_CUBIC_FOOT; 
    profit = charge - cost;
    cost;
    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;

    // Question 3
    int pizza_total,slices_per_pizza,visitors,leftover_slices;
    cout << "How many pizzas" << endl;
    cin >> pizza_total;
    cout << "How many slices per pizza" << endl;
    cin >> slices_per_pizza;
    cout << "How many visitors" << endl;
    cin >> visitors;
    // calculating leftover slices
    leftover_slices = (pizza_total * slices_per_pizza) % visitors;
    cout << "Leftover slices: " << leftover_slices << endl;

    // Question 4 
    string school = "FTCC!";
    string team = "Trojans!";
    string letsGo = "Let's go ";

    cout << letsGo + school << endl;
    cout << letsGo + school << endl;
    cout << letsGo + team << endl;


}
