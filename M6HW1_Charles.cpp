/*
CSC 134
M6HW1 - Choose your own adventure
Alexander Charles
4/27/26
*/

#include <iostream>
using namespace std;

int main() {
    // Choose your own adventure
    cout << "You are in a undergound maze to find the legendary Eye of Horus! There are 3 doors to choose from. Do you go Door 1, 2 , or 3?";
    int choice;
    cin >> choice;  
    switch (choice) {
        case 1:
            cout << "You find a treasure chest containing a few jewels but nothing containing the Eye of Horus. Unfortunately the door locked behind you, forever trapping you in the room. Game Over!" << endl;
            break;
        case 2:
            cout << "You encounter a monster! Game over!" << endl;
            break;
        case 3:
            cout << "You find a secret passage and escape the maze!" << endl;
            cout << "You find a living statue looking towards your way." << endl;
            cout << "The statue opens its stone eyes and whispers a math hint:" << endl;
            cout << "  'The Eye of Horus is built from fractions: 1/2 + 1/4 + 1/8 + 1/16 + 1/32 + 1/64.'" << endl;
            cout << "  'Those parts add to 63/64. The missing piece to make the whole eye is the smallest fraction: 1/64.'" << endl;
            cout << "Use that same idea to find the final piece of the Eye of Horus." << endl;
            cout << "Which fraction completes the Eye of Horus?" << endl;
            cout << "  1) 1/64" << endl;
            cout << "  2) 1/32" << endl;
            cout << "  3) 1/128" << endl;
            cout << "Enter 1, 2, or 3: ";
            int statueChoice;
            cin >> statueChoice;
            if (statueChoice == 1) {
                cout << "The statue smiles and the Eye of Horus appears in golden light. You solved the riddle and escape with the Eye of Horus!" << endl;
            } else {
                cout << "The statue remains still. The hint shows the missing fraction is 1/64, so that answer was correct." << endl;
                cout << "You still escape, but the Eye of Horus remains hidden." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please choose Door 1, 2, or 3." << endl;
            break;
    }
}