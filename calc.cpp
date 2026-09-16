#include <iostream>
using namespace std;
int main()
{

    while (true)
    {
        int number1, number2;
        char operation;
        cout << "please enter one of the following operations: + , - , * , / " << endl;
        cin >> operation;
        cout << "please enter two integers: " << endl;
        cin >> number1 >> number2;
        switch (operation)
        {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            break;
        case '/':
            cout << number1 << " / " << number2 << " = " << (double)number1 / number2 << endl;
            break;
        default:
            break;
        }
        bool continueCalc;
        cout << "Do you want to continue? (1 for yes, 0 for no): \n";
        cin >> continueCalc;
        if (!continueCalc)
        {
            break;
        }
    }
    return 0;
}