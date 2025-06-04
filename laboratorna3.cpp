#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    int choice;
    cout << "Select task (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            float meters;
            cout << "Enter length in meters: ";
            cin >> meters;
            cout << "Centimeters: " << meters * 100 << endl;
            cout << "Millimeters: " << meters * 1000 << endl;
            break;
        }
        case 2: {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            float area = PI * r * r;
            cout << "Area: " << area << endl;
            break;
        }
        case 3: {
            int totalSeconds;
            cout << "Enter total seconds: ";
            cin >> totalSeconds;
            int hours = totalSeconds / 3600;
            int minutes = (totalSeconds % 3600) / 60;
            int seconds = totalSeconds % 60;
            cout << "Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;
            break;
        }
        case 4: {
            int number;
            cout << "Enter an integer: ";
            cin >> number;
            if (number % 2 == 0) {
                cout << "Even number" << endl;
            } else {
                cout << "Odd number" << endl;
            }
            break;
        }
        case 5: {
            char ch;
            cout << "Enter a lowercase letter: ";
            cin >> ch;
            char upper = ch - 32;
            cout << "Uppercase: " << upper << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
