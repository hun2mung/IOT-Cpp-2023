#include<iostream>
#include "Calculator.h"
using namespace std;
int main()
{
    int c = 0;
    Calculator calculator;
    double x, y, result;
    char cper;
    cout << "Calculator Console Application" << endl << endl << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl << "Press \"ctrl + c\" to exit the program" << endl << endl;

    while (true)
    {
        cout << "input >> ";
        cin >> x >> cper >> y;
        result = calculator.Calculate(x, cper, y);
        cout << "= " << result << endl;
    }
}