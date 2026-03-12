// CSC 134
// M3HW1 - Silver
// Alexander Charles
// 3/11/2026


#include <iostream>
#include <iomanip>
#include <cmath> 
#include <ctime>
using namespace std;
int main()
{
    // question 3
    cout << "Question 3" << endl;
    int seed = time(0);
    srand(seed);
    int math1,math2,answer;
    math1 = (rand() % 9) + 1; // numbers from 1-10
    math2 = (rand() % 9) + 1; // numbers from 1-10
    cout << math1 << " + " << math2 << " = ?" << endl;
    cin >> answer;
    if (answer == math1 + math2) {
        cout << "Correct! Great job!" << endl;
    }
    else {
        cout << "Sorry, that's not correct. The answer is " << math1 + math2 << "." << endl;
}
}