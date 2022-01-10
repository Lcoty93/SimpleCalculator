#include <iostream>

using namespace std;


void calculator(double num1, double num2, char op);

int main()
{

    double number1, number2;
    char operation;

    cout << "Enter two numbers with an operation to get the calculation: ";
    cin >> number1 >> operation >> number2;

    calculator(number1, number2, operation);

    system("pause>0");
    // return 0;
}

void calculator(double num1, double num2, char op)
{

    switch (op)
    {
    case '-':cout << num1 << op << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << op << num2 << "=" << num1 + num2; break;
    case '/':cout << num1 << op << num2 << "=" << num1 / num2; break;
    case '*':cout << num1 << op << num2 << "=" << num1 * num2; break;
    default:cout << "Not valid operation!" << endl;
    }
}