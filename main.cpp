#include <iostream>
using namespace std;

int main() {
    char choice = 'Y';

    while (toupper(choice) == 'Y') {
        int num;
        bool validInput = false;

        do {
            cout << "Please enter a positive integer:\n ";
            cin >> num;

            if (num <= 0) {
                cout << num << " is not a positive integer.";
            } else {
                validInput = true;
            }
        } while (!validInput);

        cout << num <<;
        for (int i = num / 2; i > 0; i--) {
            if (num % i == 0) {
                cout << i << ;
            }
        }

        cout << "Would you like to see the divisors of another integer (Y/N)?\n ";
        cin >> choice;
    }

    return 0;
}
