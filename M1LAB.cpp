//CSC 134
// M1LAB
// Alexander Charles
//2/3/2026

#include <iostream>
using namespace std;

int main() 
{
    string name = "Jane Smith";
    int apples = 255;
    double priceperapple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s Apple Farm" << endl;

    cout << "we have " << apples << "apples for sale" << endl;

    cout << "at a price of $" << priceperapple << " per apple." << endl;

    // caluclate total price
    double totalprice = (double) apples * priceperapple;
    cout << totalprice;

}