#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int number1, number2;
        char operation;
        // operation input validation loop
        while (true)
        {
            cout << "Please enter one of the following operations: + , - , * , / " << endl;
            cin >> operation;

            if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
            {
                break;
            }
            else
            {
                cout << "Error: Invalid operation. Please choose from (+, -, *, /) only.\n"
                     << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        // Prompt the user for two integers
        while (true)
        {
            cout << "please enter two integers: " << endl;
            if (cin >> number1 >> number2)
            {
                break;
            }
            else
            {
                cout << "Error: Invalid input. You must enter integers.\n"
                     << endl;

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        // Perform the calculation based on the operation
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
            if (number2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
                break;
            }
            else
            {
                cout << number1 << " / " << number2 << " = " << double(number1) / number2 << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
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