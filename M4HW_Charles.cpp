/* 
CSC 134
M1HW 
Alexander Charles
3/26/2026
*/ 

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int firstnum, secondnum, answer;;

// Ask the user for a number
    cout << "Enter a number: ";
    cin >> firstnum;
    // Output the answer;
    for (int i = 1; i<= 12; i++)
    {
        answer = firstnum * i;
        cout << firstnum << " times " << i << " is " << answer << endl;
    }
    

}