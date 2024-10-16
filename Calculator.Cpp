#include <iostream>
using namespace std;

int main() {
    float num2, num4;
    char operation;

    cout << "Enter the first number: ";
    cin >> num2;


    cout << "Enter the second number: ";
    cin >> num4;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
        cout << "Result: " << num2 + num4 << endl;
        break;
        case '-':
        cout << "Result: " << num2 - num4 << endl;
        break;
        case '*':
        cout << "Result: " << num2 * num4 << endl;
        case '/':
        if (num4 != 0)
        cout << "Result: " << num2 / num4 << endl;
       else
       cout << "Error: Division by zero!" << endl;
       break;
       default:
       cout << "Invalid operation!" << endl;
       break;
    }
    
    return 0;
}


