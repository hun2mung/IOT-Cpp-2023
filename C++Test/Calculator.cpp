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
            cout << ex << "로 나눌 수 없습니다!" << endl;
        }
        break;
    default:
        break;
    }
    return result;
}