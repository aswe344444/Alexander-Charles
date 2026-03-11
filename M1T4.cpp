// CSC 134
// M4T1 - While
// norrisa
// 3/10/2025


#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "hi" five times
    int number = 0;
    while (number < 5) {
        cout << "Hi " << endl;
        number++;

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;
    int num = MIN_NUMBER;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t " << (num * num) << endl;
        num++;
    }

    return 0; // done
}
}