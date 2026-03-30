//CSC 134
// M5T2 
// Alexander Charles


#include <iostream>
#include <math.h>
using namespace std;

void printresult(int number, int result)
{
    cout << number << " : " << result << endl;
}
int growth(int number)
{
    int result =  pow((double)2, (double)number);
    return result;
}
 int main() 
 {
    int number,result;
    number = 1;
    result = growth(number);
    printresult(number, result);
    while(number <= 10) 
    {
        result = growth(number); 
        printresult(number, result);
        number++;
    }
 }