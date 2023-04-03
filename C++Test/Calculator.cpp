#include "Calculator.h"
#include<iostream>
using namespace std;
double Calculator::Calculate(double x, char cper, double y)
{
    double result = 0.0;
    switch (cper) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        try
        {
            if (y == 0) throw y;
            result = x / y;
        }
        catch (int ex)
        {
            cout << ex << "�� ���� �� �����ϴ�!" << endl;
        }
        break;
    default:
        break;
    }
    return result;
}