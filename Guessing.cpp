#include <iostream>
using namespace std;
int main() {
    int secretNumber = 50;
    int guess;
cout << "=== Guessing Game ===" << endl;
    do {
cout << "Enter your guess: ";
cin >> guess;
    if (guess > secretNumber) {
cout << "Too high!" << endl;
        }
else if (guess < secretNumber) {
cout << "Too low!" << endl;
        }
        else {
cout << "Correct!" << endl;
        }
} while (guess != secretNumber);
return 0;
}
