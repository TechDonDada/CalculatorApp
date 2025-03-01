#include<iostream>
using namespace std;

void calculator() {
    double num1, num2;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}

int main() {
    calculator();
    return 0;
}
