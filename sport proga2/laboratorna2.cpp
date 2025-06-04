#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    cout << "Select task (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            x = x + y;
            y = x - y;
            x = x - y;
            cout << "After swapping: x = " << x << ", y = " << y << endl;
            break;
        }
        case 2: {
            int quantity;
            float price;
            cout << "Enter quantity and price per item: ";
            cin >> quantity >> price;
            float total = quantity * price;
            cout << "Total cost: " << total << endl;
            break;
        }
        case 3: {
            int number;
            cout << "Enter an integer: ";
            cin >> number;
            int lastDigit = number % 10;
            cout << "Last digit: " << lastDigit << endl;
            break;
        }
        case 4: {
            float speed = (120 + 80) / (2 + 1.0);
            cout << fixed << setprecision(2);
            cout << "Average speed: " << speed << " km/h" << endl;
            break;
        }
        case 5: {
            int number;
            cout << "Enter a three-digit number: ";
            cin >> number;
            int reversed = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
            cout << "Reversed number: " << reversed << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
