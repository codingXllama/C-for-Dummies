#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout << "Dividing 28 by 14." << endl;
    firstNumber = 28;
    secondNumber = 14;
    cout << "The Quotient of \"28\" and \"14\" is " << firstNumber / secondNumber << endl;
    cout << "The Remainder of \"28\" and \"14\" is " << firstNumber % secondNumber << endl;

    firstNumber = 32;
    secondNumber = 2;
    cout << "Dividing 32 by 2." << endl;
    cout << "The Quotient of Dividing \"32\" / \"2\" is" << firstNumber / secondNumber << endl;

    return 0;
}