/* 
CSC 134
M1T1 - Hello World!
2/2/2026
*/ 

// magic words
#include <iostream>
using namespace std;

int main() 
{
    // Greet the user
    cout << "Hello User!" << endl; // endl stands for endline
    cout << "what's your name?" << endl;
    string name;
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    return 0;
}
