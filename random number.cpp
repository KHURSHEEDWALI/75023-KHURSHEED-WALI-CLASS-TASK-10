#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    srand(time(0));               
    int secret = rand() % 20 + 1; 
    int guess;

    cout << "Guess the number (1-20):" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Correct! The number was " << secret << "." << endl;
        }

    } while (guess != secret);
    system("pause");

    return 0;
}
