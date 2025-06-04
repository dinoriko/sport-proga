#include <iostream>
using namespace std;

int main() {
    float result = 5 / 2.0;
    cout << "Result of 5 / 2: " << result << endl;

    const float pi = 3.14;
    cout << "Constant pi: " << pi << endl;

    char ch = 'A';
    cout << "ASCII code of char: " << (int)ch << endl;

    int i;
    float f;
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;
    cout << "Sum: " << i + f << endl;

    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    char nextChar = inputChar + 1;
    cout << "Next ASCII character: " << nextChar << endl;

    return 0;
}


