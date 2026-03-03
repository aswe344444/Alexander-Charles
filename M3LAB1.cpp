// if statement example3
// standard header


#include <iostream>
using namespace std;

////
// here we use a new trick that isn't covered until "Functions",
// but the basics aren't too hard to pick up.
// So far main() has been our only function, and all code was
// located there.
//
// In this example, we add multiple functions that are used
// by main(). If this isn't clear to you, don't worry -- we 
// will spend more time on them in detail later.

// declare that we are going to have more functions than main()
// (I will say "function" and "method" interchangeably)
// we should give them "verb" names, like we give our 
// variables "noun" names. 

void chooseTicket1();
void chooseTicket2();

// the lines above tell the program that these functions will 
// exist, but we have to define them later on in the file.
////

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  int choice; 

  // ask the question
  cout << "You won a prize! Pick ticket 1 or 2 for your prize" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  if (1 == choice) {
    chooseTicket1();
  }
  else if (2 == choice) {
    chooseTicket2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void chooseDoor1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Ticket 1" << endl;
  cout << "You win ... A TRIP TO THE BAHAMAS!" << endl;
}

void chooseDoor2() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Ticket 2" << endl;
  cout << "You win ... a 3 star hotel stay." << endl;
}

// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.