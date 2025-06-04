#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    cout << "Select task (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int price = 450;
            float discount = 0.15;
            int finalPrice = price - (price * discount);
            cout << "Discounted price: " << finalPrice << endl;
            break;
        }
        case 2: {
            int birthYear, currentYear;
            cout << "Enter your birth year: ";
            cin >> birthYear;
            cout << "Enter current year: ";
            cin >> currentYear;
            int age = currentYear - birthYear;
            cout << "Your age: " << age << endl;
            break;
        }
        case 3: {
            float x1, y1, x2, y2;
            cout << "Enter coordinates of point 1 (x y): ";
            cin >> x1 >> y1;
            cout << "Enter coordinates of point 2 (x y): ";
            cin >> x2 >> y2;
            float distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
            cout << "Distance: " << distance << endl;
            break;
        }
        case 4: {
            float price, discount;
            cout << "Enter product price: ";
            cin >> price;
            cout << "Enter discount percentage: ";
            cin >> discount;
            float finalPrice = price - (price * discount / 100);
            cout << "Final price: " << finalPrice << endl;
            break;
        }
        case 5: {
            int number;
            cout << "Enter a three-digit number: ";
            cin >> number;
            int sum = (number / 100) + ((number / 10) % 10) + (number % 10);
            cout << "Sum of digits: " << sum << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
