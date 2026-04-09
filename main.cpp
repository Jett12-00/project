#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "\nEnter a number (0 to exit): ";
        cin >> number;

        if (number == 0)
            break;

        if (number % 2 == 0)
            cout << "Even number" << endl;
        else
            cout << "Odd number" << endl;
    }

    cout << "Program ended!" << endl;
    return 0;
}