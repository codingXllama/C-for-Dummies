#include <iostream>

using namespace std;

int main()
{

    int start, time, total;
    start = 3, time = 2;

    // Adding 2 variables
    cout << "Adding 2 variables" << endl;
    cout << start + time << endl;

    //Add a variable and a number
    cout << "Add a variable and a number" << endl;
    cout << start + 5 << endl;

    //Add 2 variables and save the result in a variable
    cout << "Add 2 variables and save the result in a variable" << endl;
    total = start + time;

    // Add a variable and a number and save the result in a variable
    total = start + 5;

    // Add a number to what's already in a variable
    total = total + 5;

    // Add a number to what's already in a variable by using a shortcut
    total += 5;

    // Add a variable to what's already in a variable
    total = total + time;

    // Add a variable to what's already in a variable
    total = total + time;

    // Add a variable to what's already in a variable by using a shortcut
    total += time;

    //Add 1 to a variable
    total++;

    return 0;
}