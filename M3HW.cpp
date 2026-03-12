// CSC 134
// M3HW1 - Silver
// Alexander Charles
// 3/11/2026


#include <iostream>
#include <iomanip>
#include <cmath> 
#include <ctime>
using namespace std;

// question 1
string response;
int main()
{
cout << "Question 1" << endl;
cout << "Hello! I am c++ program!" << endl;
cout << "Do you like me? Please type yes or no." << endl;
cin >> response;
if (response == "yes") {
    cout << "That's great! I'm sure we'll get along." << endl;
}
else if (response == "no") {
    cout << "Well, maybe you'll learn to like me later." << endl;
}
else {
    cout << "If you're not sure… that's OK." << endl;
}
cout << "question 2" << endl;
// Declare all variables
    string meal_name = "Sliver Dollar Pancakes";  
    double meal_price = 0;    
    int num_meals;
    double tax_rate = 0.08;      // 8%
    double tip_amount;
    double tax_amount;
    double sub_total;           // tax before tips
    double total_price;         // tax with tips
    string order_type;
    
    // user input
    cout << "Welcome to IHOP!" << endl;
    cout << "Here is today's special!" << meal_name << endl;
    cout << endl;
    cout << "How Many would you like?";
    cin >> num_meals;
    cout << "Enter the price for the meal: " << endl;
    cin >> meal_price;
    cout << "Is this order dine in or take out? (type dine in or take out)" << endl;
    cin >> order_type;
    if (order_type == "dine in") {
        tip_amount = sub_total * 0.15; // 15% tip for dine in

    }
    
    

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
    
